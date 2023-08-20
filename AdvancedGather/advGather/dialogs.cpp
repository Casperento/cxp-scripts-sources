#include "_macros.hpp"

class CXP_ADG_RscMapControl
{
	access=0;
	idc=-1;
	type=101;
	style=48;
	default=0;
	enable=1;
	show=1;
	fade=0;
	blinkingPeriod=0;
	x="29 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	h="6 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	sizeEx = PIXEL_GRID_SIZEEX;
	font="RobotoCondensed";
	moveOnEdges=1;
	ptsPerSquareSea=5;
	ptsPerSquareTxt=20;
	ptsPerSquareCLn=10;
	ptsPerSquareExp=10;
	ptsPerSquareCost=10;
	ptsPerSquareFor=9;
	ptsPerSquareForEdge=9;
	ptsPerSquareRoad=6;
	ptsPerSquareObj=9;
	scaleMin=0.001;
	scaleMax=1;
	scaleDefault=0.16;
	alphaFadeStartScale=2;
	alphaFadeEndScale=2;
	maxSatelliteAlpha=0.85;
	text="#(argb,8,8,3)color(1,1,1,1)";
	idcMarkerColor=-1;
	idcMarkerIcon=-1;
	showMarkers=1;
	colorText[] = {1,1,1,1};
	colorBackground[]={0.96899998,0.95700002,0.949,1};
	colorSea[]={0.46700001,0.63099998,0.85100001,0.5};
	colorForest[]={0.62400001,0.77999997,0.38800001,0.5};
	colorForestBorder[]={0,0,0,0};
	colorRocks[]={0,0,0,0.30000001};
	colorRocksBorder[]={0,0,0,0};
	colorLevels[]={0.28600001,0.177,0.093999997,0.5};
	colorMainCountlines[]={0.57200003,0.354,0.18799999,0.5};
	colorCountlines[]={0.57200003,0.354,0.18799999,0.25};
	colorMainCountlinesWater[]={0.491,0.57700002,0.70200002,0.60000002};
	colorCountlinesWater[]={0.491,0.57700002,0.70200002,0.30000001};
	colorPowerLines[]={0.1,0.1,0.1,1};
	colorRailWay[]={0.80000001,0.2,0,1};
	colorNames[]={0.1,0.1,0.1,0.89999998};
	colorInactive[]={1,1,1,0.5};
	colorOutside[]={0,0,0,1};
	colorTracks[]={0.83999997,0.75999999,0.64999998,0.15000001};
	colorTracksFill[]={0.83999997,0.75999999,0.64999998,1};
	colorRoads[]={0.69999999,0.69999999,0.69999999,1};
	colorRoadsFill[]={1,1,1,1};
	colorMainRoads[]={0.89999998,0.5,0.30000001,1};
	colorMainRoadsFill[]={1,0.60000002,0.40000001,1};
	colorGrid[]={0.1,0.1,0.1,0.60000002};
	colorGridMap[]={0.1,0.1,0.1,0.60000002};
	colorTrails[]={0.83999997,0.75999999,0.64999998,0.15000001};
	colorTrailsFill[]={0.83999997,0.75999999,0.64999998,0.64999998};
	fontLabel="RobotoCondensed";
	sizeExLabel="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontGrid="TahomaB";
	sizeExGrid=0.02;
	fontUnits="TahomaB";
	sizeExUnits="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontNames="RobotoCondensed";
	sizeExNames="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	fontInfo="RobotoCondensed";
	sizeExInfo="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	fontLevel="TahomaB";
	sizeExLevel=0.02;
	showCountourInterval=0;
	widthRailWay=4;
	class ActiveMarker
	{
		color[]={0,0,0,1};
		size=2;
	};
	class LineMarker
	{
		lineWidthThin=0.0080000004;
		lineWidthThick=0.014;
		lineDistanceMin=2.9999999e-005;
		lineLengthMin=5;
	};
	class Legend
	{
		x="SafeZoneX + 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		y="SafeZoneY + safezoneH - 4.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
		h="3.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		font="RobotoCondensed";
		sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		colorBackground[]={1,1,1,0.5};
		color[]={0,0,0,1};
	};
	class Task
	{
		icon="\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCreated="\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconCanceled="\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconDone="\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed="\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		color[]=
		{
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])",
			"(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"
		};
		colorCreated[]={1,1,1,1};
		colorCanceled[]={0.69999999,0.69999999,0.69999999,1};
		colorDone[]={0.69999999,1,0.30000001,1};
		colorFailed[]={1,0.30000001,0.2,1};
		size=27;
		importance=1;
		coefMin=1;
		coefMax=1;
	};
	class Waypoint
	{
		icon="\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		color[]={1,1,1,1};
		size=18;
		coefMax=1;
		coefMin=4;
		importance=1;
	};
	class WaypointCompleted: Waypoint
	{
		icon="\a3\ui_f\data\map\mapcontrol\waypointcompleted_ca.paa";
	};
	class CustomMark: Waypoint
	{
		icon="\a3\ui_f\data\map\mapcontrol\custommark_ca.paa";
	};
	class Command: Waypoint
	{
		icon="\a3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
	};
	class Bush
	{
		icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[]={0.44999999,0.63999999,0.33000001,0.40000001};
		size="14/2";
		importance="0.2 * 14 * 0.05 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Rock
	{
		icon="\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		color[]={0.1,0.1,0.1,0.80000001};
		size=12;
		importance="0.5 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class SmallTree
	{
		icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[]={0.44999999,0.63999999,0.33000001,0.40000001};
		size=12;
		importance="0.6 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class Tree
	{
		icon="\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		color[]={0.44999999,0.63999999,0.33000001,0.40000001};
		size=12;
		importance="0.9 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
	};
	class busstop
	{
		icon="\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class fuelstation
	{
		icon="\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class hospital
	{
		icon="\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class church
	{
		icon="\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class lighthouse
	{
		icon="\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class power
	{
		icon="\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class powersolar
	{
		icon="\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class powerwave
	{
		icon="\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class powerwind
	{
		icon="\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class quay
	{
		icon="\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class transmitter
	{
		icon="\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class watertower
	{
		icon="\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={1,1,1,1};
	};
	class Cross
	{
		icon="\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={0,0,0,1};
	};
	class Chapel
	{
		icon="\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={0,0,0,1};
	};
	class Shipwreck
	{
		icon="\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
		size=24;
		importance=1;
		coefMin=0.85000002;
		coefMax=1;
		color[]={0,0,0,1};
	};
	class Bunker
	{
		icon="\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size=14;
		importance="1.5 * 14 * 0.05";
		coefMin=0.25;
		coefMax=4;
		color[]={0,0,0,1};
	};
	class Fortress
	{
		icon="\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.25;
		coefMax=4;
		color[]={0,0,0,1};
	};
	class Fountain
	{
		icon="\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		size=11;
		importance="1 * 12 * 0.05";
		coefMin=0.25;
		coefMax=4;
		color[]={0,0,0,1};
	};
	class Ruin
	{
		icon="\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		size=16;
		importance="1.2 * 16 * 0.05";
		coefMin=1;
		coefMax=4;
		color[]={0,0,0,1};
	};
	class Stack
	{
		icon="\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		size=16;
		importance="2 * 16 * 0.05";
		coefMin=0.40000001;
		coefMax=2;
		color[]={0,0,0,1};
	};
	class Tourism
	{
		icon="\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		size=16;
		importance="1 * 16 * 0.05";
		coefMin=0.69999999;
		coefMax=4;
		color[]={0,0,0,1};
	};
	class ViewTower
	{
		icon="\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		size=16;
		importance="2.5 * 16 * 0.05";
		coefMin=0.5;
		coefMax=4;
		color[]={0,0,0,1};
	};
};

class CXP_ADG_RscText
{
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style = 0x2; // Centered
	type = 0;
	shadow = 0;
	colorShadow[] = {0,0,0,0.5};
	font="RobotoCondensed";
	text = "";
	sizeEx = PIXEL_GRID_SIZEEX;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0};
	linespacing=1;
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};

class CXP_ADG_RscText_Left : CXP_ADG_RscText {style=0x0;};
class CXP_ADG_RscText_Right : CXP_ADG_RscText {style=0x1;};

class CXP_ADG_RscProgressBar
{
	x=0.34400001;
	y=0.61900002;
	w=0.3137255;
	h=0.0261438;
	shadow=2;
	type = 8; // CT_PROGRESS
	texture = "";
	text = "";
	style = 0;
	colorFrame[] = {1, 0, 0, 1};
	colorBackground[] = {0,0,0,0.9};
	colorBar[] = {1, 0, 0, 1};
};

class CXP_ADG_RscButton
{
	idc=-1;
	style=2;
	type = 1;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	shadow=2;
	font="RobotoCondensed";
	sizeEx = PIXEL_GRID_SIZEEX;
	url="";
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,1};
	colorBackgroundActive[] = {0.502,0.502,0.502,1};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorFocused[] = {0,0,0,1};
	colorShadow[] = {0,0,0,0};
	offsetX=0;
	offsetY=0;
	offsetPressedX=0;
	offsetPressedY=0;
	colorBorder[] = {0,0,0,0};
	borderSize=0;
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000004,
		1
	};
};

class CXP_ADG_RscFrame
{
	type=0;
	idc=-1;
	deletable=0;
	style=64;
	shadow=2;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="RobotoCondensed";
	sizeEx = PIXEL_GRID_SIZEEX;
	text="";
	x=0;
	y=0;
	w=0.30000001;
	h=0.30000001;
};

class CXP_ADG_RscStructuredText
{
	access=0;
	idc=-1;
	type=13;
	style=0;
	default=0;
	enable=1;
	show=1;
	fade=0;
	blinkingPeriod=0;
	x="12 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y="7 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	h="1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	colorBackground[]={0.2,0.2,0.2,1};
	text="<img image='\A3\Ui_f\data\GUI\Cfg\Ranks\general_gs.paa' size='0.5' />CT_<t size='0.8' underline='1' color='#ffff8000' font='PuristaBold' shadow='1' shadowColor='#000000'><a href='https://arma3.com'>STRUCTURED</a></t>_TEXT";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx = PIXEL_GRID_SIZEEX;
	tooltip="CT_STRUCTURED_TEXT";
	tooltipColorShade[]={0,0,0,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	class Attributes
	{
		align="left";
		color="#ffffff";
		colorLink="#ff8000";
		size=1;
		font="RobotoCondensed";
	};
};

class CXP_ADG_RscListBox
{
	access=0;
	idc=-1;
	type=5;
	style="0x00 + 0x10";
	default=0;
	enable=1;
	show=1;
	fade=0;
	blinkingPeriod=0;
	x="1 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
	y="11 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
	w="10 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
	h="3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	colorBackground[]={0.2,0.2,0.2,1};
	colorSelectBackground[]={1,0.5,0,1};
	colorSelectBackground2[]={0,0,0,1};
	sizeEx = PIXEL_GRID_SIZEEX;
	font="RobotoCondensed";
	shadow=0;
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.5};
	colorSelect[]={1,1,1,1};
	colorSelect2[]={1,1,1,1};
	colorShadow[]={0,0,0,0.5};
	colorPicture[]={1,0.5,0,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictureDisabled[]={1,1,1,0.5};
	colorPictureRight[]={1,0.5,0,1};
	colorPictureRightSelected[]={1,1,1,1};
	colorPictureRightDisabled[]={1,1,1,0.5};
	tooltip="CT_LISTBOX";
	tooltipColorShade[]={0,0,0,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	period=1;
	rowHeight="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	itemSpacing=0;
	maxHistoryDelay=1;
	canDrag=1;
	soundSelect[]=
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.090000004,
		1
	};
	class ListScrollBar
	{
		width=0;
		height=0;
		scrollSpeed=0.0099999998;
		arrowEmpty="\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull="\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border="\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb="\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		color[]={1,1,1,1};
	};
};

#include "CXP_ADG_MENU.hpp"
