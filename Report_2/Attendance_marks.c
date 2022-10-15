#include<stdio.h>
int main(){
    // Variable declaration
    int days, tdays, id ;
    float credit,marks,attmarks, ratio, prcntge;
    char sname[100];
    credit = 1.50;    //Course credit 1.5
    printf("Enter ID: ");
    scanf("%d", &id); //ID input
    printf("Enter name: ");
    scanf("\n");
    scanf("%[^\n]%*c", sname); //Name input
    printf("Number of days student present: ");
    scanf("%d", &days);
    printf("Total Number of days classes held: ");
    scanf("%d", &tdays);
    ratio = (float)days/tdays;
    prcntge = ratio * 100; //Attendance calculation
    printf("Attendance is %.2f%%\n\n", prcntge);
    // If-Else statement
    if (prcntge>= 90){    attmarks = 10; }
    else if (prcntge>= 85 & prcntge < 90){    attmarks = 9; }
    else if (prcntge>= 80 & prcntge < 85){    attmarks = 8; }
    else if (prcntge>= 75 & prcntge < 80){    attmarks = 7; }
    else if (prcntge>= 70 & prcntge < 75){    attmarks = 6; }
    else if (prcntge>= 65 & prcntge < 70){    attmarks = 5; }
    else if (prcntge>= 60 & prcntge < 65){    attmarks = 4; }
    else {    attmarks = 0;}
    marks = credit * attmarks; //Total marks calculation
    printf("All Outputs: \n"); //All outputs respectively
    printf("Student ID : %d\n", id);
    printf("Student Name : %s\n", sname);
    printf("Course Credit : %.2f\n", credit);
    printf("Marks = %.2f", marks);
    return 0;   }

