#include<stdio.h>

void plusMinus(int arr_count, int* arr) {
int pos=0,neg=0,zer=0;
for (int i =0;i<arr_count;i++)
{
    if(*(arr+i)>0) pos++;
    else if(*(arr+i)<0) neg++;
    else zer++;
}

printf(" pos is %.6f \n",(float)pos/arr_count);
printf(" neg is %.6f \n",(float)neg/arr_count);
printf(" zero is %.6f \n",(float)zer/arr_count);
}
int main()
{
    int a[6]={1,2,-4,-5,0};
    plusMinus(6,a);
}
