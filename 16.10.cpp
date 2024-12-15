#include <stdio.h>

void delIndex( int position,int *size, int ar[] ){
	
	position --;
	for ( int i = position; i < *size - 1; i ++){
		ar[i] = ar[i + 1];
		

	}
	(*size) --;
}

void printAr(int ar[], int *size){
	printf(" mang hien dang co la: ");
	for ( int i = 0; i < *size; i ++){
		printf("%d ", ar[i]);
	}
}

int main(){
	int ar[5] = {1,2,3,4,5}, position,size = sizeof(ar)/sizeof(int), inside = 0;
	
	do{
		printf("moi ban nhap vi tri can xoa: ");
		scanf("%d", &position);
		if( position > 0 && position < size + 1){
			inside++;
		}else{
			printf("Vi tri cua ban khong co trong mang\n");
		}
	}while ( inside == 0);
	
		delIndex(position,&size,ar);
		printAr(ar, &size);
	
	
	
	
	return 0;
}
