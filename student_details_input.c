// Aman Kumar Mukhi //

/*  Write a c program to take input Student Details Like
    1.	Name
    2.	Reg.no
    3.	E-mail
    4.	Phone no.
    And Display Student Details.
*/


#include<stdio.h>
int main()
{
    int regd_no;
    char fname[10],mname[10],lname[10],email_id[35],phone_no[20];

    printf("\n\t\tEnter Student Details:\n");
    printf("\t\t----------------------\n");
    printf("\n\tEnter Student Name      : ");
    scanf("%s%s%s",&fname,&mname,&lname);
    printf("\tEnter Student Regd. No  : ");
    scanf("%d",&regd_no);
    printf("\tEnter Student E-mail ID : ");
    scanf("%s",email_id);
    printf("\tEnter Student Phone No. : ");
    scanf("%s",&phone_no);

    printf("\n\n\t\tStudent Details:");
    printf("\n\t\t----------------");
    printf("\n\tStudent Name      : %s %s %s",fname,mname,lname);
    printf("\n\tStudent Regd.No   : %d",regd_no);
    printf("\n\tStudent E-mail ID : %s",email_id);
    printf("\n\tStudent Phone no. : %s ",phone_no);

    printf("\n\nSuccessfully Executed........\n");
}
