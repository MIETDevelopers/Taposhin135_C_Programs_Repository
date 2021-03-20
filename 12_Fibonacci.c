// Purpose Of The Program:To find Fibonacci sequence using for loop.
#include<stdio.h> //preprocessor directive to include header file having standard input and output functions 
int main(){ // main function body.
	int num,i,t1=0,t2=1,nextTerm; // declaration of variables of datatype int.
    printf("Enter the number of terms:"); // ask user to enter the number.
    scanf("%d",&num); // storing the value in variable num.
    printf("Fibonacci Series:"); // display fibonacci series
    for(i=1;i<=num;i++){  // usinf for loop to print the fibonacci series.
    	printf("%d, ",t1);  // display the output.
    	nextTerm=t1+t2;   // calculate the next term.
    	t1=t2;   // assigning the value of t2 to t1.
    	t2=nextTerm;  // assigning the value of nextTerm to t2.
    }
    return 0;
} // end of main function body. 