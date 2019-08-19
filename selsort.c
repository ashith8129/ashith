#include<stdio.h>

void ssort(int ar[],int n){
	
	int pos,min,i,j,temp;
	for(i=0;i<n-1;i++){
		min=ar[i];
		for(j=i+1;j<n;j++){
			if(min>ar[j]){
				min=ar[j];
				pos=j;
			}
		}
		temp=ar[i];
		ar[i]=ar[pos];
		ar[pos]=temp;
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
	
	ssort(ar,n);
	printf("\nnew sorted array ");
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}
}
