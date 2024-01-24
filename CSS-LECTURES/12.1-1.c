#include<stdio.h>
#include<string.h>

int getInt();
void user();

struct Student
{
	int id;
	int age;
	char name[30];
	char course[30];
	char city[30];
	int std;
	char school[30];
};


int main()
{
	user();
	return 0;
}

void user()
{
	int n;
	printf("Enter No. of Student : ");
	scanf("%d",&n);

	struct Student s[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Student Id : ");
		s[i].id = getInt();
		
		fflush(stdin);
		printf("Enter Name : ");
		gets(s[i].name);
		
		printf("Enter Age : ");
		s[i].age = getInt();
		
		fflush(stdin);
		printf("Enter Course : ");
		gets(s[i].course);
		
		
		printf("Enter City : ");
		gets(s[i].city);
		
		printf("Enter Standard : ");
		s[i].std = getInt();
		
		printf("Enter School: ");
		gets(s[i].school);
	}
	
	for(i=0; i<n; i++)
	{
		printf("\n===========================\n");
		printf("           OUTPUT          \n");
		printf("===========================\n");
		printf("Id\t\t: %d \n",s[i].id);
		printf("Name\t\t: %s \n",s[i].name);
		printf("Age\t\t: %d \n",s[i].age);
		printf("Course\t\t: %s \n",s[i].course);
		printf("City\t\t: %s \n",s[i].city);
		printf("Standard\t: %d \n",s[i].std);
		printf("School \t: %s \n",s[i].school);
	}
}

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
