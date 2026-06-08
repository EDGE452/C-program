#include <stdio.h>
int main(){
	int age;
	float annualincome;
	float principalamount;
	float time;
	float rates;
	float simpleinterest;
	//prompt user to input age and annualincome
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter annualincome:");
	scanf("%f",&annualincome);
	if (annualincome>=21000&&age>21)
		printf("Conngratulations you Qualify for a loan");
	else
	
		printf("Unfortunately, we are unable to offer you a loan at this time");
	
	//calculate simple interest
	
	printf("Enter principal amount:");
	scanf("%f",&principalamount);
	printf("Enter time:");
	scanf("%f",&time);
	printf("Enter rate:");
	scanf("%f",&rates);
	simpleinterest=(principalamount*time*rates)/100;
	
	printf("simpleinterest=%.2f",simpleinterest);
	return 0;
	
}