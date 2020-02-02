#include "Arduino_Math.h"


	Arduino_Math::Arduino_Math() {}
	
    float Arduino_Math::slope(float xf,float x1,float y1,float x2,float y2)
    {
            float m = (y2-y1)/(x2-x1);
            return (xf*m - x1*m + y1);
    }
    byte Arduino_Math::shift_left (byte l_shift_val, int amount)
    {
        return l_shift_val << amount;
    }
    byte Arduino_Math::shift_right (byte r_shift_val, int amount)
    {
        return r_shift_val >> amount;
    }
    byte Arduino_Math::circular_shift_left(byte c_l_shift_val, int amount)
    {
        return (c_l_shift_val << 1 | (c_l_shift_val >> amount));
    }
    byte Arduino_Math::circular_shift_right(byte c_r_shift_val, int amount)
    {
        return (c_r_shift_val >> 1 | (c_r_shift_val << amount));
    }
    byte Arduino_Math::flip_bit(byte bit_to_flip, byte mask)
    {
        return bit_to_flip ^ mask;   
    }



