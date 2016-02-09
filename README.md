                             ____                                      _             
                            |  _ \ __ _  ___ _ __ ___   __ _ _ __  ___(_) ___  _ __  
                            | |_) / _` |/ __| '_ ` _ \ / _` | '_ \/ __| |/ _ \| '_ \ 
                            |  __/ (_| | (__| | | | | | (_| | | | \__ \ | (_) | | | |
                            |_|   \__,_|\___|_| |_| |_|\__,_|_| |_|___/_|\___/|_| |_|
                            --------------------- IN DEVELOPMENT --------------------

<!--
![](img/Logo-888.png)
-->

## HOW-TO git

### 1. Setup
- ___git-lfs___ installieren: <https://git-lfs.github.com/>
- Im Repository ausführen:

        $> git lfs install

- Im Menü unter ___Source Control___ > ___Connect to Source Control___ wählen
- _git_ auswählen und Pfad zur _git.exe_ prüfen
- Sich freuen! :smile:


### 2. Änderungen teilen
- Wenn neue Dateien hinzugefügt wurden, die größer als _50MB_ sind, diese zu ___lfs___ hinzufügen:

        $> git lfs track DATEINAME

- Änderunen _commiten_
 - Option 1: über Kommandozeile:

          $> git commit -am "NACHRICHT"

 - Option 2: über Unreal Editor, unter ___Source Control___ > ___Submit to Source Control...___
- Änderungen zum Server pushen

        $> git push
