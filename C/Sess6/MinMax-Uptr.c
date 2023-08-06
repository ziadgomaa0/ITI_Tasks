#include<stdio.h>
int minMax(int a[10],int len, int*max,int*min)
{
    *min=*max=a[0];
    for(int i =0;i<len;i++)
    {
    if(a[i]>*max) *max = a[i];
    if(a[i]<*min) *min =a[i];
    }
}
int main()
{
   int a[10]={1,2,4,5,6,7,89,12,10,12};
    // to get length of the array
    int len = sizeof(a)/sizeof(a[0]);
    int min,max;
    minMax( a,len,&max,&min);
    printf(" max is %d min is %d ",max,min);

}