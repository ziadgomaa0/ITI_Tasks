#include<stdio.h>
 int main()
 {
   
 } 

 int birthdayCakeCandles(int candles_count, int* candles) {
 int max=*(candles);
 int count =1;

    
    for(int i=1;i<candles_count;i++)
    {
        
        if(*(candles+i)>max) {max =*(candles+i); count=1;}

        else if (*(candles+i)==max)   count++;
        else count++;
    
    }
    return count;
}
