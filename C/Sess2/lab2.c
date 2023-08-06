#include<stdio.h>
   int main()
   {
 //  (5<7)?printf("%d",0%100):printf("ziad") ;
 // if (6>5) printf("ziad") ; testing 1 line if 
  

    //signed char x=128,y=1;
    //if (x && y) printf("ok \n"); // logical and 
    //if( x & y ) printf(" not ok \n") ; //  bitwis operator will not be true 
   
   // switch don't forget to save 
  /*/ int x =5;
   switch (x)
   {
      case 2:
      printf("2");
      case 5:
      printf("5");
      case 7:
      printf("7");
      break;  
   } */
   
   /*/ calculating working hour 
   int hour,sal;
   printf("please enter ur salary \n");
   scanf("%d",&hour);
   if (hour<40) sal = (hour*50)-(0.1*(hour*50)) ;
   else sal = (hour*50);
   printf("salary is %d",sal); 
   int num,res;
   printf("please enter ur number\n");
   scanf("%d",&num);
  // if(num%2==1) printf("number is odd");
   //else printf("number is even");
  res= (num>>0)&1;
   if (res==1) printf("number is odd");
   else printf("number is even");
   */
  //// lap 4 printing rating 
  float grade ;
  printf("enter ur grade ");
scanf("%f",grade);
if (0 <= grade && grade <= 50 ) printf("ur rate is weak");
else if (0 <= grade && grade <= 50) printf("ur rate is pass");
else if (0 <= grade && grade <= 50) printf(" ur rate is good");
else if (0 <= grade && grade <= 50) printf(" ur rate is  v good");
//else if (80<grade) printf(" ur rate is excellent");
else printf(" ur rate is excellent");


   }