# CXP SAFEZONES MANUAL

Open the downloaded package and follow instructions below.

1. Copy the **safeZones\\** folder into your **missionName.Map\\cxp\\** folder.
2. Open the following files and add the corresponding lines to each one:
    - On **cxp\\cxp_cfgs.cpp** file add:
    ```sqf
    #include "safeZones\config.cpp"
    ```
    - On **cxp\\cxp_functions.cpp** file add:
    ```sqf
    #include "safeZones\functions.cpp
    ```
3. To use the **can_lockpick** option you need to make some changes in your mission:
    - On **missionName.Map\\core\\configuration.sqf** add:
    ```sqf
    life_canLockPick = true;
    ```

    **Example (line 46):**

    <img src="./media/image2.png" style="width:3.42708in;height:1.79167in" />

    - On **missionName.Map\\core\\items\\fn_lockpick.sqf** add:
    ```sqf
    if !(life_canLockpick) exitWith {};
    ```

    **Example (line 9):**

    <img src="./media/image1.png" style="width:6.5in;height:1.72222in" />

## Further Instructions

Any further configuration instructions can be found inside the product's **safeZones\\config.cpp** file.
