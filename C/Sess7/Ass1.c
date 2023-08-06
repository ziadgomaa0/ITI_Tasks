#include<stdio.h>
// getting the different increased inetger in comparison between 2 arrays
void bubble_sort(int array[], int size);
int main()
{
    int x;
 int arr1[5]={1,2,3,4,5};
 int arr2[6]={2,1,3,4,5,6};
bubble_sort(arr1,5);
bubble_sort(arr2,6);
for(int i =0;i<6;i++)
{
if(arr1[i]!=arr2[i])
{ 
    x=arr2[i];
    break;
}
}
printf("the diff is %d",x);

}
// 2 arrays with the to find l zeyada 
//swapping 2 arrays 
void bubble_sort(int array[], int size) {
  int i, j, temp;

  for (i = 0; i < size - 1; i++) {
    for (j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}