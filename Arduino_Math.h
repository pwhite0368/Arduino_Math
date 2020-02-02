#ifndef Arduino_Math_h
#define Arduino_Math_h

#include "Arduino.h"


class Arduino_Math
{
    public:
//constructor
	Arduino_Math();
/*
Name:slope
Purpose: Calculate the slope of two points
Return: transformed value of xf
Vars:
		xf: input value
		x1: x value of first point 
		y1: y value of first point
		x2: x value of second point 
		y2: y value of second point 
*/
	float slope(float xf,float x1,float y1,float x2,float y2);
/*
Name: 		byte_shift_left
Purpose: 	shift byte left
Return: 	the shifted left bit
Vars:
		l_shift_val: original val
		amount: number of places to shift left
*/	
    	byte shift_left(byte l_shift_val, int amount = 1);
/*
Name: 		byte_shift_right
Purpose: 	shift byte right
Return: 	the shifted right bit
Vars:
		r_shift_val: original val
		amount: number of places to shift right
*/	
    	byte shift_right(byte r_shift_val, int amount= 1);
/*
Name: 		circular_shift_left
Purpose: 	do a circular shift left
Return: 	the circular shifted left bit
Vars:
		c_l_shift_val: original val
		amount: byte length - 1
*/
    	byte circular_shift_left(byte c_l_shift_val, int amount= 7);
/*
Name: 		circular_shift_right
Purpose: 	do a circular shift right
Return: 	the circular shifted right bit
Vars:
		c_r_shift_val: original val
		amount: byte length - 1
*/
    	byte circular_shift_right(byte c_r_shift_val, int amount= 7);
/*
Name: 		flip_bit
Purpose: 	flips all bits
Return: 	flipped bits
Vars:
		bit_to_flip: the bit to flip
		mask: the mask to use to flip
*/    
	byte flip_bit(byte bit_to_flip , byte mask = 0xFF);

};
#endif
