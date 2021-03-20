//A C Program for showing working of fgets() & puts().			
#include <stdio.h>
int main(){
    char name[30];
    printf("Enter name: \n");
    fgets(name, sizeof(name), stdin);  // Read(scan) string
    printf("Name: %C");
    puts(name);    // Display(print) string
    return 0;
}