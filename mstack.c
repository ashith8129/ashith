#include<stdio.h>
#define Max 10
int top1=-1;
int top2=Max;
int ar[10];
void push1(){
	int x;
	if((top1+1)==top2)
		printf("stack full\n");
	else{
		top1++;
		printf("Enter element ");
		scanf("%d",&x);
		ar[top1]=x;
	}		
}		 
		
void push2(){
	int x;
	if((top2-1)==top1)
		printf("stack full\n");
	else{
		top2--;
		printf("Enter element ");
		scanf("%d",&x);
		ar[top2]=x;
	}		
}

void pop1(){
	if(top1==-1)
		printf("stack empty ");
	else 
		printf("element poped is : %d")		
		top1--;		 
}		

void pop2(){
	if(top2==Max)
		printf("stack empty ");
	else 
		top2++;		 
}		

void disp1(){
	int i;
	printf("Displaying stack 1\n");
	for(i=top1;i>-1;i--)
		printf("%d ",ar[i]);
}
	

void disp2(){
	int i;
	printf("Displaying stack 2\n");
	for(i=top2;i<Max;i++)
		printf("%d ",ar[i]);
}

void main(){

	int ch;
	do{

		printf("\n\n1. Push into stack 1\n2. Push into stack 2\n3. Pop stack 1\n4. Pop stack 2\n5. Display stack 1\n6. Display stack 2\n7. Stop ");
		printf("\nEnter choice ");
		scanf("%d",&ch);
		if(ch==1)
			push1();
		else if(ch==2)
			push2();
		else if(ch==3)
			pop1();
		else if(ch==4)
			pop2();
		else if(ch==5)
			disp1();
		else if(ch==6)
			disp2();
		else if(ch==7)
			printf("Exit\n");
		else 
			printf("Wrong choice" );
	}while(ch!=7);
}	 

	
















