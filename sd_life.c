#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void delay(int a);
void bmr_m_f(float a, int gen, float we, float he);
void bmr_more(int c);
void main(){
    int i;
    printf("\n\n\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Student Life Application \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
    animation();
    printf("\n\n\n\n\t\t\t\t\t");
    system("pause");
    system("cls");
    menu();
}
int menu(){
    int choose, i;
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Student Life Application \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\t\t[1] Grade Calculator\n\t\t\t\t\t[2] Health\n\t\t\t\t\t[3] Mathematics Calculator");
    printf("\n\t\t\t\t\t[4] Manage Your Infomation\n");
    printf("\t\t\t\t\t[5] About Us\n\t\t\t\t\t[0] Exit");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choose);
    if(choose == 1){
        animation();
        system("cls");
        grade();
    }
    else if(choose == 2){
        animation();
        health();
    }
    else if(choose == 3){
        animation();
        calculator();
    }
    else if(choose == 4){
        animation();
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
    printf("\n\t\t\t\t\tYour GPA is %.2f", last);
    select();
}
void health(){
    system("cls");
    int choice;
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Health Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t[1] BMI Calculator\n\t\t\t\t\t[2] BMR Calculator\n\t\t\t\t\t[0] Back To Main Menu");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choice);
    if(choice == 1){
        bmi();
    }
    else if(choice == 2){
        bmr();
    }
    else if(choice == 0){
        system("cls");
        menu();
    }
}
void select(){
    int end;
    printf("\n\n\n\t\t\t\t\tWhat Would You Like To Next?\n");
    printf("\n\t\t\t\t\t[1] Back To Main Menu\n\t\t\t\t\t[2] Exit\n");
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
    printf("\n\n\t\t\t\t\t[1] Modulo Calculator (Remainder Calculator)\n\t\t\t\t\t[2] \n");
    printf("\t\t\t\t\t[0] Back to Main Menu");
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
void bmi(){
    float weight, height, bmi;
    system("cls");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BMI (Body Massive Index) Calculator \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\n\t\t\t\t\tEnter Your Weight (Kilogram): ");
    scanf("%f", &weight);
    printf("\n\t\t\t\t\tEnter Your Height (Centimeter): ");
    scanf("%f", &height);
    bmi = weight/((height/100)*(height/100));
    printf("\n\t\t\t\t\tYour BMI is ");
    if(bmi < 18.5){
        printf("Underweight");}
    else if(bmi >= 18.5 && bmi <= 24.9){
        printf("Normal ");}
    else if(bmi >= 25.00 && bmi <= 29.9){
        printf("Overweight ");}
    else if(bmi >= 30.0 && bmi <= 39.9){
        printf("Obese ");}
    else if(bmi > 40.0){
        printf("Morbidly Obese ");}
    printf("(%.1f)", bmi);
    select();
}
void bmr(){
    float age, weight, height, ans;
    int gender;
    system("cls");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BMR (Basal Metabolic Rate) Calculator \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t\t\t\tNote: BMR is the number of calories your body needs or \n\t\t\t\t      also known as your body's metabolism\n\n");
    printf("\t\t\t\t\t1. Enter your Age: ");
    scanf("%f", &age);
    printf("\t\t\t\t\t\n\t\t\t\t\t2. Select your gender\n\t\t\t\t\t   [1] Male \n\t\t\t\t\t   [2] Female\n\t\t\t\t\tEnter Your Gender : ");
    scanf("%d", &gender);
    printf("\n\t\t\t\t\t3. Enter your weight (Kilogram): ");
    scanf("%f", &weight);
    printf("\n\t\t\t\t\t4. Enter your height (Centimeter): ");
    scanf("%f", &height);
    bmr_m_f(age, gender, weight, height);
    select();
}
void bmr_m_f(float a, int gen, float we, float he){
    float bmr_ans;
    if(gen == 1){
        bmr_ans = 66+(13.7*we)+(5*he)-(6.8*a);
        printf("\n\t\t\t\t\tYour Estimate BMR is %.f Calories/Day", bmr_ans);
    }
    else if(gen == 2){
        bmr_ans = 655+(9.6*we)+(1.8*he)-(4.7*a);
        printf("\n\t\t\t\t\t Your Estimate BMR is %.f Calories/Day", bmr_ans);
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
    printf("\n\t\t\t\t\t\tRemain is %d", ans);
    select();
}
void delay(int a){
    int i,k;
    for(i=0;i<a;i++)
         k=i;
}
void animation(){
    int i;
    printf("\n\t\t\t\t\tLOADING");
    for(i=0;i<=2;i++)
    {
        delay(100000000);
        printf(" .");
    }
}
