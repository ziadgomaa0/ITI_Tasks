#include<stdio.h> 
#include<stdlib.h>
 struct node 
{
 int data;
 struct node *link;   
}*top=NULL;
void push( int d );
void print();
int main()
{

    int choice,data;
    while(1)
    {
        
        printf("enter ur choice \n");
        printf("1pop \n 2push \n 3 exit \n;");
        scanf("%d",&choice); 
        switch (choice){
        case 1 :
        printf("enter yr data \n ");
        scanf("%d",&data);
        push(data);
        break;
        case 2 : print(); break;
        default : exit(1) ; break;

        }

    }

}

void push( int d )
{
struct node *newNode;
    newNode=malloc(sizeof(newNode));
    if (newNode==NULL)
    {
        printf("stack overflow");
        exit(1);
    }
     newNode->data=d;
    newNode->link=NULL;
    newNode->link=top;
    top=newNode;
    
}
void print()
{
    struct node *temp;
    temp=top;
    printf("the stack elements are ");
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->link;
    }
    printf("\n");
}