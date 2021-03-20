//A C Program to read the string in pointers loaction and give it as output.(Pre-Defined) 
#include <stdio.h>

int main(void) {
  char name[] = "Programming";

  printf("%c \n", *name);     	// Output will be P
  printf("%c \n", *(name+3));	// Output will be G
  printf("%c \n", *(name+8));   // Output will be I

  char *namePtr;

  namePtr = name;
  printf("%c \n", *namePtr);     // Output will be P
  printf("%c \n", *(namePtr+2)); // Output will be O
  printf("%c \n", *(namePtr+7)); // Output will be M
return 0;
}