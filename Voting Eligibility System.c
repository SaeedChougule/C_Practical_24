#include<stdio.h>
#include<string.h>

int main()
{
    char name[25];
    int age;
    char nationality[25];

    //Taking user input for name, age, and nationality
    printf("Enter your First name: ");
    fflush(stdout);
    scanf("%s",name);//not using '&' as the value is a character array

    printf("Enter your age: ");
    fflush(stdout);
    scanf("%d", &age);

    printf("Enter your nationality: ");
    fflush(stdout);
    scanf("%s", nationality);//not using '&' as the value is a character array

    //Requisite Output
    printf("\nElection Commission\n");
    printf("Citizen : %s\n", name);
    printf("Status : ");

    //Checking if the requirements are satisfied
    if(age >= 18 && (strcasecmp(nationality, "indian") == 0))
    {
        printf("Eligible to vote");
    }
    else if(age>=18 && (strcasecmp(nationality, "indian") != 0))
    {
        printf("Person is not eligible to vote as he/she is not an Indian citizen");
    }
    else if(age<18 && (strcasecmp(nationality, "indian") == 0))
    {
        printf("Person is not eligible to vote as he/she is underage");
    }
    else
    {
        printf("Person is not eligible to vote as he/she is underage and not an Indian citizen");
    }

    return 0;
}