#include<stdio.h>
int main()
{
    int x=5,y=6,z=7;
    int * p;
    int* r ;
    int *q ;
    p=&x;
    q=&y;
    r=&z;
    printf(" the value of x is %d \n",x);
        printf(" the value of y is %d \n",y);
    printf(" the value of z is %d \n",z);
    printf(" the value of p is %d \n",p);
    printf(" the value of q is %d \n",q);
    printf(" the value of r is %d \n",r);
    printf(" the value of *p is %d \n",*p);
    printf(" the value of *q is %d \n",*q);
    printf(" the value of *r is %d \n",*r);
    printf("swapping pointers \n");
    // swap code , what if i want to make swapping func ?
    int temp1;
    temp1=p;
    r=p;
    p=q;
    q=temp1;
     printf(" the value of x is%d \n",x);
        printf(" the value of y is%d \n",y);
    printf(" the value of z is %d \n",z);
    printf(" the value of p is %d \n",p);
    printf(" the value of q is %d \n",q);
    printf(" the value of r is %d \n",r);
    printf(" the value of *p is %d \n",*p);
    printf(" the value of *q is %d \n",*q);
    printf(" the value of *r is %d \n",*r);


}
