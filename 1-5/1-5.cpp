#include <iostream>
using namespace std;

int main() {
	int i,j,k=0;
	int flag=1;
	cout<<"prime number between 2 to 1000\n";//   \n������ 
	for(i=2; i<=1000; i++){//i++>>i=i+1  //�̥~�h�j�� 
		flag=1;           
		for(j=2; j<i-1; j++) { //��2�h�j�� //�j�餤��if�����~���X2�h�j�� 
			if(i%j==0){
				flag=0;
			break; //���X�j�餣�����2��if 
			}
		}
		if(flag==1){
		cout.width(5);//�r���e��5 
		cout<< i;
		k++;//k=k+1
		if(k%10==0)
		cout<<"\n";
		
	}
	
		
	}
	cout<<"\n Total prime number is"<< k;
	return 0;
	 
}
