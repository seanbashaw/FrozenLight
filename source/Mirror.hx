package source;
import Laser;
/**
 * ...
 * @author Sean Bashaw
 */
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
class Mirror extends Box
{
	var slope:Int = 0;
	var lineStyle:LineStyle = { color: FlxColor.WHITE, thickness: 1 };
	override public function checkLaser(l:Laser)
	{
		if ((l.direction==Laser.LEFT||l.direction==Laser.RIGHT)&&(l.y>y&&l.y<y+height))
		{
			if (l.direction==Laser.LEFT)
			{
				if (x+width<l.x)
				{
					l.laserLength = (l.x-x-width);
				}
			}
			if (l.direction == Laser.RIGHT)
			{
				if (x>l.x)
				{
					l.laserLength = (x -l.x);
				}
			}
		}
		if ((l.direction==Laser.UP||l.direction==Laser.DOWN)&&(l.x>x&&l.x<x+width))
		{
			if (l.direction==Laser.UP)
			{
				if (y+height<l.y)
				{
					l.laserLength = (l.y-y-height)+(width-(l.x-x))*(height/width);
				}
			}
			if (l.direction == Laser.DOWN)
			{
				if (y>l.y)
				{
					l.laserLength = (y - l.y) + (l.x - x) * (height / width);
					l.bounceLaser = new Laser(l.x, l.y + l.laserLength,Laser.RIGHT, l.plane);
				}
			}
		}
	}
	public function new(?X:Float=0, ?Y:Float=0, tW:Int, tH:Int, ?flipped:Bool)
	{
		super(X, Y, tW, tH);
		if (flipped)
		{
			slope = 1;
		}
		makeGraphic(tW, tH, FlxColor.TRANSPARENT);
		drawLine(0, 0, 0, tH, lineStyle);
		drawLine(0, 0, tW, 0, lineStyle);
		drawLine(0, tH, tW, tH, lineStyle);
		drawLine(tW, 0, tW, tH, lineStyle);
		drawLine(0, tH*slope, tW, (1-slope)*tH, lineStyle);
	}

}