#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a; // temp = 1;
    *a = *b; // *a = 2;
    *b = temp; // *b = 1;
}

int main() {


    int a = 1;
    int *ptr1 = &a;
    int b = 2;
    int *ptr2 = &b;

    swap(ptr1,ptr2);

    printf("A : %d \n", a);
    printf("B : %d \n", b);



    return 0;
}