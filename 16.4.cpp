#include <stdio.h>

void printAr(int *ar, int size) {
    for (int i = 0; i < size; i++) {
        printf("phan tu thu %d la: %d\n", i + 1, *(ar + i));
    }}
    int main(){
    	
    	int ar[] = {1,2,3,4,5,6,7,8,9}, size = (sizeof(ar)/sizeof(ar[0]));
    	printAr(ar,size);
	}
