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
#define       INT_vectPin0     INT2_vect
#define       INT_vectPin1     INT3_vect
#define       INT_vectPin2     INT1_vect
#define       INT_vectPin3     INT0_vect
#define       INT_vectPin7     INT4_vect

// macros for PCINTx_vect only
#define     PCINT_vectPin8   PCINT0_vect
#define     PCINT_vectPin9   PCINT0_vect
#define     PCINT_vectPin10  PCINT0_vect
#define     PCINT_vectPin11  PCINT0_vect
#define     PCINT_vectPin14  PCINT0_vect
#define     PCINT_vectPin15  PCINT0_vect
#define     PCINT_vectPin16  PCINT0_vect
#define     PCINT_vectPin17  PCINT0_vect
#define     PCINT_vectPin26  PCINT0_vect
#define     PCINT_vectPin27  PCINT0_vect
#define     PCINT_vectPin28  PCINT0_vect

// macros for either INTx_vect (preferred) or PCINTx_vect
#define INT_PCINT_vectPin0     INT2_vect
#define INT_PCINT_vectPin1     INT3_vect
#define INT_PCINT_vectPin2     INT1_vect
#define INT_PCINT_vectPin3     INT0_vect
#define INT_PCINT_vectPin7     INT4_vect
#define INT_PCINT_vectPin8   PCINT0_vect
#define INT_PCINT_vectPin9   PCINT0_vect
#define INT_PCINT_vectPin10  PCINT0_vect
#define INT_PCINT_vectPin11  PCINT0_vect
#define INT_PCINT_vectPin14  PCINT0_vect
#define INT_PCINT_vectPin15  PCINT0_vect
#define INT_PCINT_vectPin16  PCINT0_vect
#define INT_PCINT_vectPin17  PCINT0_vect
#define INT_PCINT_vectPin26  PCINT0_vect
#define INT_PCINT_vectPin27  PCINT0_vect
#define INT_PCINT_vectPin28  PCINT0_vect

// macros for either INTx_vect or PCINTx_vect (preferred)
#define PCINT_INT_vectPin0     INT2_vect
#define PCINT_INT_vectPin1     INT3_vect
#define PCINT_INT_vectPin2     INT1_vect
#define PCINT_INT_vectPin3     INT0_vect
#define PCINT_INT_vectPin7     INT4_vect
#define PCINT_INT_vectPin8   PCINT0_vect
#define PCINT_INT_vectPin9   PCINT0_vect
#define PCINT_INT_vectPin10  PCINT0_vect
#define PCINT_INT_vectPin11  PCINT0_vect
#define PCINT_INT_vectPin14  PCINT0_vect
#define PCINT_INT_vectPin15  PCINT0_vect
#define PCINT_INT_vectPin16  PCINT0_vect
#define PCINT_INT_vectPin17  PCINT0_vect
#define PCINT_INT_vectPin26  PCINT0_vect
#define PCINT_INT_vectPin27  PCINT0_vect
#define PCINT_INT_vectPin28  PCINT0_vect

// macros to replace static const uint8_t XYZ;
#define	SDA	 2
#define	SCL	 3
#define	CS	17
#define	COPI	16
#define	CIPO	14
#define	SCK	15
#define	A0	18
#define	A1	19
#define	A2	20
#define	A3	21
#define	A4	22
#define	A5	23
#define	A6	24 // D4
#define	A7	25 // D6
#define	A8	26 // D8
#define	A9	27 // D9
#define	A10	28 // D10
#define	A11	29 // D12

#endif
