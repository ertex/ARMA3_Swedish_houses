
#define _ARMA_

class CfgPatches
{
	class slask_housetest
	{
		name = "Swedish_houses_pack";
		author = "ertex";
		requiredAddons[] = {"A3_Structures_F"};
		requiredVersion = 0.1;
		units[] = { "Land_slask_Generated2" 		,
					"Land_slask_Generated3" 		,
					"Land_slask_Generated4" 		,
					"Land_slask_Generated5" 		,
					"Land_slask_Generated6" 		,
					"Land_slask_Generated6_gul" 	,
					"Land_slask_Generated7" 		,
					"Land_slask_Generated7_blue" 	, 
					"Land_slask_Generated8" 		,
					"Land_slask_Generated8_blue" 	,
					"Land_slask_Generated8_gul" 	,
					"Land_slask_Generated9" 		,
					"Land_slask_Generated9_vit" 	,
					"Land_slask_Generated10"		,
					"Gustavsbergskranen"};
		weapons[] = {};
	};
		
};


class CfgVehicles
{
	class House;

	class Gustavsbergskranen: House
		{
			_generalMacro = "Gustavsbergskranen";
			
			displayName = "Kranen"; // Name in editor
			model = "slask_house\houses\Gustavsbergskranen.p3d";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};


	class Land_slask_Generated2: House
		{
			_generalMacro = "Land_slask_Generated2";
			
			displayName = "Swedish house 1"; // Name in editor
			model = "slask_house\houses\generated_house_2.p3d";
			editorPreview = "slask_house\previews\Land_slask_Generated2.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated3: House
		{
			_generalMacro = "Land_slask_Generated3";
			displayName = "Swedish house 2"; // Name in editor
			model = "slask_house\houses\generated_house_3.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated3.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated4: House
		{
			_generalMacro = "Land_slask_Generated4";
			
			displayName = "Swedish house 3"; // Name in editor
			model = "slask_house\houses\generated_house_4.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated4.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated5: House
		{
			_generalMacro = "Land_slask_Generated5";
			displayName = "Swedish house 4"; // Name in editor
			model = "slask_house\houses\generated_house_5.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated5.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated6: House
		{
			_generalMacro = "Land_slask_Generated6";
			displayName = "Swedish house 5"; // Name in editor
			model = "slask_house\houses\generated_house_6.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated6.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
			
		};
		
		
	class Land_slask_Generated6_gul: House
		{
			_generalMacro = "Land_slask_Generated6_gul";
			displayName = "Swedish house 5 yellow"; // Name in editor
			model = "slask_house\houses\generated_house_6_gul.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated6_gul.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated7: House
		{
			_generalMacro = "Land_slask_Generated7";
			displayName = "Swedish house 6"; // Name in editor
			model = "slask_house\houses\generated_house_7.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated7.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
	class Land_slask_Generated7_blue: House
		{
			_generalMacro = "Land_slask_Generated7_blue";
			
			displayName = "Swedish house 6 blue"; // Name in editor
			model = "slask_house\houses\generated_house_7_blue.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated7_blue.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated8: House
		{
			_generalMacro = "Land_slask_Generated8";
			displayName = "Swedish house 7"; // Name in editor
			model = "slask_house\houses\generated_house_8.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated8.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated8_blue: House
		{
			_generalMacro = "Land_slask_Generated8_blue";
			displayName = "Swedish house 7 blue"; // Name in editor
			model = "slask_house\houses\generated_house_8_blue.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated8_blue.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated8_gul: House
		{
			_generalMacro = "Land_slask_Generated8_gul";
			displayName = "Swedish house 7 yellow"; // Name in editor
			model = "slask_house\houses\generated_house_8_gul.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated8_gul.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
	class Land_slask_Generated9: House
		{
			_generalMacro = "Land_slask_Generated9";
			displayName = "Swedish house 8 "; // Name in editor
			model = "slask_house\houses\generated_house_9.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated9.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
	class Land_slask_Generated9_vit: House
		{
			_generalMacro = "Land_slask_Generated9_vit";
			displayName = "Swedish house 8 white"; // Name in editor
			model = "slask_house\houses\generated_house_9_vit.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			editorPreview = "slask_house\previews\Land_slask_Generated9_vit.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
		
	class Land_slask_Generated10: House
		{
			_generalMacro = "Land_slask_Generated10";
			displayName = "Swedish house 9"; // Name in editor
			model = "slask_house\houses\generated_house_10.p3d";
			icon = "slask_house\icons\Slaskmakten512.paa";
			//editorPreview = "slask_house\previews\Land_slask_Generated10.jpg";
			
			mapSize = 20.27; // Scale of icon in editor
			author = "ertex";
			scope = 2;
			
			faction = "CIV_F";
			editorCategory = "EdCat_Structures";
			editorSubcategory = "EdSubcat_Residential_Village";
			
		};
		
		
};
