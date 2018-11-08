package;
import flixel.util.FlxColor;

/**
 * ...
 * @author Sean Bashaw
 */
class FrozenLaser extends Laser 
{

	public function new(X:Float, Y:Float, dir, P:LaserPlane) 
	{
		super(X, Y, dir, P);
		lineStyle = { color: FlxColor.BLUE, thickness: 1 };
	}
	
}