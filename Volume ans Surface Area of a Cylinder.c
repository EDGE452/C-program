#include <stdio.h>
int main(){
	float radius;
	float height;
	float pi=3.14;
	float volume;
	float surfacearea;
	//promp for values
	printf("enter radius:");
	scanf("%f",&radius);
	
	printf("Enter height:");
	scanf("%f",&height);
	//calculate volume
	volume=pi*radius*radius*height;
	//calculate surfacearea
	surfacearea=2*pi*radius*radius+2*pi*radius*height;
	
	printf("Volume of cylinder=%.2f",volume);
	printf("surfacearea of cylinder=%.2f",surfacearea);
	
	return 0;
	
}