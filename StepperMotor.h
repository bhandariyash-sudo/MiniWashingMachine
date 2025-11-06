/*
 * FileName: StepperMotor.h
 * Version: 1
 *
 * Created: 3/14/2025 2:00 PM
 * Author: Yash Bhandari
 *
 * Operations: header for the stepper motor submodule
 */

#ifndef StepperMotor_h_INCLUDED
#define StepperMotor_h_INCLUDED

#if defined(__cplusplus)
extern "C" {
#endif

#pragma message("WARNING: this module uses the bottom nibble of the provided port")

#include <stdbool.h>
#include <stdint.h>

/* NOTE: Custom Types */
// defines run modes for the stepper motor
typedef enum StepperMotorRunMode_t
{
    stepperModeWave = 0,  // wave step mode
    stepperModeFull = 1,  // full step mode
    stepperModeHalf = 2,  // half step mode
} StepperMotorRunMode_t;

/* NOTE: Function prototypes */
// initializes motor port (bottom nibble) and sets up control lines
void SM_init(uint8_t volatile * const pRegister, uint8_t volatile * const pPort);
// moves the motor the given number of rotations in selected mode
void SM_move(StepperMotorRunMode_t mode, double distance);
// moves the motor to a specific position (angle in degrees)
void SM_movePosition(StepperMotorRunMode_t mode, uint16_t distance);
// runs the motor for a set time and direction (1 = CW, 0 = CCW)
void SM_moveTime(StepperMotorRunMode_t mode, bool direction, double time, double stepTime);
// runs the motor for a given number of steps and direction (1 = CW, 0 = CCW)
void SM_moveStepsSigned(StepperMotorRunMode_t mode, bool direction, uint16_t distance);

#if defined(__cplusplus)
} /* extern "C" */
#endif

#endif // StepperMotor_h_INCLUDED
