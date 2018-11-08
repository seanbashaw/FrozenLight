package;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import source.Box;
import source.Mirror;
using flixel.util.FlxSpriteUtil;
/**
 * ...
 * @author Sean Bashaw
 */

class Laser
{
	static public var LEFT = [ -1, 0];
	static public var RIGHT = [1, 0];
	static public var UP = [0, -1];
	static public var DOWN = [0, 1];
	public var bounceLaser:Laser = null;
	public var direction = RIGHT;
	public var x:Float;
	public var y:Float;
	public var plane:LaserPlane;
	public var obj:Box;
	public var laserLength:Float = 1000;
	var lineStyle:LineStyle = { color: FlxColor.RED, thickness: 1 };
	var minLaser:Float = 1000;
	public function distance(x1:Float, y1:Float, x2:Float, y2:Float):Float
	{
		return Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));
	}
	public function new(X:Float, Y:Float, dir, P:LaserPlane)
	{
		x = X;
		y = Y;
		direction = dir;
		plane = P;
	}
	public function checkFor(b:Box)
	{
			b.checkLaser(this);
			if (bounceLaser != null){
				trace(bounceLaser.laserLength);
				bounceLaser.checkFor(b);
			}
			if (minLaser > laserLength)
			{
				minLaser = laserLength;
				obj = b;
			}
	}
	public function redraw()
	{
		plane.drawLine(x,y, cast (x+direction[0] * minLaser), cast(y+direction[1] * minLaser), lineStyle);
		if (bounceLaser != null){
			bounceLaser.redraw();
		}
		bounceLaser = null;
		obj = null;
		minLaser = 1000;
		laserLength = 1000;
	}
}