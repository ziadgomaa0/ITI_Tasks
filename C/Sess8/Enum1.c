#include<stdio.h>
enum days
{
    saturday,sunday,monday,thrus,wednesday,theu,friday
};

int main()
{
    enum days m;
    m = friday;
    printf("%d \n",m);
    printf("%d \n",friday);
    printf("%d ,\n",sizeof(friday));
}