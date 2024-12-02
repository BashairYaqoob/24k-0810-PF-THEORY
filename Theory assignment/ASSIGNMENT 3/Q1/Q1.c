/Name: Bashair Yaqoon
Date: 18/11/2024

*Structure Employee with data members:
● employeeCode
● employeeName
● dateOfJoining
Perform the following operations:
Function that asks the user to enter the current date, calculates the tenure of each
employee, and checks if the tenure is more than three years. Display the details of
employees with tenure of more than three years and the count of such employees.*/
#include <stdio.h>
#include <stdlib.h>

struct Employee{
    int code;
    char name[20];
    struct date{
        int day;
        int month;
        int year;
    } d;
};
struct Employee e[4];

void employee_data(){
    for(int i=0; i<4; i++){
        printf("Employee code:");
        scanf("%d", &e[i].code);
        printf("Employee name:");
        scanf("%s", &e[i].name);
        printf("Employee date of joining(dd mm yyyy):");
        scanf("%d %d %d", &e[i].d.day, &e[i].d.month, &e[i].d.year);
    }
}

int check(struct Employee* e){
    int d, m,y;
    printf("Enter current date(dd mm yyyy)");
    scanf("%d %d %d", &d, &m, &y);
    int diff, count=0;
    for(int i=0; i<4; i++){
        diff=y-e[i].d.year;
        if(diff>3){
        printf("\nEmployee Details\nCode: %d Name: %s Date of Joining: %d-%d-%d", e[i].code,e[i].name, e[i].d.day, e[i].d.month, e[i].d.year);
        count++;
        }
    }
    printf("\nTotal %d Employes with more than 3 years of tenure!", count);
}

int main(){
    printf("Enter data for 4 employees:\n");
    employee_data();
    check(e);
    return 0;
}
