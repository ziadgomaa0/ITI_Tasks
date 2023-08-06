#include<stdio.h>
   int main()
   {
 int flag =0;
  // 1st task trial with easy way 
    int a,s,d,f,g,h,j,k,l,z ; 
    int array_10[10] = {a,s,d,f,g,h,j,k,l,z};
    int x;
    for (int i =0;i<10;i++)
    {
        printf(" please enter number %d \n",i);
    scanf("%d",&array_10[i]);

    }
    printf("please enter the compare number \n");
    scanf("%d",&x);
    for (int i=0;i<10;i++)
    {
        if (x==array_10[i])
        {
        printf("the location of the number is %d",i+1);
        flag =1;
        } 
     if(flag==0) {printf ("the number does not exist");}

        
    }
    //***********************888
  /*  int a,s,d,f,g,h,j,k,l,z ;
      int num;
    printf(" please enter number \n");
    scanf("%d",&a);
    printf(" please enter number \n");
    scanf("%d",&s);
    printf(" please enter number \n");
    scanf("%d",&d);
    printf(" please enter number \n");
    scanf("%d",&f);
    printf(" please enter number \n");
    scanf("%d",&g);
    printf(" please enter number \n");
    scanf("%d",&h);
    printf(" please enter number \n");
    scanf("%d",&j);
    printf(" please enter number \n");
    scanf("%d",&k);
    printf(" please enter number \n");
    scanf("%d",&l);
    printf(" please enter number \n");
    scanf("%d",&z);
    printf("enter the comparing number ")
    scanf("%d",num);
    if (num==a || num ==s || num ==d || num == d || num ==f || num==g || num ==h || num==j ||num ==k || num ==l || num ==z)
    printf("number is %d",num)
   */
   }  