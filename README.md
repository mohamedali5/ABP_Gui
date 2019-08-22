# ABP_Gui
Graphical User Interface for the AlternateBitProtocolSimulatorProject

NOTE: This project requires the AlternateBitProtocolSimulatorProject (https://github.com/mohamedali5/AlternateBitProtocolSimulator) project to be working.

## STEPS TO RUN THE SIMULATOR
---
1- Download Qt Installer V 5.13.0 from https://www.qt.io/offline-installers for your operating system.

2- Run the installer and make sure you include MinGW in the added options when installing.

3- Download or clone this repository to the same directory that contains your AlernateBitProtocolSimulator project.

4- When installation is complete, open Qt editor and open a project, you will need to browse to the files downloaded from step 3
   and chose the ABP_Gui.pro file. 
   
5- At this point, you should have the ABP_Gui project open on your Qt IDE. 

6- Make sure the path to the output file in the readFile() function in maingui.cpp matches your output file directory for AlernateBitProtocolSimulator project.

7- Run the project from the Qt Ide.

 Initialize Simulator button will read the output files from AlernateBitProtocolSimulator project.
 
 Run Simulator button will print the output to the screen. Everytime the run button is clicked, a new line of output will be printed.

