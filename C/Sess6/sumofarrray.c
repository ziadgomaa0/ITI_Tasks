#include<stdio.h>
// getting sum of an array using pointers 
int main()
{
    int a[]={1,23,4,5};
    int sum=0,*ptr;
    for (ptr=&a[0];ptr<&a[3];ptr++)
    {
        sum += *ptr;
    }
    printf(" sum of array is \n %d",sum);
}