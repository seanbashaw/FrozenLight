package;

import flixel.FlxState;
import Laser;
import source.Mirror;
import source.Box;
import flixel.group.FlxGroup;
class PlayState extends FlxState
{
	public var current:Level;
	override public function create():Void
	{
		current = startLevel();
		current.show(this);
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		current.update(elapsed);
		super.update(elapsed);
	}
	public function startLevel():Level{
		var nl:Level = new Level(new Player(250, 150));
		nl.walls = new FlxGroup();
		nl.blocks = new FlxGroup();
		nl.plane = new LaserPlane();
		nl.addLaser(new Laser(300, 190, Laser.DOWN, nl.plane, nl));
		nl.addWall(new Box(250, 300, 400, 20));
		nl.addWall(new Box(200, 350, 100, 20));
		nl.addBlock(new Mirror(300, 200, 60, 30));
		//nl.addBlock(new Mirror(400, 200, 60, 30, true));
		return nl;
	}
}