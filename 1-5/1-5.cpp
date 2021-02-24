#include <iostream>
using namespace std;

int main() {
	int i,j,k=0;
	int flag=1;
	cout<<"prime number between 2 to 1000\n";//   \n為跳行 
	for(i=2; i<=1000; i++){//i++>>i=i+1  //最外層迴圈 
		flag=1;           
		for(j=2; j<i-1; j++) { //第2層迴圈 //迴圈中的if結束才跳出2層迴圈 
			if(i%j==0){
				flag=0;
			break; //跳出迴圈不執行第2個if 
			}
		}
		if(flag==1){
		cout.width(5);//字元寬度5 
		cout<< i;
		k++;//k=k+1
		if(k%10==0)
		cout<<"\n";
		
	}
	
		
	}
	cout<<"\n Total prime number is"<< k;
	return 0;
	 
}

