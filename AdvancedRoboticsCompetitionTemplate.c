// Add Motor Declarations Here
// Add Motor Declarations Here


/*
Advanced Robotics Honors Competition Template v2
Written by Andy Gatza aka "144a"

This template is written so that all you have to edit is the
lines that have double comments asking you to copy and paste
code into them. DO NOT EDIT ANY OTHER PART OF THIS PROGRAM
UNLESS SPECIFIED TO DO SO.

Other Important Information and Declarations (Disregard if you are a student):
-Integer autoTime is the number of milliseconds for the
	autonomous time period.
-Integer teleopTime the number of milliseconds for the
	tele-operated time period.
-Main Timer is T1
*/


// Main Variable Declerations
int autoTime = 30000;
int teleopTime = 180000;

task AutonomousPeriod(){
	// Add Autonomous Code Here
	// Add Autonomous Code Here
}

task TeleoperatedPeriod(){
	// Add Teleop Loop Code Here
	// Add Teleop Loop Code Here
}

task main()
{
	// Auto
  clearTimer(T1);
	startTask(AutonomousPeriod);
	while(T1 < autoTime) {

	}
	stopTask(AutonomousPeriod);

	// Teleop
	clearTimer(T1);
	startTask(TeleoperatedPeriod);
	while(T1 < teleopTime) {

	}
	stopTask(TeleoperatedPeriod);

}
