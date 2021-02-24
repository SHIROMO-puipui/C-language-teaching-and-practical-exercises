#include <iostream>

using namespace std;

int main() {
	
	char a;
	cin >>a;  //cin為輸入，cout為輸出
	 
	cout <<"a="<<a<<endl;
	char b; //如果char變int在最後輸出時b值會為0 
	cin >>b;
	cout<<"b="<<b<<endl;
	char c[5]; // "c[5]" 一維陣列
	//char 字元常數 int 整數常數 
	cin >>c;
	cout<<"c="<<c<<endl;
//	cin >>a>>b>>c; // 加了這行則不會在地1次輸入值時直接輸出結果
//不懂意思把那行註解拿掉試試 
	cout <<"a="<<a<<endl;
	cout <<"b="<<b<<endl;
	cout <<"c="<<c<<endl;
	
	return 0;
}
