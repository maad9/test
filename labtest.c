#include <stdio.h>

int main(){
	int i;
	
	for(i=0; i<5; i++)
		printf("%d",i+1);

	return 0;
}

void print(){
	printf("print\n");
}

int add(int a, int b){
	return a+b;	
}

int sub(int a, int b){
	return a-b;
}
