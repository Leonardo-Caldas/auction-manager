#ifndef AM_MATH_H
#define AM_MATH_H
#include <cmath>
// TODO: THIS IS COMPLETELY NON SENSE, WONT ERASE IT NOW BECAUSE MY EGO IS HURT
namespace auction_manager
{
    class AMMath
    {
        public:
        // count the number of digits of any type of int 
        template <typename T>
        static int count_int_digits(const T int_var)
        {
            int len = 0;
            T int_var_ = int_var;
            while(int_var_ != 0)
            {
                int_var_ /= 10;
                len++;
            }
            len = int_var / 
            return len;
        }
    };
} //namespace auction_manager

#endif // AM_MATH_H