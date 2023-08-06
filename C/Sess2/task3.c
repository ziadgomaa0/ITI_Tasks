#include<stdio.h>
   int main()
   {
    int a,b,c;
    printf("enter a \n");
    scanf("%d",&a);
    printf("enter b \n");
    scanf("%d",&b);
    printf("enter c \n");
    scanf("%d",&c);
    if (a>b){
        if(a>c) printf("a is the larget number %d \n",a);
        //else if (c>a) printf("c is the largest number %d ",c);
    }
    else if(b>c) printf(" b is the larget number %d",b);
    else printf("c is the largest number %d ",c);

   }