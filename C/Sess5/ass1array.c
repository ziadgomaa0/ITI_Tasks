#include<stdio.h> 
int main(){
    int max=0,min=0;
    int arr [10] ;
for (int i=0;i<10;i++){
    printf("please enter number\n");
    scanf("%d",&arr[i]);
}
min = arr[0];
max = arr[0];
for (int i=0;i<10;i++){

    if (arr[i] < min) {
      min = arr[i];
    } 
    else if (arr[i] > max) {
      max = arr[i]; }

}
printf("the maximum is %d \n",max);
printf("the maximum is %d \n",min);

}