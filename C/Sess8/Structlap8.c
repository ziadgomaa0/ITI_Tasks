#include<stdio.h>
/*
struct empolyee
{
    int sal;
    int bonus;
    int ded;
}ahmed,waleed,amr;

int main()
{   
    ahmed.sal=500;
    ahmed.bonus=20;
    ahmed.ded=10;
    waleed.bonus=20;
    waleed.ded=10;
    waleed.sal=1000;
    amr.bonus=400;
    amr.ded=10;
    amr.sal=2000;



    char name [10];
    printf("enter ur name ");
    scanf("%s",&name);
    if (strcmp(name,"ahmed")==0)
    {
      printf(" the total is %d",ahmed.sal-ahmed.ded+ahmed.bonus);
    }
     else if (name=="waleed")
    {
      printf(" the total is %d",waleed.sal-waleed.ded+waleed.bonus);
    }
     else 
    {
      printf(" the total is %d",amr.sal-amr.ded+amr.bonus);
    } */
   typedef struct empolyee
{
    int sal;
    int bonus;
    int ded;
}employer;

int main()
{   
  employer ahmed;
  employer waleed;
  employer amr ;
    ahmed.sal=500;
    ahmed.bonus=20;
    ahmed.ded=10;
    waleed.bonus=20;
    waleed.ded=10;
    waleed.sal=1000;
    amr.bonus=400;
    amr.ded=10;
    amr.sal=2000;



    char name [10];
    printf("enter ur name ");
    scanf("%s",&name);
    if (strcmp(name,"ahmed")==0)
    {
      printf(" the total is %d",ahmed.sal-ahmed.ded+ahmed.bonus);
    }
     else if (name=="waleed")
    {
      printf(" the total is %d",waleed.sal-waleed.ded+waleed.bonus);
    }
     else 
    {
      printf(" the total is %d",amr.sal-amr.ded+amr.bonus);
    }

}