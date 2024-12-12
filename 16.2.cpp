#include <stdio.h>
void swap(int *one, int *two){
	int temp = *one;
	*one = *two;
	*two = temp;
}
int main(){
	int three = 2, four = 4;
	printf("%d la so thu nhat\n%d la so thu 2", three, four);
	swap(&three,&four);
	printf("\n");
	printf("%d la so thu nhat\n%d la so thu 2", three, four);
	return 0;
}
