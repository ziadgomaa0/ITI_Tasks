#include<stdio.h>

typedef union strctsize
{
   struct{
    char b0 :1;
    char b1 :1;
    char b2 :1;
    char b3 :1;
   }Bit; //creating object of the struct called bit
   char Byte; // byte share the same memory 
}Register;

int main()
{
 Register x; // making an object of union
 x.Byte=34; // access the whole varaible 
 x.Bit.b0 =1; //access first bit of the variable
}