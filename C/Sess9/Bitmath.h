
#include<stdio.h>
#define set_bit(number, shift_bit) (number |= (1 << shift_bit))
#define toggle_bit(number, bit_no) (number ^= (1 << bit_no))
#define clear_bit(number, bit_no) (number &= ~(1 << bit_no) )

int main()
{
  
}