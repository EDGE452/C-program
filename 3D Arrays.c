#include<stdio.h>
int main(){
int i;
int j;
int k;
int marks[2][2][3]={10,20,30,40,50,60,1,2,3,4,5,6};
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		for(k=0;k<=2;k++){
			printf("%d ", marks[i][j][k]);
		}
		printf("\n");
	}

}
   return 0;
}
