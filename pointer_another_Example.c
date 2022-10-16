#include<stdio.h>

int main() {

    int x = 10; // Normal Variable

    // I want the address of that variable that where it is stored in the memory.
    //  We use Ampersand & in front of a variable and 
    // then we are taking the memory address of that and assigning to a new variable called 
    // pointer
    // because pointer Stores the memory address.

    

    /*To print the address of a variable, we use // "%p" //  specifier in C programming language. 
        There are two ways to get the address of the variable:

        1.By using "address of" (&) operator
            When we want to get the address of any variable, we can use “address of operator” (&) operator, 
            it returns the address of the variable.
        2.By using pointer variable */ 
        // A pointer is the type of a variable that contains the address of another
        // variable, by using the pointer; we can also get the address of another variable.

        // int *ptr = &x;

    printf("%p", &x);




    return 0;
}