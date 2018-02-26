#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

void scan(char name, int S[SIZE][SIZE]);
void sum(char name, int S[SIZE][SIZE]);
void print(char name,int S[SIZE][SIZE]);
int f,u;

int main (void)
{
	system ("chcp 1251>nul");
	
	int A[SIZE][SIZE], B[SIZE][SIZE];
	
	scan ('A',A);
	scan ('B',B);
	
	sum('A',A); 
	sum('B',B);
	
	print('A',A); 
	print('B',B);
	
	return 0;
}

void scan(char name, int S[SIZE][SIZE])
{
	printf("\nВъведи масива %c\n", name);
	for(f=0; f<SIZE; f++)
	for(u=0; u<SIZE; u++)
	{
		printf("\n %c[%d][%d] - ",name, f ,u);
		scanf("%d", &S[f][u]);
	}
}

void sum(char name, int S[SIZE][SIZE])
{
	int sum=0;
	
	for(f=0; f<SIZE; f++)
	for(u=0; u<=f-1; u++)
	{
		if(S[SIZE][SIZE]%2 == 0)
		sum= sum + S[SIZE][SIZE];
	}
	printf("\nСумата на четните числа под главния диагонал в масива %d: %d\n",name ,sum);
}

void print(char name,int S[SIZE][SIZE])
{
	printf("\nМасива %c\n",name);
	for(f=0; f<SIZE; f++)
	{
		printf("\n");
		for(u=0; u<SIZE; u++)
		printf("	%d",S[f][u]);
	}
}
