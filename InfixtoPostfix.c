#include<stdio.h>
#include<string.h>
#define MAX 50

char infix[MAX];
char postfix[MAX];
int top=-1;
char stack[MAX];

//to push an item in the stack
void push(char item){
	if(top==MAX-1){
		printf("Stack Overflow");
		return;
	}
	stack[++top]=item;
}
//to delete an item from the stack
char pop(){
	if(top==-1){
		printf("Stack Underflow");
		return ;
	}
	return stack[top--];
}
//precedence order to followed by the operators in stack while pushing
int prec(char symbol){
	
	switch(symbol){
		case '(':
				return 0;
		case '+':
		case '-':
				return 1;
		case '*':	
		case '/':
		case '%':
				return 2;
		case '^':
				return 3;
	}
}


void infix_to_postfix(){
	int i,p=0;
	char next;
	
	for(i=0; infix[i]!='\0'; i++){
		
		switch(infix[i]){
			
			case '+':
			case '-':
			case '*':
			case '/':
			case '%':
			case '^':
				while(top!=-1 && prec(infix[i])<=prec(stack[top]))
						postfix[p++]=pop();
				push(infix[i]);
				break;
				
			case '(':
				push(infix[i]);
				break;
				
			case ')':
				while((next=pop())!='(')
					postfix[p++]=next;
					break;
			
			default:
				postfix[p++]=infix[i];
				
		}
	}
	while(top!=-1)
		postfix[p++]=pop();
		
	postfix[p]='\0';
}

int main(void){
	printf("Enter the infix expression");
	gets(infix);
	infix_to_postfix();
	printf("The postfix expression is: %s",postfix);
	return 0;	
}
