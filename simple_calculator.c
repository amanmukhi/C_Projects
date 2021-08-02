// Aman Kumar Mukhi //
// Write a C program to create Simple Calculator using switch case. //
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float n,result=1,n1,n2,i=0;
    int k;
    char ch,d,m='%';
    do
    {
            system("cls");
            printf("\n\n\t\t -- Welcome to Aman's Calculator --\n");
            printf("\n\t\t Press : 1. Addition\n\t\t\t 2. Subtraction\n\t\t\t 3. Multiplication\n\t\t\t 4. Division\n\t\t\t 5. Modulus\n\t\t\t 6. Power\n\t\t\t 7. Exit");
            printf("\n\n\t\t Enter Your Choice : ");
            scanf("%f",&n);
            switch((int)n)
            {
            case 1:
                printf("\n\n\t >> You choose Addition Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                result=n1+n2;
                printf("\n\t      Result : %d + %d = %d",(int)n1,(int)n2,(int)result);
                break;
            case 2:
                printf("\n\n\t >> You choose Subtraction Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                result=n1-n2;
                printf("\n\t      Result : %d - %d = %d",(int)n1,(int)n2,(int)result);
                break;
            case 3:
                printf("\n\n\t >> You choose Multiplication Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                result=n1*n2;
                printf("\n\t      Result : %d * %d = %d",(int)n1,(int)n2,(int)result);
                break;
            case 4:
                printf("\n\n\t >> You choose Division Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                result=n1*n2;
                printf("\n\t      Result : %d / %d = %f",(int)n1,(int)n2, result);
                break;
            case 5:
                printf("\n\n\t >> You choose Modulus Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                result=(int)n1%(int)n2;
                printf("\n\t      Result : %d %c %d = %d",(int)n1,m,(int)n2,(int)result);
                break;
            case 6:
                printf("\n\n\t >> You choose Power Operation <<");
                printf("\n\n\t      Enter two numbers : ");
                scanf("%f%f",&n1,&n2);
                while(i<n2)
                {
                    result=n1*result;
                    i++;
                }
                printf("\n\t      Result : %d power of %d = %d",(int)n1, (int)n2,(int)result);
                break;
            case 7:
                exit(0);
            default:
                printf("\n\n\t\t Error : Wrong Choice !!\n\n\t\t Please Enter Correct Input !!");

            }
        printf("\n\n\t If You Want to Calculate again ? (y/n) : ");
        scanf("%d",&k);
        scanf("%c",&ch);

    }while(ch=='y');

	printf("\n\n\n\nSuccessfully Executed...\n");
	return 0;
}
