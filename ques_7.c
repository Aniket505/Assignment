/**
 * Program to print lines in file of length more than 80 characters
 *
 * Compilation: gcc -o ques_7 ques_7.c
 * Execution:./ques_7
 *
 * @Aniket , (1910990836) , 23/07/2021
 * Assignment 1 
 */ 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 1000
#define MAX 80

void print(char line[],char lines[],int i)
{
    for(int j = 0 ; j < i ; j++)
    {
        lines[j] = line[j];
    }
    puts(lines);
}

int main()
{
    FILE *fp;
    int ch, no_of_char = 0;
    fp = fopen("input.txt","r");
    if( fp == NULL )
    {
        printf("Error Opening the file !!!");
	exit(1);
    }

    char line[N];
    char lines[N];
    int i = 0;
    int size;

    ch = fgetc(fp);
    while( ch != EOF )
    {
	line[i] = '\0';
        if(ch == '\n')
	{   
            if(i == MAX)
	    {
	        print(line,lines,i);
		i = 0;
	    }
	}
	else
	{
            line[i] = ch;
	    i++;
	    ch = fgetc(fp);
	}
    }
}
