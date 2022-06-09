# CXP ADVANCED GATHER MANUAL

Open the downloaded package and follow instructions below.

1. Copy the **advGather\\** folder into your **missionName.Map\\cxp\\** folder.
2. Open the following files and add the corresponding lines to each one:
    - On **cxp\\cxp_cfgs.cpp** file add:
    ```sqf
    #include "advGather\config.cpp"
    ```
    - On **cxp\\cxp_dialogs.cpp** file add:
    ```sqf
    #include "advGather\dialogs.cpp"
    ```
    - On **cxp\\cxp_functions.cpp** file add:
    ```sqf
    #include "advGather\functions.cpp"
    ```
    - On **cxp\\cxp_notifications.cpp** file add:
    ```sqf
    #include "advGather\notifications.cpp"
    ```

3. Open the provided **stringtable.xml** file and copy all it's content, and paste it inside your **missionName.Map\\stringtable.xml** file, as follows:

    **Example (line 4):**

    <img src="https://is.gd/Jt76HK" style="width:6.5in;height:0.97222in" />

4. Open your **missionName.Map\\config\\Config_Master.hpp** file, scroll down to the end of the file, and comment the following line:

    <img src="https://is.gd/RXU31h" style="width:5.33333in;height:2.67708in" />

5. Open your **missionName.Map\\core\\functions\\fn_actionKeyHandler.sqf** file, and comment the following lines:

    <img src="https://is.gd/MYtUAf" style="width:6.5in;height:2.86111in" />

6. Copy the following code and paste it below the latest commented lines, like:

    ```sqf
    if !(playerSide isEqualTo civilian) exitWith {};
    ['init'] spawn cxpadg_fnc_advGatherMenu;
    ```

    <img src="https://is.gd/njZYoQ" style="width:6.5in;height:2.86111in" />

Now you can configure the system as you wish.

## Configuration

To configure a new gather zone, you have to choose the type of the zone.
The system is compatible with 3 types of zones:

-   **Sellables:** items that you're gonna sell after gathering it in a zone

-   **Tradables:** items that you're gonna process after gathering it in a zone

-   **Minerals:** items that you're gonna process after gathering it in a zone. But you can let players mine more than one item in that zone.

The provided **advGather\\config.cpp** file is pre-configured with the same zones as the Life's **missionName.Map\\config\\Config_Gather.hpp** file.

## Further Instructions

Any further configuration instructions can be found inside the product's **advGather\\config.cpp** file.
