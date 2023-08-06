#include<stdio.h>
int main()
{
    int a[] ={5,16,7,89,45,32};
    int *p=&a[2];
    printf("%d \n",*(--p));
    printf("%d",*(p--)); // in both 16 will be printed 
    return 0;
    
}