#include<stdio.h>
#include<stdbool.h>
int main()
{
    int sub, marks, grade;
    float total_grade=0.0, gpa;
    bool check = false;
    scanf("%d", &sub);

    for(int i=1; i<=sub; i++){
        scanf("%d", &marks);
        switch(marks/10)
        {
        case 10:
            printf("A+\n");
            grade = 5;
            break;
        case 9:
            printf("A+\n");
            grade = 5;
            break;
        case 8:
            printf("A+\n");
            grade = 5;
            break;
        case 7:
            printf("A\n");
            grade = 4;
            break;
        case 6:
            printf("B\n");
            grade = 3;
            break;
        case 5:
            printf("C\n");
            grade = 2;
            break;
        case 4:
            printf("D\n");
            grade = 1;
            break;
        default:
            printf("F\n");
            grade = 0;
            break;
        }
        if(grade==0)
            check = true;
        total_grade = (total_grade + grade);
    }
    if(check)
        printf("You have failed!");
    else{
        gpa = total_grade / sub;
        printf("\n%.2f", gpa);
    }
    return 0;
}

