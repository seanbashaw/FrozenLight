package;

import flixel.FlxState;
import Laser;
import source.Mirror;
import source.Box;
import flixel.FlxG;
import flixel.group.FlxGroup;
class PlayState extends FlxState
{
	public var walls:FlxGroup;
	public var blocks:FlxGroup;
	public var player:Player;
	public var laser:Laser;
	public var plane:LaserPlane;
	override public function create():Void
	{
		startLevel();
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		FlxG.collide(walls, player, player.onCollide);
		FlxG.collide(blocks, player,player.onCollide);
		FlxG.collide(walls, blocks);
		plane.redraw();
		laser.checkFor(player);
		for (w in walls){
			laser.checkFor(cast(w,Box));
		}
		for (b in blocks){
			laser.checkFor(cast(b, Box));
		}
		laser.redraw();
		super.update(elapsed);
	}
	public function startLevel():Void{
		walls = new FlxGroup();
		blocks = new FlxGroup();
		plane = new LaserPlane();
		player = new Player(250, 150);
		laser = new Laser(300, 190, Laser.DOWN,plane);
		add(plane);
		add(player);
		var te:Box = new Box(250, 300, 200, 20);
		var fl:Box = new Box(200, 350, 100, 20);
		var ne:Mirror = new Mirror(300, 200, 60, 30);
		fl.immovable = true;
		te.immovable = true;
		walls.add(fl);
		walls.add(te);
		blocks.add(ne);
		add(fl);
		add(te);
		add(ne);
	}
}