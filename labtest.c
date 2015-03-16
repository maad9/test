#include <stdio.h>

int main(){
	int i;
	
	for(i=0; i<5; i++)
		printf("%d",i);

	return 0;
}

void print(){
	printf("print print\n");
}

int add(int a, int b){
	return a+b;	
}

