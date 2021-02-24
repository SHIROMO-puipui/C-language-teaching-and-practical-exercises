#include <iostream>
#include <cctype> //以下為使用函數
 
/*  函數        返回值 
    isalpha()	如果引數是字母，該函式返回真
    tolower()	如果引數是大寫字元，則返回其小寫，否則返回該引數
*/ 

#include <sstream> 
/*
  strstream類同時可以支援C風格的串流的輸入輸出操作
  stringstream則是從iostream(輸入輸出流類)和和stringstreambase（c++字串流基類）派生而來
  stringstream的建構函式原形如下： 
  stringstream::stringstream(string str);   
*/
using namespace std;
int main() {
	string s,tmp; //宣告格式：string 變數名稱;
	while(getline(cin,s)){   //getline(cin,s) >>讀取這一行 
	/*
	  因為回車輸入的是一個換行符，相當於另起一行，
	  所以getline()會把這個空行讀到s裡面去，你最後輸出的當然就是一個空行。	
	  while(geline(cin,s))這個語句的執行過程是這樣的：
      先調用getline()函數，getline()將istream cin中的內容讀取一行（你輸入的是hello world)，
      保存進string s中，而getline()的返回值就是cin
      hello world被讀入s，換行後的空行被讀入s，末端標誌eof使cin為無效狀態，while()判斷為假，循環退出。
    */
      for(int i=0;i<=s.length();i++){ //將s的每個字元取出
    /*  string str="0123456789";
        cout < <"str.length()="<<str.length()<<endl;//結果為10
        length()是因為沿用C語言的習慣而保留下來的，string類最初只有length()，
		引入STL之後，為了兼容又加入了size()，它是作為STL容器的屬性存在的，便於符合STL的接口規則，
		以便用於STL的算法,string類的length()方法返回的是字節數，不管是否有漢字。
	*/
	if(isalpha(s[i])){ //ctype.h 的函數 isalpha() 測試參數是否為字母，滿足條件回傳非 0 的值 。
    s[i]=tolower(s[i]);
    /* 
       這個函數返回小寫相當於c，如果存在的值，否則c保持不變。返回值可以隱式char為int值。
	   聲明函數>> int tolower(int c);
	*/
	
	}else{
		s[i]=' ';//否則改為空白字元 
		
	}
      	
	  }
	  stringstream ss(s); ////建構函式初始化
	  while(ss>>tmp){ //ss輸入到tmp，利用空白字元進行字串切割，每小段字串tmp可以經由cout顯示到螢幕 
	  	cout<<tmp<<endl;
	  	
	  }
	}
}

