#include <stdio.h>

int main(){	
float Attendance,Marks;
	
	printf("Enter Atendance percentage");
	scanf("%f",&Attendance);
	printf("Enter Average marks");
	scanf("%f",&Marks);
	
	if(Attendance>=75 && Marks>=40){
		printf("Eligible to do Exams.\n");
		}
		else{
			printf("Not Eligible.\n");
	}


	
	return 0;
}
