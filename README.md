# uno-injection
## A solution for a cheap injection system ran from an Arduino Uno with an additional board.

Ever wanted to convert any old carbed car with distributor ignition to EFI the cheap way? This will not be easy but it will sure be cheap...
I'm writing this small codebase for the Arduino Uno to take your nugget a decade into the future. 

## The technicals:
The program will feature a couple of simple loops alongside one another to check for various sensor readings and conditions.
These loops include a main loop(for checking whether the engine is idling, revving or even off), a fuel pump loop(for turning 
on and off the fuel pump under certain conditions) and a fuel correction loop(to change the amount of fuel being injected).

## The warnings:
Please note that this is and will probably stay only a very bare Engine Management System. I will not take responsibility for 
any harm or damage caused by implementing this.  
