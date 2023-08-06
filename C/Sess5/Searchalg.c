#include <stdio.h>

int main() {
    int s=0,e=9,mid,found=-1;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int element;
    scanf("%d", &element);
    while(e>=s)
    {
        mid =(s+e)/2;
        if(element==a[mid])
        {
            found=mid;
            break;
        }else if(element<a[mid])
        {
            e= mid-1;
        }else
        {
            s=mid+1;
        }
    }
    if(found==-1)
    {
            printf("element not found");

    }else
    {
           printf("index of element :%d", found);

    }
}
  