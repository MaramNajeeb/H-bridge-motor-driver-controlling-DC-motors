# H-bridge-motor-driver-controlling-DC-motors

This task aims to control two DC- motors using H-bridge motor driver. Since l298N motor driver is not available in Tinkercad, the l293D IC is used instead. The pins of that IC are shown below.

![L293D-Dual-H-Bridge-Motor-Driver-IC-Pinout](https://user-images.githubusercontent.com/85887579/124116251-6a0afb00-da77-11eb-8cd7-425da73255bf.png)


It has two Vcc pins, one is connected to the 5V Arduino port and the other to a battery. The two enable pins are connected to PWM port on Ardunio.  The input pins are connected to digital ports and the output pins are connected to the motors terminals.

In the coding, we can control the speed and the movement of each motor. 

The two speed control pins "Enable" are used to turn ON, OFF and control speed of the motor.

By using the direction control pins "Input", we can control whether the motor spins forward or backward by applying either a logic HIGH(5 Volts) or logic LOW(Ground) to these pins.


![H-bridge l293D controlling DC motors ](https://user-images.githubusercontent.com/85887579/124116495-aa6a7900-da77-11eb-86c3-b65e3c9cb2db.png)


Tinkercad: https://www.tinkercad.com/things/b6JJCYDeKii
