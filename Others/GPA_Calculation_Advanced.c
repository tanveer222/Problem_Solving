#include<stdio.h>
#include<stdbool.h>
int main()
{
    int sub, marks, grade, terms;
    float total_grade=0.0, gpa;
    bool check = false;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for(int x=1; x<=terms; x++)
    {
        float term_grade=0.0;
        printf("Term %d: \n", x);
        printf("Enter number of Subjects: ");
        scanf("%d", &sub);

        for(int i=1; i<=sub; i++){
            printf("Enter Marks Subject %d: ", i);
            scanf("%d", &marks);
            switch(marks/10)
            {
            case 10:
                printf("Grade A+, Points = 5.00\n");
                grade = 5;
                break;
            case 9:
                printf("Grade A+, Points = 5.00\n");
                grade = 5;
                break;
            case 8:
                printf("Grade A+, Points = 5.00\n");
                grade = 5;
                break;
            case 7:
                printf("Grade A, Points = 4.00\n");
                grade = 4;
                break;
            case 6:
                printf("Grade B, Points = 3.00\n");
                grade = 3;
                break;
            case 5:
                printf("Grade C, Points = 2.00\n");
                grade = 2;
                break;
            case 4:
                printf("Grade D, Points = 1.00\n");
                grade = 1;
                break;
            default:
                printf("Grade F, Points = 0.00\n");
                grade = 0;
                break;
            }
            if(grade==0)
                check = true;
            term_grade = (term_grade + grade);
        }
        if(check)
            printf("You have failed!");
        else{
            gpa = term_grade / sub;
            printf("Term GPA %.2f\n", gpa);
            total_grade = total_grade + gpa;
        }
    }
    printf("\nOverall CGPA: %.2f", total_grade/terms);
    return 0;
}


