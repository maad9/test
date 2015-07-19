#include <stdio.h>

int main(){

	printf("Witaj .NET\n");
	printf("Witaj Swiecie\n");
    printf("5 + 5 = %f", add(5,5));

	return 0;
}

float add(int a, int b){
	return a+b;
}

float multiply(int a, int b){
	return a*b;
}
