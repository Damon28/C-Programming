#include <stdio.h>
#include <stdlib.h>

/*This is based on 'C Programming Tutorial for Beginners' by freeCodeCamp.org - https://www.youtube.com/watch?v=KJgsSFOSQv0 */

int main()
{
    char characterName[] = "John";
    int characterAge = 35;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d.\n\n", characterAge);

    int age1 = 40;
    double gpa1 = 3.7;
    char grade = 'A';
    char phrase[] = "Need those brackets AND double quotation marks to create a string (AKA an array).";
    printf("%s\n\n", phrase);


    printf("Almost exactly like print in Python\n");
    printf("Use '%%d' to print out numbers. For filling containers using variables treat it like Python's .format() method.\n\n");
    printf("EX: printf(\"My favorite %%s is %%d\", \"number\", 500)\n");
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

    printf("===Comments===\n\n");
    printf("Comments use a forward slash (/) & an asterisk (*) to begin the comment like this: /*\n");
    printf("To close off the comment it is another asterisk followed by a forward slash like this: */\n");
    printf("Comments look like this: /*blah blah blah*/\n\n");
    /*this is
    an example*/

    printf("===Constants==\n\n");
    printf("Constant - a variable in C that cannot be modified\n\n");
    printf("CODE:\nint num = 5;\nprintf(\"%%d\\n\", num);\nnum = 8;\nprintf(\"%%d\", num);\n");
    printf("OUTPUT:\n5\n8\n\n");

    printf("To make 'num' a constant do the following:\n");
    printf("const int num = 5;\n");
    printf("This will make the above code throw an error since it tries to modify the constant.\n");
    printf("*Constant variables are usually all caps (so 'NUM').\n\n");

    printf("===Getting User Input===\n\n");

    printf("int age;\nprintf(\"Enter your age: \")\n");
    printf("scanf(\"%%d\", &age);\n");
    printf("*NOTE: the ampersand before the variable 'age'\n");

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is: %d\n\n", age);

    printf("For a 'double':\n");
    printf("double gpa;\nprintf(\"Enter the gpa: \")\n");
    printf("scanf(\"%%lf\", &gpa);\n");
    printf("printf(\"Your gpa is: %f\", gpa\n");
    printf("*NOTE: When using 'scanf' a double is represented by '%%lf' whereas in 'printf' it's just '%%f'.\n");

    double gpa;
    printf("Enter the gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is: %f\n\n", gpa);

    printf("For a 'characters':\n");
    printf("char letterGrade;\nprintf(\"Enter your grade: \")\n");
    printf("scanf(\" %%c\", &letterGrade);\n");
    printf("printf(\"Your letter grade is: %%c\", letterGrade)\n");
    printf("*NOTE: %%c for character\n**ALSO the space before %%c.\n");
    printf("***For an explanation ref:\n   https://stackoverflow.com/questions/8464620/program-doesnt-wait-for-user-input-with-scanfc-yn\n   https://stackoverflow.com/questions/7826605/few-questions-about-c-syntax/7826875#7826875\n\n");

    char letterGrade;
    printf("Enter the letter grade: ");
    scanf(" %c", &letterGrade);
    printf("Your letter grade is: %c\n\n", letterGrade);

    printf("For a 'string':\n");
    printf("char name[20];\nprintf(\"Enter your name: \")\n");
    printf("scanf(\"%%s\", name);\n");
    printf("printf(\"Your name is: %s\", name)\n");
    printf("*NOTE: 20 characters & that there is no ampersand\n\n");
    printf("**ADDITONALLY: Only grabs the string up until the first space (so if you put 'John Smith' it'll only use 'John')\n\n");

    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is: %s", name);

    printf("For a 'string' that includes spaces:\n");
    printf("char name[20];\nprintf(\"Enter your name: \")\n");
    printf("fgets(name, 20, stdin);\n");
    printf("printf(\"Your name is: %%s\", name)\n");
    printf("*NOTE: fgets is taking the variable (name), a number of characters (input validation), & a location of where to pull the string (stdin)");

    char name1[20];
    printf("Enter your name: ");
    fgets(name1, 20, stdin);
    printf("Your name is: %s", name1);
    /*this one has input issues since a newline character is in the buffer. Ref URLs above*/

    return 0;

}
