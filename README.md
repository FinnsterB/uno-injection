# uno-injection
## A solution for a cheap injection system ran from an Arduino Uno with an additional board.

Ever wanted to convert any old carbed car with distributor ignition to EFI the cheap way? This will not be easy but it will sure be cheap...
I'm writing this small codebase for the Arduino Uno to take your nugget a decade into the future. 

## The technicals:
The program will feature a couple of simple loops alongside one another to check for various sensor readings and conditions.
These loops include a main loop(for checking whether the engine is idling, revving or even off), a fuel pump loop(for turning 
on and off the fuel pump under certain conditions) and a fuel correction loop(to change the amount of fuel being injected).

This system needs distributor ignition to work, for it won't be able to send spark signal. Also a trigger pulse is needed which
can be obtained from a built in CAS in the distributor(not excessively common) or a trigger wheel with hall sensor.

I will implement a way to program it through the UART interface but this is still far into the future.

## But why not use Speeduino?
Well, honestly Speeduino is going to be a better option in any case. However I'm trying to make something cheap to just convert
an awful carbed car to EFI and I think I don't need all the functionality the Speeduino offers. This mainly cuts cost. If you've
got the dime to spare then I would greatly suggest to support Speeduino because it's a great project.

## The warnings:
Please note that this is and will probably stay only a very bare Engine Management System. I will not take responsibility for 
any harm or damage caused by implementing this.  
