#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n\n", characterAge);

    int age = 40;
    double gpa = 3.7;
    char grade = 'A';
    char phrase[] = "Need those brackets AND double quotation marks to create a string (AKA an array).";
    printf("%s\n\n", phrase);


    printf("Almost exactly like print in Python\n");
    printf("Use '%%d' to print out numbers. For filling containers using variables treat it like Python's .format() method.\n\n");
    printf("EX: printf\(\"My favorite %%s is %%d\", \"number\", 500\)\n");
    printf("Prints as: ");
    printf("My favorite %s is %d\n\n", "number", 500);

    printf("Printing a float uses %%f.\n");
    printf("EX: Ha, float %%f, 3.9546\n");
    printf("prints:\nHa, float %f\n\n", 3.9);

    printf("printf(\"%%f\", 8.9)\nPRINTS: 8.900000\n");
    printf("printf(\"%%f\", 5 + 4.5)\nPRINTS: 9.500000\n\n");

    printf("printf(\"%%f\", 5 + 4) | wont't work because it's asking for a float\n\n");

    printf("===BUILT IN FUNCTIONS===\n\n");
    printf("printf(\"%f\", pow(2, 3)) | yields: 8.000000\n");
    printf("printf(\"%f\", sqrt(36)) | yields: 6.000000\n");
    printf("printf(\"%f\", ceil(36.376)) | This stands for 'ceiling' & yields: 37.000000\n");
    printf("printf(\"%f\", floor(36.376)) | yields: 36.000000\n\n");

    return 0;

}
