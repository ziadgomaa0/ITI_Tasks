
#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int right=0,left=0,sum=0;
for (int i = 0; i < arr_rows; i++) {
     right=right+arr[i][i];
    
    printf("\n");
}
//printf("%d",right);
int j=0;
    for (int i = arr_rows-1; i>=0; i--) {
        
        left=left+arr[i][j];
        j++;
    }
    sum = right-left;
    if(sum > 0) sum=sum;
    else sum = -sum;
    return sum;
}
int main() 
{
    
}