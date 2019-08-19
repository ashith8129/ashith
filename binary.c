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
	
void lsearch(int ar[],int n,int key){
	int i;	
	int f=1;
	for(i=0;i<n;i++){
		if(ar[i]==key){
			f=0;
			break;
		}
	}
	
	if(f==0)
		printf("Element found at pos %d",i+1);
	else
		printf("element not found");
}
		
void bsearch(int ar[],int n,int key){
	int low,high,mid,flag=0;
	low=0;
	high=n-1;
	mid=(low+high)/2;
	bsort(ar,n);
	while(low<high){
		if(ar[mid]==key){
			printf("element found at sorted position %d",mid+1);
			flag=1;
			break;
			}
		else if(ar[mid]<key)
			low=mid+1;
		else 
			high=mid-1;
	
		mid=(low+high)/2;
	}
	if(flag==0)
		printf("Not found");
}

void main()
{
	int i,n,key,k;
	int ar[10];
	
	printf("enter limit ");
	scanf("%d",&n);
	printf("\nEnter elements ");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	printf("\nEnter key ");
	scanf("%d",&key);
	printf("\nEnter choice\n"); 
	printf("1. Linear search \
		2. Binary search \
		3.Exit\n");
		
	scanf("%d",&k);
	
	if(k==1)
		lsearch(ar,n,key);
	else if(k==2)
		bsearch(ar,n,key);
	else if(k==3)
		printf("\nBye");
	else
		printf("invalid input");
}
	

	
	
	

