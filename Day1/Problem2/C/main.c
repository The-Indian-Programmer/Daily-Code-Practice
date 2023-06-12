// Write a C program to print your own name 

#include <stdio.h>

int main() {
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Your name is %s\n", name);
}