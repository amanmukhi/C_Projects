//Marks
#include<Stdio.h>
int main()
{
    float phy,chem,bio,maths,comp,TM=0,Percentage=0;
    char per = '%';
    printf("\n\n\tSCORE CARD\n\t-----------------------------------------------------");
    printf("\n\n\tEnter the marks of Physics      :  \t");
    scanf("%f",&phy);
    printf("\n\tEnter the marks of Chemistry    :\t");
    scanf("%f",&chem);
    printf("\n\tEnter the marks of Biology      :\t");
    scanf("%f",&bio);
    printf("\n\tEnter the marks of Mathematics  :\t");
    scanf("%f",&maths);
    printf("\n\tEnter the marks of Computer     :\t");
    scanf("%f",&comp);
    printf("\n\t-----------------------------------------------------");

    TM=phy+chem+bio+maths+comp;
    Percentage=(TM/500*100);
    printf("\n\n\tTotal Marks\t\t\t:     %f\n\n\tPercentage%\t\t\t:     %f %c\n\t-----------------------------------------------------",TM,Percentage,per);

    if(Percentage>=90)
    {
     printf("\n\n\t\t\tGrade A");
    }
    else if(Percentage>=80)
    {
     printf("\n\n\t\t\tGrade B");
    }
    else if(Percentage>=70)
    {
     printf("\n\n\t\t\tGrade C");
    }
    else if(Percentage>=60)
    {
     printf("\n\n\t\t\tGrade D");
    }
    else if(Percentage>=40)
    {
     printf("\n\n\t\t\tGrade E");
    }
    else
    {
     printf("\n\n\t\t\tGrade F");
    }

     printf("\n\t------------------------------------------------------\n\n\n\n\tSuccesfully Executed...");
     return 0;
}
