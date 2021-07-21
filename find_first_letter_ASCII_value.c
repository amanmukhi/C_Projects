// Aman Kumar Mukhi //

// Write a c program to display ASCII value of your name's first letter //

#include<stdio.h>
int main()
{   char name[10];

    printf("\n\n\tASCII VALUE\n\t___________________________________\n\tEnter your name : ");
    scanf("%s",&name);
    printf("\n\tASCII value of your name's first letter is '%c' : %d",name[0],name[0]);
    printf("\n\n\nSuccessfully Executed...\n");
    return 0;
}
