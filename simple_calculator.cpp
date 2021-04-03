#include <stdio.h>
int main(){
	float op1, op2, result;
	char operator-;
	printf("op1=\n");
	scanf("%f", &op1);
	printf("operator=\n");
	scanf(" %c", &operator);
	printf("op2=\n");
	scanf("%f", &op2);
	// result = op1 operator op2;
	// if-else ladder
	if(operator == '+'){
		result = op1+op2;
	} else if(operator == '-'){
		result = op1-op2;
	} else if(operator == '*'){
		result = op1*op2;
	} else if(operator == '/'){
		result = op1/op2;
	} else{
		printf("Invalid operator.\n");
		return -1;
	}
	printf("result=%f\n", result);
	return 0;
}
