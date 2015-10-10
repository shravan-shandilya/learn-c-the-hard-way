#include<stdio.h>
int main(){
	int age = 10;
	int height = 233;
	int weight;
	//Gives warning,prints out garbage
	printf("Initialised but not referred in printf Age:%d\n");
	printf("Initialised and referred in printf :%d\n",age);
	//No warning given,prints out garbage
	printf("Uninitialised but referred:%d\n",weight);
	return 0;

	/*
	On successive observations,the garbage value printed is also changing
	*/
	
}
