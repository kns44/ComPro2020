#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void delay(int a);
void bmr_m_f(float a, int gen, float we, float he);
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
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Health Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t[1] BMI Calculator\n\t\t\t\t\t[2] BMR Calculator\n\t\t\t\t\t[3] ");
    printf("\n\t\t\t\t\t[4] \n\t\t\t\t\t[0] Back To Main Menu");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choice);
    if(choice == 1){
        bmi();
    }
    else if(choice == 2){
        bmr();
    }
    else if(choice == 3){

    }
    else if(choice == 4){

    }
    else if(choice == 0){
        system("cls");
        menu();
    }
    else{
        printf("\n\t\t\t\t\tPlease Enter Number Between 0-4\n\t\t\t\t\t");
        system("pause");
        system("cls");
        health;
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
    printf("\n\n\t\t\t\t\t================================\n");
    printf("\t\t\t\t\t\tYour Information");
    printf("\n\t\t\t\t\t================================\n");
    select();
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
    for(i=0;i<=2;i++)
        {
            delay(100000000);
        }
}
void calculator(){
    system("cls");
    int choose1;
    printf("\n\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Mathematics Calculator Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t\t\t\t[1] Modulo Calculator (Remainder Calculator)\n\t\t\t\t\t[2] Weight Unit Converter\n");
    printf("\t\t\t\t\t[3] Discount Calculator (Percentage Discount)\n\t\t\t\t\t[4] Prime Number Check\n\t\t\t\t\t[0] Back to Main Menu");
    printf("\n\n\t\t\t\t\tEnter Number To Continue: ");
    scanf("%d", &choose1);
    if(choose1 == 1){
        mod_cal();
    }
    else if(choose1 == 2){
        weight_con();
    }
    else if(choose1 == 3){
        promotion();
    }
    else if(choose1 == 4){
        system("cls");
        primenum();
    }
    else if(choose1 == 0){
        system("cls");
        menu();
    }
    else{
        printf("\n\t\t\t\t\tPlease Enter Number Between 0-4\n\t\t\t\t\t");
        system("pause");
        system("cls");
        calculator();
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
    printf("\n\t\t\t\t\tYour range of healthy weight is ");
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
    printf("\n\t\t\t\t\tNote : a is (dividend), b is (divisor)\n\n\t\t\t\t\tEnter value a : ");
    scanf("%d", &a);
    printf("n\t\t\t\t\tEnter value b : ");
    scanf("%d", &b);
    ans = a%b;
    printf("\n\t\t\t\t\t\tRemain is %d", ans);
    select();
}
void weight_con(){
    system("cls");
    float k_p, p_k, re;
    int choice;
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Weight Unit Converter Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t[1] Kilogram to Pound\n\t\t\t\t\t[2] Pound to Kilogram\n\t\t\t\t\t[0] Main menu");
    printf("\n\n\t\t\t\t\tEnter number to continue: ");
    scanf("%d", &choice);
    if(choice == 1){
        system("cls");
        printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Kilograms to Pounds converter \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("\t\t\t\t\t Please input amount of kilograms : ");
        scanf("%f", &k_p);
        printf("\n\t\t\t\t\t Result: %.5f lbs", (k_p*2.20462262));
        select();
    }
    else if(choice == 2){
        system("cls");
        printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Kilograms to Pounds converter \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf("\t\t\t\t\t Please input amount of pounds: ");
        scanf("%f", &p_k);
        printf("\n\t\t\t\t\t Result: %f kg", (p_k*0.45359237));
        select();
    }
    else if(choice == 0){
        system("cls");
        menu();
    }
    else{
        printf("\n\t\t\t\t\tPlease Enter Number Between 0-2\n\t\t\t\t\t");
        system("pause");
        system("cls");
        weight_con();
    }
}
void promotion(){
    system("cls");
    float cost, per, dis, save;
    int quan;
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Discount Calculator Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\t\t\t\t\t1. Enter original price: ");
    scanf("%f", &cost);
    printf("\t\t\t\t\t2. Enter discount percentage: ");
    scanf("%f", &per);
    printf("\t\t\t\t\t3. Enter quantity: ");
    scanf("%d", &quan);
    dis = (cost*quan)-((cost*quan)*per/100);
    printf("\n\t\t\t\t\tNew price is %.2f%", dis);
    printf("\n\t\t\t\t\tYou save %.2f", (cost*quan)*per/100);
    select();
}
void primenum(){
    int prime, i;
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Prime Number Check Function \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\n\t\t\t\t\tEnter number to check : ");
    scanf("%d", &prime);
    if(prime == 1){
        printf("\n\t\t\t\t\tResult : %d is not a prime number.", prime);
    }
    else if(prime%2 == 0 && prime != 2){
        printf("\n\t\t\t\t\tResult : %d is not a prime number.", prime);
    }
    else{
        for(i=3;i<prime/2;i++){
            if(prime%i == 0){
                printf("\n\t\t\t\t\tResult : %d is not a prime number.", prime);
            }
        }
        printf("\n\t\t\t\t\tResult : %d is a prime number.", prime);
    }
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
