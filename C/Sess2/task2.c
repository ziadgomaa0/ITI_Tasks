#include<stdio.h>
   int main()
   {
   char ID1 [10] = "ziad" ;
   char PASS1 [10] ="1234" ;
   char passc[10];
   char check [10];
   printf("please enter your id \n");
   scanf("%s",&check) ;
   printf("%s \n",ID1);
   printf("%s \n",check);
   
   if (strcmp(check,ID1)==0) {
      
      printf("enter ur password");
      scanf("%s",&passc);
      if (strcmp(PASS1,passc)==0)
      {
      printf("the user is ziad11 ");
      }
      else printf("wrong pass");
      
   }
   else printf("Wrong ID") ;
   }