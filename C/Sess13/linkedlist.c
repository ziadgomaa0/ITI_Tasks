#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

void add_end (struct node *head,int x)
void count_nodes (struct node *head)


int main(){



}

void count_nodes (struct node *head)
{
    int count=0;
    if (head==NULL) printf("linked is emoty") ;
    struct node *ptr =NULL ;
    ptr=head;
    while(ptr ->link !=NULL)
    {
        count++;
        ptr =ptr->link ;
    }
    printf("count is %d",count);
}

void add_end (struct node *head,int x)
{
struct node *ptr,*temp;
ptr=head;
temp->data = 50;
temp->=NULL;

 while(ptr ->link !=NULL)
    { //traversing the list
        ptr =ptr->link ;
    }
    ptr->link = temp ;
}
struct node* add_the_end(struct node *ptr,int data)
{
    struct node *temp = (*struct node)malloc(sizeof(struct node));
    temp->data=50;
    tem->link=NULL;
    ptr->link = temp;
    return temp ;

}