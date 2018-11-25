package;

import source.Box;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
/**
 * ...
 * @author Sean Bashaw
 */
class Glass extends Box 
{

	var lineStyle:LineStyle = { color: FlxColor.WHITE, thickness: 1 };
	override public function checkLaser(l:Laser)
	{

	}
	public function new(?X:Float=0, ?Y:Float=0, tW:Int, tH:Int)
	{
		super(X, Y, tW, tH);
		makeGraphic(tW, tH, FlxColor.TRANSPARENT,true);
		drawLine(0, 0, 0, tH, lineStyle);
		drawLine(0, 0, tW, 0, lineStyle);
		drawLine(0, tH, tW, tH, lineStyle);
		drawLine(tW, 0, tW, tH, lineStyle);
	}

	
}