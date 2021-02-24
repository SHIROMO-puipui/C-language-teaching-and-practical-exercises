#include <iostream>

using namespace std;
int Factorial(int n){ //Factoria>>階乘 
	if (n==0)
	return 1;//當n=0，傳回1結束遞迴 
	else
	return n * Factorial(n-1);
	/* "n * Factorial(n-1)"若n=10則為10*Factorial(9)，
	當n=9即為9* Factorial(8)...以此類推，
	 
	             10!=10*9*8*7*6*5*4*3*2*1
	*/ 
}

int main()

{
	int n,Total;
	printf("INPUT n: ");
	scanf("%d",&n); //"&n"將變數地址取出 "*"為取出內容
	// scanf為輸入資料printf可輸出結果
	 
	Total = Factorial(n); 
	printf("n!=%d",Total); // %d整數輸出 
    return 0;
}
