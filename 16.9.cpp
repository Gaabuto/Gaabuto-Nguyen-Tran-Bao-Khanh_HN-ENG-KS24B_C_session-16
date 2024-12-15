#include <stdio.h>

void addIndex(int newIndex, int position,int *size, int ar[] ){
	(*size) ++;
	position --;
	for ( int i = *size; i > position; i --){
		ar[i] = ar[i - 1];
		
		
		
	}
	ar[position] = newIndex;
	
}


int main(){
	int ar[5] = {1,2,3,4,5}, newIndex, position,size = sizeof(ar)/sizeof(int), inside = 0;
	
	do{
		printf("moi ban nhap vi tri can them: ");
		scanf("%d", &position);
		if( position > 0 && position < size + 1){
			inside++;
		}else{
			printf("Vi tri cua ban khong co trong mang\n");
		}
	}while ( inside == 0);
	
	
	printf("moi ban nhap phan tu can them: ");
	scanf("%d", &newIndex);
	addIndex(newIndex,position,&size,ar);
	
	printf("mang sau khi them phan tu la: ");
	for ( int i = 0; i < size; i ++){
		printf("%d ", ar[i]);
	}
	
	
	
	
	return 0;
}
