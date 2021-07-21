// Aman Kumar Mukhi //

// Write a C program to check whether a character is alphabet or not //

#include<stdio.h>
int main()
{
    char alpha;
    printf("\n\n\tEnter Alphabet : ");
    scanf("%c",&alpha);
    printf("\t------------------\n");

    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u'|| alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
     printf("\n\tThe given alphabet is a vowel");
    else
     printf("\n\tThe given alphabet is a consonant");


    printf("\n\n\nSuccessfully Executed...\n");
    return 0;
}
