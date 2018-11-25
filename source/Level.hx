import flixel.FlxState;
import flixel.group.FlxGroup;
import Player;
import source.Box;
import flixel.FlxG;
import haxe.ds.IntMap;

/**
 * ...
 * @author Sean Bashaw
 */
class Level
{
	public var walls:FlxGroup;
	private var idCount:Int;
	public var blocks:FlxGroup;
	public var player:Player;
	public var laser:Map<Int,Laser>;
	public var plane:LaserPlane;
	public function new(p:Player){
		idCount = 0;
		walls = new FlxGroup();
		blocks = new FlxGroup();
		plane = new LaserPlane();
		player = p;
		laser = new Map<Int,Laser>();
	}
	public function removeLaser(l:Laser):Bool{
		if (laser.exists(l.getID())){
			laser.remove(l.getID());
			return true;
		}
		return false;
	}
	public function load(st:FlxState):Void{
		st.add(plane);
		st.add(player);
	}
	public function update(elapsed:Float):Void
	{
		FlxG.collide(walls, player, player.onCollide);
		FlxG.collide(blocks, player,player.onCollide);
		FlxG.collide(walls, blocks);
		plane.redraw();
		for (l in laser){
		l.checkFor(player);
		for (w in walls){
			l.checkFor(cast(w,Box));
		}
		for (b in blocks){
			l.checkFor(cast(b, Box));
		}
		l.redraw();
		}
		//super.update(elapsed);
	}
	public function hasLaser(l:Laser):Bool {
		return laser.exists(l.getID());
	}
	public function show(fl:FlxState):Void {
		fl.add(player);
		fl.add(plane);
		for (b in blocks){
			fl.add(b);
		}
		for (w in walls){
			fl.add(w);
		}
	}
	public function addLaser(l:Laser):Int {
		idCount++;
		laser.set(idCount, l);
		l.laserId = idCount;
		return idCount;
	}
	public function addBlock(b:Box):Void{
		blocks.add(b);
	}
	public function addWall(b:Box):Void{
		b.immovable = true;
		walls.add(b);
	}
}