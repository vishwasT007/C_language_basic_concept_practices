#include<stdio.h>


#define LOG(x) printf("%d \n",x)

int main() {

    int x = 2;

    int* ptr = &x;

    LOG(*ptr); //  Derefrencing 2

    printf("%p \n", ptr); // Printing the address



    return 0;
}