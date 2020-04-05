#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void exit();
void grade();
void inex();
void select();
void fordelay(int a);

int main(){
    int choose;
    printf("*=====* Welcome To Student Life Application *=====*\n");
    printf("[1] Grade Calculator\n[2] Income-Expense\n[3] Exit\n");
    printf("\nEnter Number To Continue: ");
    scanf("%d", &choose);
    if(choose == 1){
        grade();
    }
    else if(choose == 2){
        inex();
    }
    else if(choose == 0){
        exit();
    }
}
void grade(){
    char all[50];
    float subject, credit, ans, allgit, allans;
    int numof_g, counter = 0, i = 1;
    printf("\n*=====* Welcome To Grade Calculator Function *=====*\n");
    printf("Enter Number of Subject: ");
    scanf("%d", &numof_g);

    while(counter!=numof_g){
      printf("\nEnter Credit [%d]: ", i);
      scanf("%f", &credit);
      printf("ํYour Grade [%d]: ", i);
      scanf("%f", &subject);
      ans = subject*credit;
      allgit += credit;
      allans += ans;
      counter+=1, i+=1;
    }
    printf("\nYour GPA %.2f\n", allans/allgit);
    select();
}
void inex(){

}
void select(){
    int end;
    printf("\n[1] Back To Main Manu\n[2] Exit\n");
    printf("\nEnter Number To Continue: ");
    scanf("%d", &end);
    if(end == 1){
        main();
    }
    if(end ==2){
        exit();
    }
}
void exit(){

}
void fordelay(int a){
    int i,k;
    for(i=0;i<a;i++)
         k=i;
}
