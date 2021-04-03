#include <stdio.h>
int main(){
	int n, temp, i;
	float sum, average;
	printf("How many numbers you want to find average of?\n");
	scanf("%d", &n); // address of n
	sum = 0;
	i = 1;
	while(i<=n){
		printf("Enter a%d\n", i);
		scanf("%d", &temp);
		sum = sum + temp;
		i = i + 1;
	}
	average = sum/n;
	printf("average = %f\n", average);
	return 0;
}

