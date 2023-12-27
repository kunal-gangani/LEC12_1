/*
Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name

Output: 
Enter the number of employees: 2

Enter details for Employee 1:
Employee ID: 101
Name: Kunal
Age: 18
Role: CEO
City: Surat
Experience (in years): 2
Company Name: Google

Enter details for Employee 2:
Employee ID: 102
Name: Sam
Age: 25
Role: Manager
City: Mumbai
Experience (in years): 2
Company Name: Microsoft


The ID of Employee 1 is 101
The Name of Employee 1 is Kunal
The Age of Employee 1 is 18
The Role of Employee 1 is CEO
The City of Employee 1 is Surat
The Experience of Employee 1 is 2
The Company Name of Employee 1 is Google

The ID of Employee 2 is 102
The Name of Employee 2 is Sam
The Age of Employee 2 is 25
The Role of Employee 2 is Manager
The City of Employee 2 is Mumbai
The Experience of Employee 2 is 2
The Company Name of Employee 2 is Microsoft
*/
#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    int age;
    char role[50];
    char city[50];
    int experience;
    char company_name[50];
};
void main() {
    int n,i=1;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
	struct Employee emp[n];
    for (i=1;i<=n;i++) {
        printf("\nEnter details for Employee %d:\n",i);
        printf("Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);  
        printf("Age: ");
        scanf("%d", &emp[i].age);
        printf("Role: ");
        scanf("%s", emp[i].role);
        printf("City: ");
        scanf("%s", emp[i].city);
        printf("Experience (in years): ");
        scanf("%d", &emp[i].experience);
        printf("Company Name: ");
        scanf("%s", emp[i].company_name);
    }
    printf("\n");
    for (i=1;i<=n;i++) {
    	printf("\n");
        printf("\nThe ID of Employee %d is %d ",i,emp[i].id);
        printf("\nThe Name of Employee %d is %s ",i,emp[i].name);
        printf("\nThe Age of Employee %d is %d ",i,emp[i].age);
        printf("\nThe Role of Employee %d is %s ",i,emp[i].role);
        printf("\nThe City of Employee %d is %s ",i,emp[i].city);
        printf("\nThe Experience of Employee %d is %d ",i,emp[i].experience);
        printf("\nThe Company Name of Employee %d is %s ",i,emp[i].company_name);
    }

    
}
