package source;
import Laser;
/**
 * ...
 * @author Sean Bashaw
 */
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
import source.Box;
class Mirror extends Box
{
	var slope:Int = 0;
	var flip:Bool = false;
	var lineStyle:LineStyle = { color: FlxColor.WHITE, thickness: 1 };
	override public function checkLaser(l:Laser)
	{
		var aspect = (width / height);
		var xdistance = l.x - x;
		var ydistance = l.y - y;
		if ((l.direction==Laser.LEFT||l.direction==Laser.RIGHT)&&(l.y>y&&l.y<y+height))
		{
			if (l.direction==Laser.LEFT)
			{
				if (x+width<l.x)
				{
					l.laserLength = xdistance - (width * slope) - ((1 - slope) * 2 - 1) * ydistance * aspect;
					if (l.bounceLaser == null)
					{
						l.addLaser(new Laser(l.x - l.laserLength, l.y, flip?Laser.DOWN:Laser.UP, l.plane, l.getLevel()), l.getID());
					}
					else
					{
						l.bounceLaser.updateLaser(l.x - l.laserLength, l.y, flip?Laser.DOWN:Laser.UP);
					}
				}
			}
			if (l.direction == Laser.RIGHT)
			{
				if (x>l.x)
				{
					l.laserLength = -xdistance + (width*slope)+ ((1-slope)*2-1)*-ydistance*aspect;
					if (l.bounceLaser == null)
					{
						l.addLaser(new Laser(l.x + l.laserLength, l.y, flip?Laser.UP:Laser.DOWN, l.plane, l.getLevel()), l.getID());
					}
					else
					{
						l.bounceLaser.updateLaser(l.x + l.laserLength, l.y, flip?Laser.UP:Laser.DOWN);
					}
				}
			}
		}
		if ((l.direction==Laser.UP||l.direction==Laser.DOWN)&&(l.x>x&&l.x<x+width))
		{
			if (l.direction==Laser.UP)
			{
				if (y+height<l.y)
				{
					l.laserLength = ydistance - (height*slope) - ((1-slope)*2-1)*xdistance/aspect;
					if (l.bounceLaser==null)
					{
						l.addLaser(new Laser(l.x, l.y - l.laserLength, flip?Laser.RIGHT:Laser.LEFT, l.plane, l.getLevel()), l.getID());
					}
					else
					{
						l.bounceLaser.updateLaser(l.x, l.y - l.laserLength, flip?Laser.RIGHT:Laser.LEFT);
					}
				}
			}
			if (l.direction == Laser.DOWN)
			{
				if (y>l.y)
				{
					l.laserLength = -ydistance + (height*slope) + ((1-slope)*2-1)*xdistance/aspect;
					if (l.bounceLaser==null)
					{
						l.addLaser(new Laser(l.x, l.y + l.laserLength, flip?Laser.LEFT:Laser.RIGHT, l.plane, l.getLevel()), l.getID());
					}
					else
					{
						l.bounceLaser.updateLaser(l.x, l.y + l.laserLength, flip?Laser.LEFT:Laser.RIGHT);
					}
				}
			}
		}
	}
	public function new(?X:Float=0, ?Y:Float=0, tW:Int, tH:Int, ?flipped:Bool=false)
	{
		super(X, Y, tW, tH);
		if (flipped)
		{
			slope = 1;
		}
		flip = flipped;
		makeGraphic(tW, tH, FlxColor.TRANSPARENT,true);
		drawLine(0, 0, 0, tH, lineStyle);
		drawLine(0, 0, tW, 0, lineStyle);
		drawLine(0, tH, tW, tH, lineStyle);
		drawLine(tW, 0, tW, tH, lineStyle);
		drawLine(0, tH*slope, tW, (1-slope)*tH, lineStyle);
	}

}