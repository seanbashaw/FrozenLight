package;

import flixel.FlxState;
import flixel.ui.FlxButton;
import flixel.FlxG;
class MenuState extends FlxState
{
	var btnPlay:FlxButton;
	function clickPlay():Void{
		FlxG.switchState(new PlayState());
	}
	override public function create():Void
	{
		btnPlay = new FlxButton(0, 0, "Play", clickPlay);
		add(btnPlay);
		btnPlay.screenCenter();
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}