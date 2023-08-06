#include<stdio.h>

 typedef struct stu
{   
    int id;
    int math;
    int lang;
    int phy;
    int chem;
}student;

int main()
{

    student array[10];
    for(int i=0;i<10;i++)
    {
        array[i].math=50+i;
        array[i].lang=50+i;
        array[i].phy=50+i;
        array[i].chem=50+i;
        
    }
    int id;
    printf("enter ur id \n");
    scanf("%d",&id);
    switch (id)
    {
    case 1 :
        printf("the grades of ahmed is in math %d \n",array[1].math);
        printf("the grades of ahmed is in phy %d \n",array[1].phy);
        printf("the grades of ahmed is in lang %d \n",array[1].lang);
        printf("the grades of ahmed is in chem %d \n",array[1].chem);
        break;
    case 2 :
        printf("the grades of moh is in math \n %d",array[2].math);
        printf("the grades of moh is in phy \n%d",array[2].phy);
        printf("the grades of moh is in lang \n %d",array[2].lang);
        printf("the grades of moh is in chem %d \n",array[2].chem);
        break;    
    

    default:
        break;
    }
}