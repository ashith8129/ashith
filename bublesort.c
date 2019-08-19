#include<stdio.h>
void bsort(int ar[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
}

void main(){

	int ar[20];
	int n,i,j;
	printf("\nEnter no of elements ");
	scanf("%d",&n);
	printf("\nenter elements ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	
	bsort(ar,n);
	printf("\nnew sorted array ");
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}
}


	
