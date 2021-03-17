//To find the area of Circle, Square and Rectangle by user choice
//Area of Circle: (22/7)*r*r: radius
//Area of Square: side*side: side
//Area of Rectangle: Length * Breadth: Length, Breadth

#include<stdio.h>
int main(){
    float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;

    raduisOfCircle=7;
    sideOfSquare=2;
    legthOfRectangle=2;
    breadthOfRectangle=2;

    printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
    printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
    printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
    return 0;
}
