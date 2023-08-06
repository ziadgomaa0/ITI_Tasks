#include<stdio.h> 
int main() {





}

int Max(a,b,c,d)
{
    int max;
    if (a>b && a>c && a>d) max=a;
    else if(b>a && b>c && b>d) max=b;
    else if (c>a && c>b && c>d) max =c;
    else max = d;
}