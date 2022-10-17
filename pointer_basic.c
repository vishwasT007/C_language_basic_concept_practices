#include<stdio.h>

int main() {


    int a = 5; 

    int * pointer = &a; // Pointer holds Address of A variable;

    printf("%p \n", &pointer); // Address of the pointer

    printf("%p",&a); // address of the variable a.

    printf("%d \n", *pointer);
    printf("%d \n",&a);  // This is Wrong : Printf takes argument as A value, not by a reference
    //https://stackoverflow.com/questions/50074855/the-usage-of-an-ampersand-in-printf-and-format-specifiers





    return 0;
}