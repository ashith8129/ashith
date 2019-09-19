#include<stdio.h>
#define Max 10
int top=-1;
void push(int ar[]){
	int x;
	if((top+1)<Max){
		
		printf("Enter element ");
		scanf("%d",&x);
		ar[++top]=x;
		}
	else
		printf("no space\n");
}

void pop(int ar[]){
	if(top==-1)
		printf("stack empty\n");
	else
		printf("element poped is : %d",ar[top--]);
} 

void disp(int ar[]){
	int i;
	printf("Displaying\n");
	if(top==-1)
		printf("stack empty\n");
	else{
		for(i=top;i>-1;i--)
			printf("%d ",ar[i]);
	printf("\n");
	}
}	

void main(){
	int ar[10];
	int ch;
	do{
		printf("\n\n1.push\n2.pop\n3.display\n4.stop\n");
		printf("enter choice : ");
		scanf("%d",&ch);
		if(ch==1)
			push(ar);
	
		else if(ch==2)
			pop(ar);
		
		else if(ch==3)
			disp(ar);
		
		else if(ch==4)
			printf("exit\n");
		else
			printf("invalid input");
	}while(ch!=4);
}







