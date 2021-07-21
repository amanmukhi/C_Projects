// Aman Kumar Mukhi //

// Write a c program to swap two numbers with out using third variable //


#include<stdio.h>
main()
{
    int a=12,b=34;	// initializing two variable //

    printf("\n\n\t\t\tSwapping Between Two Number");
    printf("\n\t\t\t---------------------------");

    printf("\n\n\t\tBefore Swap:");
    printf("\n\t\t------------");

    printf("\n\n\t\tFirst Number= %d\t Second Number= %d",a,b);

    printf("\n\n\n\t\tAfter Swap:");
    printf("\n\t\t------------");

        a=a+b;
        b=a-b;
        a=a-b;

    printf("\n\n\t\tFirst Number= %d\t Second Number= %d",a,b);
    printf("\n\n\nSuccessfully Executed...\n");
    return 0;
}
