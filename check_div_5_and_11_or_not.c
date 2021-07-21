// Aman kumar Mukhi //

// Write a c program to check whether a number is divisible by 5 and 11 or not //

#include<stdio.h>
int main()
{
    int num;
    printf("\n\n\tEnter a number : ");
    scanf("%d",&num);
    printf("\t----------------\n");

    if(num % 5 == 0 && num % 11 == 0)
     printf("\n\tThe given number is divisible by both 5 and 11");
    else
      printf("\n\tThe given number is not divisible by 5 and 11");

    printf("\n\n\nSuccessfully Executed...\n");
    return 0;
}
