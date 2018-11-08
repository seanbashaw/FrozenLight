package;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.FlxG;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxColor;
class LaserPlane extends FlxSprite
{
    public function new()
    {
        super(0, 0);
		makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		scrollFactor.set(0, 0);
	}

	public function redraw(){
	fill(FlxColor.TRANSPARENT);
	
	}
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }
}