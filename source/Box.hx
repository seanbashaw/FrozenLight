package source;
import Laser;
/**
 * ...
 * @author Sean Bashaw
 */
import flixel.FlxSprite;
import flixel.util.FlxColor;
class Box extends FlxSprite
{
	var accel:Float = 7;
	public function checkLaser(l:Laser)
	{
		//If the box covers the laser don't show a laser
		if ((l.y > y && l.y < y + height) && (l.x > x && l.x < x + width))
		{
			l.laserLength = 0;
		}
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
					l.laserLength = (l.y-y-height);
				}
			}
			if (l.direction == Laser.DOWN)
			{
				if (y>l.y)
				{
					l.laserLength = (y-l.y);
				}
			}
		}
	}
	public function new(?X:Float=0, ?Y:Float=0, tW:Int, tH:Int)
	{
		super(X, Y);
		drag.x = 200;
		drag.y = 1;
		makeGraphic(tW, tH, FlxColor.BLUE);

	}

	override public function update(elapsed:Float):Void
	{
		if (!immovable)
		{
			velocity.y += accel;
		}
		super.update(elapsed);
	}
}