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
void bsearch(int ar[],int n,int key,int low,int high)
{	
	int mid;
	mid=(high+low)/2;
	if (low>=high){
		printf("Not found");
		return;
	}
	else{	
		
		
		if(ar[mid]==key){
			printf("Element found at pos %d ",mid+1);
	
		}
		else if(ar[mid]<key){
			low=mid+1;
			bsearch(ar,n,key,low,high);
		}
		else if(ar[mid]>key){
			high=mid-1;
			bsearch(ar,n,key,low,high);
		}
		
	}
}
void main(){
int ar[100];
int low,high,n,key,i;
printf("enter limit ");
scanf("%d",&n);
printf("\nenter numbers");
for(i=0;i<n;i++){
	scanf("%d",&ar[i]);
	}

printf("\nEnter no to be searched");
scanf("%d",&key);
bsort(ar,n);
low=0;
high=n;
bsearch(ar,n,key,low,high);
}
