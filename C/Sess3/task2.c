#include<stdio.h>
int main(){
int IDA=1234,IDAMR=5678,IDWAEL=8970;
int passa=7788,passamr=5566,passwael=1122;
int IDCHECK;
int PASSCHECK;
printf("please enter ur ID \n");
scanf("%d",&IDCHECK);
if (IDCHECK==IDA || IDCHECK==IDAMR || IDCHECK == IDWAEL)
{    
    
    
    if (IDCHECK==IDAMR){
        
         for (int i=0;i<3;i++)
        {
            if (PASSCHECK==passamr){printf("Welcome amr"); break;}
            else printf ("try again");
        }    
    }   
    else if (IDCHECK==IDWAEL){
         for (int i=0;i<3;i++)
        {
            if (PASSCHECK==passwael){printf("Welcome wael"); break;}
            else printf ("try again");
        }    
    }
    else if (IDCHECK==IDA){
        
         for (int i=0;i<3;i++)
        {
            printf("enter ur pass\n");
             scanf("%d",&PASSCHECK);
            if (PASSCHECK==passa){printf("Welcome am \n"); break;}
            else printf ("try again");
        }
    }
}    
else printf("Not Registered");

}
