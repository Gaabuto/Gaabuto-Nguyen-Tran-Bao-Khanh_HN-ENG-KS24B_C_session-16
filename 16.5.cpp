#include <stdio.h>

void addComponent(int *ar, int component,int position ){
	ar[position-1] = component;
}
int main(){
    	
    	int i,component,position, ar[] = {1,2,3,4,5,6,7,8,9}, size = (sizeof(ar)/sizeof(ar[0]));
    	
    	while(i == 0){
		printf("moi ban chon vi tri can cap nhat:");
    	scanf("%d",&position);
    	if (position <0 || position > size){
    		printf("khong hop le, moi nhap lai");
		}
		i ++;
    }
    	
    	
    	printf("moi ban chon phan tu cap nhat: ");
    	scanf("%d",&component);
    	
    	addComponent(ar,component,position);
    	
    	printf("mang sau khi cap nhat la: ");
    	for (i = 0; i < size; i ++){
			printf("%d",ar[i]); 
		}

    	return 0;
	}
