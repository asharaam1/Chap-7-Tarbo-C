/* strinitp.c */
/* shows string initialization */
/* uses pointers */
#include <stdio.h> /* Added for puts, gets */
#define SIZE 81

int main() /* Added return type */
{
    char *salute = "Greetings,";
    char name[SIZE];
    puts("Enter your name:");
    gets(name);
    puts(salute);
    puts(name);
    return 0; /* Added return */
}

// code run