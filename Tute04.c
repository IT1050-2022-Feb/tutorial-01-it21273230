/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
//declare function
int minimum(int no1, int no2);
int maximum(int no1, int no2);
int multiply(int no1, int no2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int no1, int no2){
  int y;
  if(no1<no2)
  {
    y = no1;
  }
  else
  {
    y = no2;
  }
  return y;
}
int maximum(int no1, int no2){
  int x;
  if(no1<no2)
  {
    x=no2;
  }
  else
  {
    x=no1;
  }
  return x;
}
int multiply(int no1, int no2){

  return no1*no2;  
}

