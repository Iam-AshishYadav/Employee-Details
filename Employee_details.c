#include <stdio.h>
struct employee
{
    char name[30];
    int empId;
    int age;
    float salary;
};
int main()
{    int n,i;
    struct employee emp[100];
    printf("Enter the no of employees::");
    scanf("%d",&n);
    printf("\nEnter details::\n");
    for(i=0;i<n;i++)
    {
    printf("\nName ::");          
    scanf("%s",emp[i].name);
    printf("ID ::");
    scanf("%d",&emp[i].empId);
    printf("Age::");
    scanf("%d",&emp[i].age);
    printf("Salary ::");
    scanf("%f",&emp[i].salary);
    }
    printf("\nDisplaying Deatils::\n");
    printf("Employee_ID\tEmployee_Name\tEmployee_age\tEmployee_salary\n");
    for(i=0;i<n;i++)
    {printf("%d\t\t%s\t\t%d\t\t%f\n" , emp[i].empId,emp[i].name,emp[i].age,emp[i].salary);}
      return 0;
}