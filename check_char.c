//Check whether an alphabet is vowel or consonant.
#include"stdio.h"
int main()
{
char alpha;
    printf("\n\n\n\t\t\t-------------------------------------------------\n");
    printf("\t\t\t|Check whether an alphabet is vowel or consonant|\n");
    printf("\t\t\t-------------------------------------------------\n");
    printf("\t\t\t|                                               |\n");
    printf("\t\t\t\t\tEnter an alphabet:");
    scanf("%c",&alpha);
    printf("\t\t\t|                                               |");
    if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
        {
            printf("\n\t\t\t\t\t%c is a vowel.\n",alpha);
            printf("\t\t\t|                                               |\n");
        }

    else
        {
            printf("\n\t\t\t\t\t%c is a consonant.\n",alpha);
            printf("\t\t\t|                                               |\n");
        }
    printf("\t\t\t-------------------------------------------------\n");
    printf("\n\n\t\t\tSuccessfully Executed...\n\n");
    return 0;
}
