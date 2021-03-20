//program of airthmatic operations (Addition,Subtaction,Multiplication,Division)
#include<stdio.h>

int main(){
   int x=8,y=2,z;//values are by user choice
   z = x+y;
    printf("x+y = %d \n",z);//addition of numbers
    z = x-y;
    printf("x-y = %d \n",z);//subtraction of numbers
    z = x*y;
    printf("x*y = %d \n",z);//multiplication of numbers
    z = x/y;
    printf("x/y = %d \n",z);//division of numbers
    z = x%y;
    printf("Remainder when x divided by y = %d \n",z);
    
    return 0;
}