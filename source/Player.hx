 package;
 import source.Box;
 import flixel.util.FlxColor;
 import flixel.FlxG;
 import flixel.FlxObject;
 class Player extends Box
 {
	 var speed:Float = 100;
	 var landed:Bool = true;
     public function new(?X:Float=0, ?Y:Float=0)
     {
         super(X, Y,16,16);
		 makeGraphic(16, 16, FlxColor.BLUE);
     }
	 function movement():Void{
		 var _up:Bool = false;
		 var _down:Bool = false;
		 var _left:Bool = false;
		 var _right:Bool = false;
		 _up = FlxG.keys.anyPressed([UP, W]);
		 _down = FlxG.keys.anyPressed([DOWN, S]);
		 _left = FlxG.keys.anyPressed([LEFT, A]);
		 _right = FlxG.keys.anyPressed([RIGHT, D]);
		 if (_left && _right){
			 _left = _right = false;
		 }
		 if (_left || _right){
			 if (_left){
				 velocity.x = -speed;
			 }
			 if (_right){
				 velocity.x = speed;
			 }
		 }
		 if (_up&&landed){
			 velocity.y = -250;
			 landed = false;
		 }
		 velocity.y += accel;
	 }
	 override public function update(elapsed:Float):Void
 {
     movement();
     super.update(elapsed);
 }
 public function onCollide(object1:FlxObject, object2:FlxObject):Void{
	 if (object2.y < object1.y){
		 landed = true;
	 }
 }
 }