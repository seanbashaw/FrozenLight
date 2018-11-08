import flixel.FlxState;
import flixel.group.FlxGroup;
import Player;
import source.Box;
import flixel.FlxG;

/**
 * ...
 * @author Sean Bashaw
 */
class Level
{
	public var walls:FlxGroup;
	public var blocks:FlxGroup;
	public var player:Player;
	public var laser:Laser;
	public var plane:LaserPlane;
	public function new(){
	{
		walls = new FlxGroup();
		blocks = new FlxGroup();
		plane = new LaserPlane();
		player = p;
		laser = new Laser(300, 190, Laser.DOWN, plane);
		super.create();
	}
	
	public function update(elapsed:Float):Void
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
	public function addWall(b:Box):Void{
		b.immovable = true;
		walls.add(b);
	}
}