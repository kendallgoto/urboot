/*
 * pins_interrupt_vect.h
 *
 * Assigns interrupt vectors to pin names. Do not edit this file:
 * it was automatically generated by pins_interrupt_vect.

 * Published under GNU General Public License, version 3 (GPL-3.0)
 * meta-author Stefan Rueger
 *
 * v 1.0
 * 05.06.2016
 */

#ifndef PINS_INTERRUPT_VECT_H
#define PINS_INTERRUPT_VECT_H

#include "Arduino.h"

// macros for INTx_vect only
#define       INT_vectPin3     INT0_vect
#define       INT_vectPin9     INT1_vect

// macros for PCINTx_vect only
#define     PCINT_vectPin0   PCINT1_vect
#define     PCINT_vectPin1   PCINT1_vect
#define     PCINT_vectPin2   PCINT1_vect
#define     PCINT_vectPin3   PCINT1_vect
#define     PCINT_vectPin4   PCINT1_vect
#define     PCINT_vectPin5   PCINT0_vect
#define     PCINT_vectPin6   PCINT0_vect
#define     PCINT_vectPin7   PCINT0_vect
#define     PCINT_vectPin8   PCINT0_vect
#define     PCINT_vectPin9   PCINT0_vect
#define     PCINT_vectPin10  PCINT0_vect
#define     PCINT_vectPin11  PCINT0_vect
#define     PCINT_vectPin12  PCINT0_vect
#define     PCINT_vectPin13  PCINT1_vect

// macros for either INTx_vect (preferred) or PCINTx_vect
#define INT_PCINT_vectPin0   PCINT1_vect
#define INT_PCINT_vectPin1   PCINT1_vect
#define INT_PCINT_vectPin2   PCINT1_vect
#define INT_PCINT_vectPin3     INT0_vect
#define INT_PCINT_vectPin4   PCINT1_vect
#define INT_PCINT_vectPin5   PCINT0_vect
#define INT_PCINT_vectPin6   PCINT0_vect
#define INT_PCINT_vectPin7   PCINT0_vect
#define INT_PCINT_vectPin8   PCINT0_vect
#define INT_PCINT_vectPin9     INT1_vect
#define INT_PCINT_vectPin10  PCINT0_vect
#define INT_PCINT_vectPin11  PCINT0_vect
#define INT_PCINT_vectPin12  PCINT0_vect
#define INT_PCINT_vectPin13  PCINT1_vect

// macros for either INTx_vect or PCINTx_vect (preferred)
#define PCINT_INT_vectPin0   PCINT1_vect
#define PCINT_INT_vectPin1   PCINT1_vect
#define PCINT_INT_vectPin2   PCINT1_vect
#define PCINT_INT_vectPin3   PCINT1_vect
#define PCINT_INT_vectPin4   PCINT1_vect
#define PCINT_INT_vectPin5   PCINT0_vect
#define PCINT_INT_vectPin6   PCINT0_vect
#define PCINT_INT_vectPin7   PCINT0_vect
#define PCINT_INT_vectPin8   PCINT0_vect
#define PCINT_INT_vectPin9   PCINT0_vect
#define PCINT_INT_vectPin10  PCINT0_vect
#define PCINT_INT_vectPin11  PCINT0_vect
#define PCINT_INT_vectPin12  PCINT0_vect
#define PCINT_INT_vectPin13  PCINT1_vect

// macros to replace static const uint8_t XYZ;
#define	CS	12
#define	COPI	10
#define	CIPO	 8
#define	SCK	11
#define	SDA	 0
#define	SCL	 2
#define	A3	(14+9)
#define	A5	(14+7)
#define	A6	(14+0)
#define	A7	(14+1)
#define	A8	(14+2)
#define	A9	(14+3)
#define	A10	(14+4)
#define	A11	(14+5)
#define	A12	(14+6)
#define	A13	(14+10)

#endif
