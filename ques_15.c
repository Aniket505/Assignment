/**
 * Program to evaluate reverse polish expression
 *
 * Compilation: gcc -o ques_15 ques_15.c
 * Execution:./ques_15
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAXSIZE 100

//Intializing Stack
int stack[MAXSIZE];
//Top of the stack
int top = -1;

//push operation of stack
void push(int item) {
    if(top >= MAXSIZE - 1 )
    {
        printf("Stack Overflow");
	return;
    }
    else
    {
        top++;
	stack[top] = item;
    }
}

// pop operation of stack
int pop()
{
    int item;
    if( top < 0 )
    {
	printf("Stack Underflow");
    }
    else
    {
        item = stack[top];
	top--;
	return item;
    }
}

// function to evaluate reverse polish expression
void postfix(char *str) {
    int i;
    int val;
    int op1, op2;
    char ch;

    for( i = 0; str[i] != '\0' ; i++ )
    {
        ch = str[i];
	if( isdigit(ch) )
	{
            push( ch - '0' );
	}
	else if ( ch == '+' || ch == '-' || ch == '*' || ch == '/' )
	{
	    op2 = pop();  // second operand
	    op1 = pop();  // first operand

	    switch (ch)
	    {
                case '*':
		    val = op1 * op2 ;
		    break;
		case '+':
		    val = op1 + op2 ;
		    break;
		case '-':
		    val = op1 - op2;
		    break;
		case '/':
		    val = op1 / op2;
		    break;
	    }
	    push(val);  // pushing the resultant value at the top of the stack
	}	
    }
    printf("result = %d ", pop());
}

int main () {

    char str[MAXSIZE];
    printf("Enter Expression : ");
    gets(str);
    postfix(str);
}
