# CXP BUG TRACKER MANUAL

Open the downloaded package and follow instructions below.

1. Copy the **client\\bugTracker\\** folder into your **missionName.Map\\cxp\\** folder.
2. Open the following files and add the corresponding lines to each one:
    - On **cxp\\cxp_cfgs.cpp** file add:
    ```sqf
    #include "bugTracker\config.cpp"
    ```
    - On **cxp\\cxp_dialogs.cpp** file add:
    ```sqf
    #include "bugTracker\dialogs.cpp"
    ```
    - On **cxp\\cxp_functions.cpp** file add:
    ```sqf
    #include "bugTracker\functions.cpp"
    ```
    - On **cxp\\cxp_remoteExecs.cpp** file add:
    ```sqf
    #include "bugTracker\remoteExec.cpp"
    ```

3. Open the provided **stringtable.xml** file and copy all it's content, and paste it inside your **missionName.Map\\stringtable.xml** file, as follows:

    **Example (line 4):**

    <img src="./media/image1.png" style="width:6.5in;height:0.97222in" />

4. Open your SQL client and then copy the content of **bugTracker.sql** file to create the persistence dependencies on your server. If you have a different database name than **altislife**, change it on the **USE \`myDatabaseName\`;** statement. And then execute the pasted SQL script.
5. Copy the **server\\bugTracker\\** folder into your **life_server\\** folder.
6. Open your **life_server\\config.cpp** file, and add the code below inside your class ``` CfgFunctions { ``` class:

```sqf
class CxpBugTracker {
  tag = "cxpbt";
  class Bugtracker {
    file = "\life_server\bugTracker";
    class saveBugReported {};
  };
};
```
   
   **Example (lines 13-20):**

   <img src="./media/image3.png" style="width:6.5in;height:6.13889in" />

## Further Instructions

Any further configuration instructions can be found inside the product's **bugTracker\\config.cpp** file.
