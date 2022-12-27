#include<stdio.h>  
#include<time.h>
#include <stdlib.h>
  
long long factorial(long long n)  
{  
  if (n == 1)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
void main()  
{    
  long long fact, number;
  printf("\nEnter the number of Factorials starting from 1 : ");  
  scanf("%lld", &number);   
  for (int i = 1; i <= number; i++)
  {
      double total_time;
      clock_t start, end;
      start = clock();
      //time count starts 
      srand(time(NULL));
      
      //The Factorial function's recursion
      fact = factorial(i);

      end = clock();
      //time count stops 
      total_time = ((double)(end - start)) / CLOCKS_PER_SEC;
      printf("\nFactorial of %d is %lld", i, fact);
      printf("\nTime taken calculate Factorial of %lld is: %f seconds\n", number, total_time);
  } 
}  