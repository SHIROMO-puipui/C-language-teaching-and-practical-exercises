#include <iostream>

using namespace std;
int Factorial(int n){ //Factoria>>���� 
	if (n==0)
	return 1;//��n=0�A�Ǧ^1�������j 
	else
	return n * Factorial(n-1);
	/* "n * Factorial(n-1)"�Yn=10�h��10*Factorial(9)�A
	��n=9�Y��9* Factorial(8)...�H�������A
	 
	             10!=10*9*8*7*6*5*4*3*2*1
	*/ 
}

int main()

{
	int n,Total;
	printf("INPUT n: ");
	scanf("%d",&n); //"&n"�N�ܼƦa�}���X "*"�����X���e
	// scanf����J���printf�i��X���G
	 
	Total = Factorial(n); 
	printf("n!=%d",Total); // %d��ƿ�X 
    return 0;
}
