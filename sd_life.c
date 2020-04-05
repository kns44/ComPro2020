#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include<stdlib.h>

void exit();
void grade();
void inex();
void select();
void main(){
    int i;
    printf("\n\n\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Student Life Application \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\t\t\t\t\t\tLOADING");
        for(i=0;i<=5;i++)
        {
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
    printf("\n\t\t\t\t\t[1] Grade Calculator\n\t\t\t\t\t[2] Income-Expense\n\t\t\t\t\t[3]\n\t\t\t\t\t[0] Exit\n");
    printf("\n\t\t\t\tEnter Number To Continue: ");
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

    }
    else if(choose == 0){

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
      printf("\n\t\t\t\t\t%d. Enter Credit Of Subject Number [%d]: ", i, i);
      scanf("%f", &credit);
      printf("\t\t\t\t\t   Enter Grade Of Subject Number [%d]: ", i);
      scanf("%f", &subject);
      ans = subject*credit;
      allgit += credit;
      allans += ans;
      counter+=1, i+=1;
    }
    last = allans/allgit;
    printf("\n\t\t\t\t\tYour GPS is %.2f\n", last);
    select();
}
void inex(){

}
void select(){
    int end;
    printf("\n\t\t\t\t\t\t[1] Back To Main Manu\n\t\t\t\t\t\t[2] Exit\n");
    printf("\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &end);
    if(end == 1){
        system("cls");
        menu();
    }
    else if(end ==2){

    }
}
void delay(int a){
    int i,k;
    for(i=0;i<a;i++)
         k=i;
}
