// WAP to calculate the total income of an employee through various sources:-
// 1)Through Organization:-
// Store Employee Name,Id,Salary,Commision,Overtime,number of days he worked
// and deduct the salary for those days when absent.
// 2)Through Contractor:-
// Store Contract id,Name of Project,Duration,set 3 milestones uniformly for 10 days each
// and if the project is delayed by 'n' number of days deduct the project amount for each day.
// Note:- Use 2 Nested Structures.

#include <stdio.h>
struct organization
{
    int id;
    char name[50];
    float salary;
    float commission;
    float overtime;
    int days_worked;
    int days_absent;
};
struct contractor
{
    int contract_id;
    char project_name[50];
    int duration;
    float project_amount;
    int delay_days;
};
struct employee
{
    struct organization org;
    struct contractor cont;
};
float calculate_org_income(struct organization org)
{
    float daily_salary = org.salary / 30;
    float absent_deduction = daily_salary * org.days_absent;
    return org.salary + org.commission + org.overtime - absent_deduction;
}
float calculate_cont_income(struct contractor cont)
{
    float daily_deduction = cont.project_amount / cont.duration;
    float delay_deduction = daily_deduction * cont.delay_days;
    return cont.project_amount - delay_deduction;
}
int main()
{
    struct employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.org.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp.org.name);
    printf("Enter Salary: ");
    scanf("%f", &emp.org.salary);
    printf("Enter Commission: ");
    scanf("%f", &emp.org.commission);
    printf("Enter Overtime: ");
    scanf("%f", &emp.org.overtime);
    printf("Enter Number of Days Worked: ");
    scanf("%d", &emp.org.days_worked);
    printf("Enter Number of Days Absent: ");
    scanf("%d", &emp.org.days_absent);

    printf("Enter Contract ID: ");
    scanf("%d", &emp.cont.contract_id);
    printf("Enter Project Name: ");
    scanf("%s", emp.cont.project_name);
    printf("Enter Duration (in days): ");
    scanf("%d", &emp.cont.duration);
    printf("Enter Project Amount: ");
    scanf("%f", &emp.cont.project_amount);
    printf("Enter Delay Days: ");
    scanf("%d", &emp.cont.delay_days);

    float org_income = calculate_org_income(emp.org);
    float cont_income = calculate_cont_income(emp.cont);
    float total_income = org_income + cont_income;

    printf("\nTotal Income of Employee %s (ID: %d): %.2f\n", emp.org.name, emp.org.id, total_income);

    return 0;
}