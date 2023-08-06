#include<stdio.h>

int main(){
    int number;
    printf("please enter ur numebr \n");
    scanf("%d",&number);

int count = 0;

  while (number > 0) {
    if (number & 1) {
      count++;
    }

    number = number >> 1;
  }
  printf("the number of 1's is %d \n ",count);
  if (count ==1 ) printf("the number is 2 based \n");
  else printf(" the number is not 2's based") ;


}