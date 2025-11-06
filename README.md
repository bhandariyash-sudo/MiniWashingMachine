Mini Washing Machine Control System

This project is a small-scale simulation of a washing machine built using an ATmega2560 microcontroller. It controls a stepper motor, LEDs, and valves to go through all the basic stages of a wash cycle — fill, wash, drain, rinse, spin, and done.

The system starts when the door is closed and the Start button is pressed. Users can choose hot, warm, or cold water with switches, and each stage of the cycle is shown with LEDs.

What It Does

Waits for the door to close and the Start button to be pressed

Fills the tank with water based on the selected temperature

Agitates the water by rotating the motor back and forth

Drains and refills the tank for rinsing

Spins at high speed to remove water

Lights a “Done” LED when the cycle finishes

Hardware Used

ATmega2560 microcontroller

Push buttons – for door and start controls

Switches – for temperature selection (Hot/Warm/Cold)

Stepper motor – for washing and spinning motion

LEDs – to show wash, spin, and done stages

Valves – for hot, cold, and drain water control

Skills Practiced

Setting up I/O ports

Using bit masking for input/output control

Controlling stepper motors with delays

Writing modular C code for embedded systems
