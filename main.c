#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Almost exactly like print in Python\n");
    printf("Use '%%d' to print out numbers. For filling containers using variables treat it like Python's .format() method.\n\n");
    printf("EX: printf\(\"My favorite %%s is %%d\", \"number\", 500\)\n");
    printf("Prints as: ");
    printf("My favorite %s is %d\n\n", "number", 500);
    return 0;

}
