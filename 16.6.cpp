#include <stdio.h>

int findComponent(int *ar, int size, int a){
	for (int i = 0; i < size; i ++){
		if (ar[i] == a){
			return i;
		}
		
	}
	return -1;
}


int main(){
    	
    	int i,component,position,a, ar[] = {1,2,3,4,5,6,7,8,9}, size = (sizeof(ar)/sizeof(ar[0]));
    	
    	printf("Moi ban nhap gia tri can tim: ");
    	scanf("%d", &a);
    	position = findComponent(ar,size,a);
    	
    	 if (position != -1) {
        printf("Gia tri tim thay o vi tri %d",position + 1);
    } else {
        printf("Gia tri %d khong tim thay trong mang", a);
    }
    return 0;
}
