#include <stdio.h>

void sum( int *first, int *second, int *answer){
	*answer = *first + *second ;
}
int main(){
	int abc = 3, bcd = 4, answer;
 	sum(&abc,&bcd,&answer);
	printf("%d",answer);
	return 0;
}
