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
#define       INT_vectPin2     INT2_vect
#define       INT_vectPin10    INT0_vect
#define       INT_vectPin11    INT1_vect

// macros for PCINTx_vect only
#define     PCINT_vectPin0   PCINT1_vect
#define     PCINT_vectPin1   PCINT1_vect
#define     PCINT_vectPin2   PCINT1_vect
#define     PCINT_vectPin3   PCINT1_vect
#define     PCINT_vectPin4   PCINT1_vect
#define     PCINT_vectPin5   PCINT1_vect
#define     PCINT_vectPin6   PCINT1_vect
#define     PCINT_vectPin7   PCINT1_vect
#define     PCINT_vectPin8   PCINT3_vect
#define     PCINT_vectPin9   PCINT3_vect
#define     PCINT_vectPin10  PCINT3_vect
#define     PCINT_vectPin11  PCINT3_vect
#define     PCINT_vectPin12  PCINT3_vect
#define     PCINT_vectPin13  PCINT3_vect
#define     PCINT_vectPin14  PCINT3_vect
#define     PCINT_vectPin15  PCINT3_vect
#define     PCINT_vectPin16  PCINT2_vect
#define     PCINT_vectPin17  PCINT2_vect
#define     PCINT_vectPin18  PCINT2_vect
#define     PCINT_vectPin19  PCINT2_vect
#define     PCINT_vectPin20  PCINT2_vect
#define     PCINT_vectPin21  PCINT2_vect
#define     PCINT_vectPin22  PCINT2_vect
#define     PCINT_vectPin23  PCINT2_vect
#define     PCINT_vectPin24  PCINT0_vect
#define     PCINT_vectPin25  PCINT0_vect
#define     PCINT_vectPin26  PCINT0_vect
#define     PCINT_vectPin27  PCINT0_vect
#define     PCINT_vectPin28  PCINT0_vect
#define     PCINT_vectPin29  PCINT0_vect
#define     PCINT_vectPin30  PCINT0_vect
#define     PCINT_vectPin31  PCINT0_vect

// macros for either INTx_vect (preferred) or PCINTx_vect
#define INT_PCINT_vectPin0   PCINT1_vect
#define INT_PCINT_vectPin1   PCINT1_vect
#define INT_PCINT_vectPin2     INT2_vect
#define INT_PCINT_vectPin3   PCINT1_vect
#define INT_PCINT_vectPin4   PCINT1_vect
#define INT_PCINT_vectPin5   PCINT1_vect
#define INT_PCINT_vectPin6   PCINT1_vect
#define INT_PCINT_vectPin7   PCINT1_vect
#define INT_PCINT_vectPin8   PCINT3_vect
#define INT_PCINT_vectPin9   PCINT3_vect
#define INT_PCINT_vectPin10    INT0_vect
#define INT_PCINT_vectPin11    INT1_vect
#define INT_PCINT_vectPin12  PCINT3_vect
#define INT_PCINT_vectPin13  PCINT3_vect
#define INT_PCINT_vectPin14  PCINT3_vect
#define INT_PCINT_vectPin15  PCINT3_vect
#define INT_PCINT_vectPin16  PCINT2_vect
#define INT_PCINT_vectPin17  PCINT2_vect
#define INT_PCINT_vectPin18  PCINT2_vect
#define INT_PCINT_vectPin19  PCINT2_vect
#define INT_PCINT_vectPin20  PCINT2_vect
#define INT_PCINT_vectPin21  PCINT2_vect
#define INT_PCINT_vectPin22  PCINT2_vect
#define INT_PCINT_vectPin23  PCINT2_vect
#define INT_PCINT_vectPin24  PCINT0_vect
#define INT_PCINT_vectPin25  PCINT0_vect
#define INT_PCINT_vectPin26  PCINT0_vect
#define INT_PCINT_vectPin27  PCINT0_vect
#define INT_PCINT_vectPin28  PCINT0_vect
#define INT_PCINT_vectPin29  PCINT0_vect
#define INT_PCINT_vectPin30  PCINT0_vect
#define INT_PCINT_vectPin31  PCINT0_vect

// macros for either INTx_vect or PCINTx_vect (preferred)
#define PCINT_INT_vectPin0   PCINT1_vect
#define PCINT_INT_vectPin1   PCINT1_vect
#define PCINT_INT_vectPin2   PCINT1_vect
#define PCINT_INT_vectPin3   PCINT1_vect
#define PCINT_INT_vectPin4   PCINT1_vect
#define PCINT_INT_vectPin5   PCINT1_vect
#define PCINT_INT_vectPin6   PCINT1_vect
#define PCINT_INT_vectPin7   PCINT1_vect
#define PCINT_INT_vectPin8   PCINT3_vect
#define PCINT_INT_vectPin9   PCINT3_vect
#define PCINT_INT_vectPin10  PCINT3_vect
#define PCINT_INT_vectPin11  PCINT3_vect
#define PCINT_INT_vectPin12  PCINT3_vect
#define PCINT_INT_vectPin13  PCINT3_vect
#define PCINT_INT_vectPin14  PCINT3_vect
#define PCINT_INT_vectPin15  PCINT3_vect
#define PCINT_INT_vectPin16  PCINT2_vect
#define PCINT_INT_vectPin17  PCINT2_vect
#define PCINT_INT_vectPin18  PCINT2_vect
#define PCINT_INT_vectPin19  PCINT2_vect
#define PCINT_INT_vectPin20  PCINT2_vect
#define PCINT_INT_vectPin21  PCINT2_vect
#define PCINT_INT_vectPin22  PCINT2_vect
#define PCINT_INT_vectPin23  PCINT2_vect
#define PCINT_INT_vectPin24  PCINT0_vect
#define PCINT_INT_vectPin25  PCINT0_vect
#define PCINT_INT_vectPin26  PCINT0_vect
#define PCINT_INT_vectPin27  PCINT0_vect
#define PCINT_INT_vectPin28  PCINT0_vect
#define PCINT_INT_vectPin29  PCINT0_vect
#define PCINT_INT_vectPin30  PCINT0_vect
#define PCINT_INT_vectPin31  PCINT0_vect

// macros to replace static const uint8_t XYZ;
#define	CS	 4
#define	COPI	 5
#define	CIPO	 6
#define	SCK	 7
#define	SDA	17
#define	SCL	16
#define	A0	24
#define	A1	25
#define	A2	26
#define	A3	27
#define	A4	28
#define	A5	29
#define	A6	30
#define	A7	31

#endif
