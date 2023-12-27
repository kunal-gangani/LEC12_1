/* 
Q.1 Write a Program to create Student Record System for 3 students using structure.
 Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school

Output:
Enter Name of Student 1 is : Kunal
Enter Age of Student 1 is : 18
Enter Course of Student 1 is : Commerce
Enter City of Student 1 is : Surat
Enter Standard of Student 1 is : 12
Enter School of Student 1 is : Gajera
Enter Name of Student 2 is : Priya
Enter Age of Student 2 is : 15
Enter Course of Student 2 is : Science
Enter City of Student 2 is : Vadodra
Enter Standard of Student 2 is : 9
Enter School of Student 2 is : ppsavani
Enter Name of Student 3 is : raj
Enter Age of Student 3 is : 20
Enter Course of Student 3 is : humanities
Enter City of Student 3 is : pune
Enter Standard of Student 3 is : 7
Enter School of Student 3 is : sdj

The Name of Student 1 is Kunal
The Age of Student 1 is 18
The Course of Student 1 is Commerce
The City of Student 1 is Surat
The Standard of Student 1 is 12
The School of Student 1 is Gajera
The Name of Student 2 is Priya
The Age of Student 2 is 15
The Course of Student 2 is Science
The City of Student 2 is Vadodra
The Standard of Student 2 is 9
The School of Student 2 is ppsavani
The Name of Student 3 is raj
The Age of Student 3 is 20
The Course of Student 3 is humanities
The City of Student 3 is pune
The Standard of Student 3 is 7
The School of Student 3 is sdj
*/
#include<stdio.h>
#include<string.h>
struct srs{
	int id;
	char name[20];
	int age;
	char course[20];
	char city[20];
	int standard;
	char school[30]
};
void main(){
	struct srs s1;
	struct srs s2;
	struct srs s3;
	
		printf("Enter Name of Student 1 is : ");
		scanf("%s",&s1.name);
		printf("Enter Age of Student 1 is : ");
		scanf("%d",&s1.age);
		printf("Enter Course of Student 1 is : ");
		scanf("%s",s1.course);
		printf("Enter City of Student 1 is : ");
		scanf("%s",s1.city);
		printf("Enter Standard of Student 1 is : ");
		scanf("%d",&s1.standard);
		printf("Enter School of Student 1 is : ");
		scanf("%s",s1.school);

		printf("Enter Name of Student 2 is : ");
		scanf("%s",&s2.name);
		printf("Enter Age of Student 2 is : ");
		scanf("%d",&s2.age);
		printf("Enter Course of Student 2 is : ");
		scanf("%s",s2.course);
		printf("Enter City of Student 2 is : ");
		scanf("%s",s2.city);
		printf("Enter Standard of Student 2 is : ");
		scanf("%d",&s2.standard);
		printf("Enter School of Student 2 is : ");
		scanf("%s",s2.school);

		printf("Enter Name of Student 3 is : ");
		scanf("%s",&s3.name);
		printf("Enter Age of Student 3 is : ");
		scanf("%d",&s3.age);
		printf("Enter Course of Student 3 is : ");
		scanf("%s",s3.course);
		printf("Enter City of Student 3 is : ");
		scanf("%s",s3.city);
		printf("Enter Standard of Student 3 is : ");
		scanf("%d",&s3.standard);
		printf("Enter School of Student 3 is : ");
		scanf("%s",s3.school);
		
		s1.id=1;
		printf("\nThe Name of Student 1 is %s",s1.name);
		printf("\nThe Age of Student 1 is %d",s1.age);
		printf("\nThe Course of Student 1 is %s",s1.course);
		printf("\nThe City of Student 1 is %s",s1.city);
		printf("\nThe Standard of Student 1 is %d",s1.standard);
		printf("\nThe School of Student 1 is %s",s1.school);
	
		s2.id=2;
		printf("\nThe Name of Student 2 is %s",s2.name);
		printf("\nThe Age of Student 2 is %d",s2.age);
		printf("\nThe Course of Student 2 is %s",s2.course);
		printf("\nThe City of Student 2 is %s",s2.city);
		printf("\nThe Standard of Student 2 is %d",s2.standard);
		printf("\nThe School of Student 2 is %s",s2.school);
		

		s3.id=3;
		printf("\nThe Name of Student 3 is %s",s3.name);
		printf("\nThe Age of Student 3 is %d",s3.age);
		printf("\nThe Course of Student 3 is %s",s3.course);
		printf("\nThe City of Student 3 is %s",s3.city);
		printf("\nThe Standard of Student 3 is %d",s3.standard);
		printf("\nThe School of Student 3 is %s",s3.school);
}
