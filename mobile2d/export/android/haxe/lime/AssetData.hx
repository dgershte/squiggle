package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/c3.png", "assets/c3.png");
			type.set ("assets/c3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/char.png", "assets/char.png");
			type.set ("assets/char.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/char.xml", "assets/char.xml");
			type.set ("assets/char.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/tree.png", "assets/tree.png");
			type.set ("assets/tree.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/trees.xml", "assets/trees.xml");
			type.set ("assets/trees.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/white.png", "assets/white.png");
			type.set ("assets/white.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
