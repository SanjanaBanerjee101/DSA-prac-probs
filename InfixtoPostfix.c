#include<stdio.h>
#include<string.h>
#define MAX 50

char infix[MAX];
char postfix[MAX];
int top=-1;
char stack[MAX];

void push(char item){
	if(top==MAX-1){
		printf("Stack Overflow");
		return;
	}
	stack[++top]=item;
}








int main(void){
	printf("Enter the infix expression");
	gets(infix);
	infix_to_postfix();
	printf("The postfix expression is: %s",postfix);
	return 0;	
}
