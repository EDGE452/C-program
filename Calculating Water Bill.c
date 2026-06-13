#include <stdio.h>
int main(){
	float unitsconsumed,TotalBill;
	printf("Enter consumed units: ");
	scanf("%f",&unitsconsumed);
	
	if (unitsconsumed<=30){
		TotalBill =unitsconsumed * 20;
	}
	else if(unitsconsumed<=60)
	{
	TotalBill= unitsconsumed * 25;	
	}
	else {
		TotalBill= unitsconsumed * 30;
	}
	printf("Your Total Water bill is  %.2f KES\n",TotalBill);
	return 0;
}