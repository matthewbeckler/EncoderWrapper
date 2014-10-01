EncoderWrapper
==============

A wrapper for Paul Stoffregen's Encoder library https://www.pjrc.com/teensy/td_libs_Encoder.html

This class contains an instance of Encoder, plus two accessor functions to read and write the wrapped Encoder's equivalent functions.

When you run the included example, there are two Serial.println() statements. The first uses the wrapper function, and the second directly calls the wrapped object's read() function. When I use my Arduino Uno and a LEGO Mindstorms NXT 2.0 motor, the second print statement shows the correctly encoder position value, but the first print statement shows garbage numbers. Here's an example of output from the Arduino serial console:

-----------------------------
620154
0
-----------------------------
C50154
0
-----------------------------
1270154
0
-----------------------------
12E
1
-----------------------------
1EC0154
C
-----------------------------
24E0154
24
-----------------------------
12E
3F
-----------------------------
12E
5B
-----------------------------
3760154
76
-----------------------------
3D80154
92
-----------------------------
12E
AD
-----------------------------
49D0154
C4
-----------------------------
5000154
D4
-----------------------------
5620154
D8
-----------------------------
5C50154
CD
-----------------------------
12E
B6
-----------------------------
68A0154
93
-----------------------------
12E
6A
-----------------------------
12E
40
-----------------------------
12E
1A
-----------------------------
12E
FFFFFFF8
-----------------------------
12E
FFFFFFD8
-----------------------------
12E
FFFFFFBC
-----------------------------
12E
FFFFFFA4
-----------------------------
12E
FFFFFF94
-----------------------------
12E
FFFFFF8E

