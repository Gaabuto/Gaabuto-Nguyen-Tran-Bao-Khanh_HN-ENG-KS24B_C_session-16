#include <stdio.h>

int main(){
	int a = 1232212;
	int *num = &a;
	printf("gia tri a la %d\n", a);
	printf("gia tri a qua num la %d\n", *num);
	printf("dia chi a la %d\n", &a);
	printf("dia chi a qua num la %d\n", *num);
	return 0;
}
