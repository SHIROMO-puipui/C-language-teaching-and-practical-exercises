#include <iostream> 
#include <stdlib.h> //使用rand() 
#include <time.h> //使用 time()
using namespace std;
int main() {
	int a,b;
	char *a1,*b1,*r;
	
	//在棧內存中定義一個char *型的變量，內容為字符串“a1、b1、r”的首地址
//但是字符串“a1、b1、r”的內容存在於常量區，內容不可變，
//在編譯的時候就已經確定內容。運行速度慢。
/*   
     補充>> 
	 char *str="test";       //指標
:    char str[] = "test";    //陣列
:    首先 "test" 是 const char[] 的一個常數值, 會被放到唯讀區域
*/   

	time_t t;    //需要宣告#include <time.h>
	/*
   time()函數

   該函數作用是獲取系統時間。

   其一般形式為

   time_t time(time_t *t)；

   其中time_t也就是長整型long，定義：typedef long time_t；
   */
   
	srand((unsigned)time(&t));//隨機選取亂數起點， 若未使用此指令，每次亂數起點都相同 
	 /*
       C庫函數void srand(unsigned int seed)
	    種子rand函數所使用的隨機數發生器。
	    void srand(unsigned int seed) >>srand()函數聲明
		seed -- 這是一個整數的值被用來作為種子由偽隨機數生成器算法
	*/
	
	cout<< "input 0(剪刀) 1(石頭) 2(布) :";
	cin>>a;	 
	b=rand()%3;//產生猜拳亂數(0、1、2)
	switch (a){
		case 0:
			a1="剪刀";
			switch(b){
				case 0:
					b1="剪刀";
					r ="平手" ;
					break;					
				case 1:
					b1="石頭";
					r ="電腦贏" ;
					break;
				case 2: 
					b1="布";
					r ="你贏"; 
					break;									
			}
			break;
		case 1:
			a1="石頭";
			switch(b){
				case 0:
					b1="剪刀";
					r ="你贏" ;
					break;
				case 1:
					b1="石頭";
					r ="平手" ;
					break;
				case 2: 
					b1="布";
					r ="電腦贏";
					break; 			
			}
			break;
		case 2:
			a1="布";
			switch(b){
				case 0:
					b1="剪刀";
					r ="電腦贏"; 
					break;
				case 1:
					b1="石頭";
					r ="你贏"; 
					break;
				case 2: 
					b1="布";
					r ="平手";
					break; 				
			}
			break;
 	}
 	cout<<"你出:"<<a<<a1<<", 電腦出："<<b<<b1<<",  結果："<<r;
	return 0;
}


