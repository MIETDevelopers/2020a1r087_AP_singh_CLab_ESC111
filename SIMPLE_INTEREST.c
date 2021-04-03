#include <stdio.h>
int main(){
	float P, R, T, SI;
	printf("Please enter the Principle:\n");
	scanf("%f", &P);
	printf("Please enter the Rate:\n");
	scanf("%f", &R);
	printf("Please enter the Time:\n");
	scanf("%f", &T);
	SI = (P*R*T)/100;
	printf("Simple Interest = %f\n", SI);
	return 0;
}
