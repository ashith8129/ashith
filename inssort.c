#include<stdio.h>

void isort(int ar[],int n){
	int i,j,k,temp;
	int c=0;
	for(i=1;i<n;i++){
		c=0;
		if(ar[i]<ar[i-1]){
			for(j=i-1;j>=0;j--){
				if(ar[i]<ar[j])
					c++;
			}
			temp=ar[i];
			for(k=i;k>(i-c);k--){
				ar[k]=ar[k-1];
			}
			ar[k]=temp;
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
	
	isort(ar,n);
	printf("\nnew sorted array ");
	for(i=0;i<n;i++){
		printf("%d",ar[i]);
	}
}
