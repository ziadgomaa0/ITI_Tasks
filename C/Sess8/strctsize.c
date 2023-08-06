#include<stdio.h>

struct marks
{
    int a:3;
    int b:3;
    int c:2;
};
int main()
{
struct marks m={2,-6,5};
printf("%d \n %d",sizeof(m),*((int*)&m));

}