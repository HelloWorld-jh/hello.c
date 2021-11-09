#include <stdio.h>

int main(){
	int a=10f;
	int* ptr;
	
	ptr=&a;
	
	printf("address of a is %x  \n", &a);
	printf("value of a is %x \n", ptr);
	printf("value of a is %d", *ptr);
	
	return 0;
}
