#include<stdio.h>
void swap(int a,int b);
int main(){
/*int x=258;
int *ptr =&x;
char *ptr2 = &x;

printf("%d \n",*ptr);
printf("%d \n",*ptr2);
*ptr2=4;
printf("%d \n",*ptr);
printf("%d \n",*ptr2);

//int *ptr=60000;
//int* ptr2=59000;
//printf("%d \n",ptr-ptr2);

int *ptr;
ptr = fun();
printf("%d",*ptr);
*/


}
int fun(void){
   int x =10;
   return &x;
}
/*void swap(int a,int b)
{
int *ptr =&a;
a=b;
b=*ptr ;
printf (" a equal %d",a);
printf("b equal %d",b);

}