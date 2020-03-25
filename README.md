# JSBSimCommander
JSBSim Commander is a GUI front-end for the development of aircraft flight models for the JSBSim flight dynamics model.


http://jsbsimcommander.sourceforge.net/

Forked from kevinswat/JSBSimCommander

Modifed some files to build it on recent Debian systems.
Tried on a Debian 8 amd64 machine and a Boss Linux Drishti x86 machine with wxGTK 2.8.12
Builds successfully and is able to read the F16.xml file from the old windows release of JSBSim Commander
Haven't tried configuring a new aircraft model yet.

Needs ansi (non-unicode) build of wx-widgets. Check your wx-config and documentation. 
Or, it can be built from wxGTK source using 
./configure --disable-unicode
