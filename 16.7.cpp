#include <stdio.h>

void sort(int *ar,int size){
	 for( int i = 0; i < size; i ++){
	 	int min = i;
	 	for( int j = i + 1; j < size; j ++){
	 		if( ar[min] > ar[j]){
	 		int temp = ar[j];
	 		ar[j] = ar[min];
	 		ar[min] = temp;
		 }	 	
		 }
	 }
}


int main(){
	int size;
	printf("moi ban nhap do dai cua mang: ");
	scanf("%d", &size);
	int ar[size];
	for ( int i = 0; i < size; i ++){
		printf("moi ban nhap phan tu thu %d: ", i + 1);
		scanf("%d",&ar[i]);
	}
	
	sort(ar,size);

printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ar[i]); 
    }
	
	
	return 0;
}
