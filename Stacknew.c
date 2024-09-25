#include<stdio.h>
#include<stdlib.h>
#define Max 5

	int stack[Max];
	int top=-1,n,item;

//to enter items into the stack
void push(int item){
	if(top==Max-1){
		printf("Stack Overflow\n");
		return ;
	}
	stack[top++]=item;
}

//to delete items from the stack
void pop(int item){
	if(top==-1){
		printf("Stack Underflow\n");
		return;
	}
	item=stack[top];
	top--;
	printf("\nDeleted item is %d",item);
}

//to display items in the stack
void display(){
	if(top==-1){
		printf("Stack is Empty\n");
		return;
	}
	for(int i=0; i<=top; i++){
		printf("%d\t",stack[i]);
	}
}



int main(){
	
	do{
		printf("\n*******Stack Operations********");
		printf("\n1.PUSH");
		printf("\n2.POP");
		printf("\n3.DISPLAY");
		printf("\n4.EXIT ");
		
		scanf("%d",&n);
		
		switch(n){
			case 1 :
				printf("Enter the item u want to push : ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				pop(item);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}while(1);
	return 0;
}
