#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%i", &age);
    printf("youar age is %i", age);

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("hello %s", name);
}