/*
	Author: Casperento
	
	Description:
	Initializes the main safezone function

	This code is provided by CXP SCRIPTS on https://bytex.market/sellers/profile/K970748533
*/
if (!hasInterface) exitWith {};
cxpsfz_stopShooting = false;
cxpsfz_currentSfz = "";

player addEventHandler ["FiredMan",{
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];

	if (cxpsfz_stopShooting) then {
		if (isNull _vehicle && call cxp_utils_fnc_getPlayerSide in (getArray(missionConfigFile >> "Cxp_Config_Safezones" >> "Cxp_Safezones" >> cxpsfz_currentSfz >> "whitelistedSides"))) exitWith {};

		private _whitelistedVeh = [];
		{
			if (typeOf _vehicle isEqualTo (_x select 0) && ((typeName (_x select 1) isEqualTo "STRING" && (_x select 1) isEqualTo "any") || (typeName (_x select 1) isEqualTo "STRING" && {call cxp_utils_fnc_getPlayerSide in (_x select 1)}) || (typeName (_x select 1) isEqualTo "ARRAY" && {call cxp_utils_fnc_getPlayerSide in (_x select 1)}))) exitWith {
				_whitelistedVeh = _x;
				false;
			};
			false;
		} count (getArray(missionConfigFile >> "Cxp_Config_Safezones" >> "Cxp_Safezones" >> cxpsfz_currentSfz >> "whitelistedVehicles"));
		
		if !(_whitelistedVeh isEqualTo []) exitWith {};

		deleteVehicle _projectile;
		titleText [getText(missionConfigFile >> "Cxp_Config_Safezones" >> "cxp_canShootMsg"),"PLAIN",1];
		systemChat format[getText(missionConfigFile >> "Cxp_Config_Safezones" >> "cxp_canShootMsgChat"),name player];
	};
}];

{
	_pos = getArray(_x >> "coordinates");
	_size = getArray(_x >> "size");
	_side = getText(_x >> "side");
	_presence = getText(_x >> "presence");
	_mkBrush = getText(_x >> "brush");
	_mkShape = getText(_x >> "shape");
	_mkColor = getText(_x >> "color");
	_mkOpacity = getNumber(_x >> "opacity");
	_isRectangle = [false, true] select (_mkShape isEqualTo "RECTANGLE");

	_tgg = createTrigger ["EmptyDetector", _pos, false];
	_tgg setTriggerArea [_size select 0, _size select 1, 0, _isRectangle];
	_tgg setTriggerActivation [_side, _presence, true];
	_tgg setTriggerStatements [
		"this && (vehicle player) in thislist && (local player)", 
		format["[0,%1] call cxpsfz_fnc_safezoneMessage", str (configName _x)], 
		format["[1,%1] call cxpsfz_fnc_safezoneMessage", str (configName _x)]
	];

	_mk = createMarkerLocal[format["cxp_sfz_%1",_forEachIndex],_pos];
	_mk setMarkerSizeLocal [(_size select 0), (_size select 1)];
	_mk setMarkerShapeLocal _mkShape;
	_mk setMarkerBrushLocal _mkBrush;
	_mk setMarkerColorLocal _mkColor;
	_mk setMarkerAlphaLocal _mkOpacity;
} forEach ("true" configClasses (missionConfigFile >> "Cxp_Config_Safezones" >> "Cxp_Safezones"));
