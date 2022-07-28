#include<stdio.h>

struct Student{
	int rollno;
	char name[20];
	float fee;
} s1;

int main(){
	printf("Enter roll no : ");
	scanf("%d", &s1.rollno);
	printf("Enter student name: ");
	scanf("%s", &s1.name);
	printf("Enter your fee: ");
	scanf("%f", &s1.fee);
	printf("\nDetails\n\n");
	printf("Roll no. : %Id\nName : %s\nfee: %5.2f\n",s1.rollno , s1.name, s1.fee);
	return 0;
}
