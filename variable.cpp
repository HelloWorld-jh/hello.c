//variable - 변할 수 있는 어떤 것
//constant - 변할 수 없는 것

#define pi 3.1415

#include <stdio.h> 
int main() {

	int year, month, day;
	int age=26;
	float weight;
	char letter_grade='A';
	
	year=2021;
	month=11;
	day=2;
	weight=90.4;
	
	
	
	
	printf("i'm' %d years old \n", age);
	printf("i'm %.1fkg \n", weight);
	printf("i got %c", letter_grade);
	
	return 0;
}
