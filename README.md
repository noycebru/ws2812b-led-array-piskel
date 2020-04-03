This multi-file version is thanks to an anonymous viewer, thank you! Viewers and I created the pixel artwork.
To get the multi-file version to compile on Arduino, download the zip file of the three header files and the INO and make sure they're in the same folder when you compile.

**the example file is the version before the multi-file version was created**

COMPILING REQUIREMENTS:
Using Arduino IDE on Win10:
-----------------------------------------------------

Install: 
         
	 Adafruit NeoPixel library
	 
	 Adafruit NeoMatrix library
	 
	 Adafruit GFX library

Sketch-> Include Library:
	 
	 Adafruit NeoPixel library
	 
	 Adafruit NeoMatrix library
	 
	 Adafruit GFX library

-----------------------------------------------------

Tools->Board: 

	 Generic ESP8266 Module

FILE DESCRIPTIONS:
-----------------------------------------------------

bmp.h:
	
	where all bmp image bitmap arrays are
	stored.


-----------------------------------------------------

defines.h:
	
	where all defines/global variables/includes 
	are stored.


-----------------------------------------------------

rgb_functions.h:
	
	where all the functions used in main are 
	stored.

-----------------------------------------------------

main/main.c:
	
	source code for anyone not using Arduino IDE

-----------------------------------------------------
