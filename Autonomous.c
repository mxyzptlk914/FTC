#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Hubs,  S2, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     leftMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     rightMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_1,     leftArmMotor,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S2_C1_2,     rightArmMotor,        tmotorTetrix, openLoop)
#include "5599lib.h" //include team library
#include "JoystickDriver.c"  //Include file to "handle" the Bluetooth messages.

void initializeRobot(){
	 //any and all initialization tasks go here
}


/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                         Main Task
//
// The following is the main code for the autonomous robot operation. Customize as appropriate for
// your specific robot.
//
// The types of things you might do during the autonomous phase (for the 2008-9 FTC competition)
// are:
//
//   1. Have the robot follow a line on the game field until it reaches one of the puck storage
//      areas.
//   2. Load pucks into the robot from the storage bin.
//   3. Stop the robot and wait for autonomous phase to end.
//
// This simple template does nothing except play a periodic tone every few seconds.
//
// At the end of the autonomous period, the FMS will autonmatically abort (stop) execution of the program.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////


task main(){
	// FTC required init code //
	initializeRobot();
	waitForStart();
	///////////////////////////
	runDriveMotors(75,4000); // Run drive motors at power 50 for 4 secs
	runDriveMotors(0,4000);
	runArmMotors(50,4000); // Run arm motors at power 50 for 4 secs
}
