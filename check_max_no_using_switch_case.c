// Aman Kuumar Mukhi //

// Write a c program to find maximum between two numbers using switch case //


#include<stdio.h>
int main()
{
    int n1,n2;
    printf("\n\n\tFIND MAXIMUM NUMBER BETWEEN TWO NUMBERS\n\t_________________________________________\n\tEnter value of 1st no. : ");
    scanf("%d",&n1);
    printf("\tEnter value of 2nd no. : ");
    scanf("%d",&n2);

    switch(n1>n2)
    {
        case 0:
               if(n1==n2)
                printf("\n\tBoth Numbers are equal");
               else
                printf("\n\t2nd no. is greater than 1st no.");
                break;
        case 1:
               printf("\n\t1st no. is greater than 2nd no.");
               break;
        default:
                printf("\n\tError !!");
                break;
    }

    printf("\n\n\nSuccessfully Executed...\n");
    return 0;
}
