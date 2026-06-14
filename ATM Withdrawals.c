#include <stdio.h>
int main(){
float amount,balance;
printf("Enter account balance: ");
scanf("%f",&balance);
while(balance>0){
	printf("Enter amount to withdraw: ");
	scanf("%f",&amount);
	balance= balance-amount;
	printf("Your Balance is: %.2f\n",balance);
	}
	printf("Insufficient Balance");
	return 0;
}