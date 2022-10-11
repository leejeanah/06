#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(void)
{
	int n, r, i, res;
	
	printf("두 정수를 입력하시오: ");
	scanf("%d %d", &n, &r);
	
	res = combination(n, r);
	printf("c(%d, %d) = %d", n, r, res);
	
	return 0; 
}

int combination(int n,int r)
{
 int a, b, c, result;
 
 a = factorial(n);
 b = factorial(n-r);
 c = factorial(r);

 result = a/(b*c);
 
  return result;
 }	

int factorial(int x)
{
	int res = 1;
	int i;
	for(i=1; i<x+1; i++){
		res = res*i;
	
}
	return res;
}
