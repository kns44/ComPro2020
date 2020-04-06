#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void grade();
void inex();
void select();
void bye();
void main(){
    int i;
    printf("\n\n\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Student Life Application \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\t\t\t\t\t\tLOADING");
    for(i=0;i<=3;i++){
        delay(100000000);
        printf(" .");
    }
    printf("\n\n\n\n\t\t\t\t\t");
    system("pause");
    system("cls");
    menu();
}
int menu(){
    int choose, i;
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Student Life Application \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t[1] Grade Calculator\n\t\t\t\t\t[2] Income-Expense\n\t\t\t\t\t[3] Mathematics Calculator");
    printf("\n\t\t\t\t\t[4] Manage Your Infomation\n");
    printf("\t\t\t\t\t[5] About Maintainer\n\t\t\t\t\t[0] Exit");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choose);
    if(choose == 1){
        printf("\n\t\t\t\t\tLOADING");
        for(i=0;i<=3;i++)
        {
            delay(100000000);
            printf(" .");
        }
        system("cls");
        grade();
    }
    else if(choose == 2){
        inex();
    }
    else if(choose == 3){
        calculator();
    }
    else if(choose == 4){
        manager();
    }
    else if(choose == 5){
        about_me();
    }
    else if(choose == 0){
        bye();
    }
    else{
        printf("\n\t\t\t\t\t## Please Enter Number Between 0-5 ##\n\n\t\t\t\t\t");
        system("pause");
        system("cls");
        menu();
    }
}
void grade(){
    char all[50];
    float subject, credit, ans, allgit, allans, last;
    int numof_g, counter = 0, i = 1;
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Grade Calculator Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t Enter Number of Subject: ");
    scanf("%d", &numof_g);
    while(counter!=numof_g){
      printf("\n\t\t\t\t%d. Enter Credit Of Subject Number [%d]: ", i, i);
      scanf("%f", &credit);
      printf("\t\t\t\t   Enter Grade Of Subject Number [%d]: ", i);
      scanf("%f", &subject);
      ans = subject*credit;
      allgit += credit;
      allans += ans;
      counter+=1, i+=1;
    }
    last = allans/allgit;
    printf("\n\t\t\t\tYour GPA is %.2f", last);
    select();
}
void inex(){

}
void select(){
    int end;
    printf("\n\n\n\t\t\t\t\tWhat Would You Like To Next?\n");
    printf("\n\t\t\t\t\t[1] Back To Main Manu\n\t\t\t\t\t[2] Exit\n");
    printf("\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &end);
    if(end == 1){
        system("cls");
        menu();
    }
    else if(end == 2){
        bye();
    }
    else{
        printf("\n\t\t\t\t\tPlease Enter Number Between 1-2\n\t\t\t\t\t");
        system("pause");
        system("cls");
        select();
    }
}
void delay(int a){
    int i,k;
    for(i=0;i<a;i++)
         k=i;
}
void manager(){
    system("cls");
    printf("\n\n\t\t\t\t================================\n");
    printf("\t\t\t\t\tYour Information");
    printf("\n\t\t\t\t================================\n");
}
void about_me(){
    system("cls");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Faculty Of Information Technology \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 King Mongkut's Institute Of Technology Ladkrabang \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t1. 62070013 Kannat Soonpongsri\n\t\t\t\t\t2. 62070015 Kittipong Nongmesub\n\t\t\t\t\t3. 62070131 Pongwarin Piemthong");
    select();
}
void bye(){
    system("cls");
    int i;
    printf("\n\n\n\t\t\t\t\tSee You Next Time");
    for(i=0;i<=2;i++)
        {
            delay(100000000);
            printf(" .");
        }
    printf("\n\n\n\t\t\t\t\tHave A Nice Day!");
}
void calculator(){
    system("cls");
    int choose1;
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Mathematics Calculator Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t[1] Modulo Calculator (Remainder Calculator)\n\t\t\t\t\t[0] Back to Main Menu");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choose1);
    if(choose1 == 1){
        mod_cal();
    }
    else if(choose1 == 0){
        system("cls");
        menu();
    }
}
void mod_cal(){
    int a,b, ans;
    system("cls");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Modulo Calculator (Find Remainder Of Divide) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\n\t\t\t\t\tNote : a is (dividend), b is (divisor)\n\n\t\t\t\t\tEnter amount of a : ");
    scanf("%d", &a);
    printf("n\t\t\t\t\tEnter amount of b : ");
    scanf("%d", &b);
    ans = a%b;
    printf("\n\n\t\t\t\t\t\tRemain is %d", ans);
    select();
}

