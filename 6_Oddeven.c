//To check the number is odd or even
#include <stdio.h>//Header file
int main(){//Start main function body
    int num;
    printf("Enter an integer: ");//output line
    scanf("%d", &num);//user choice number
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);

    return 0;
} 
