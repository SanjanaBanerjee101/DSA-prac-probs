#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

	/* Check if the stack is empty */
int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}
/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
/* Function to return the topmost element in the stack */
int peek(){
   return stack[top];
}

/* Function to delete from the stack */
int pop(){
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
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
