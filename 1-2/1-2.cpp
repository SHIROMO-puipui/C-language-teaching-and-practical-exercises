#include <iostream>

using namespace std;

int main() {
	
	char a;
	cin >>a;  //cin����J�Acout����X
	 
	cout <<"a="<<a<<endl;
	char b; //�p�Gchar��int�b�̫��X��b�ȷ|��0 
	cin >>b;
	cout<<"b="<<b<<endl;
	char c[5]; // "c[5]" �@���}�C
	//char �r���`�� int ��Ʊ`�� 
	cin >>c;
	cout<<"c="<<c<<endl;
//	cin >>a>>b>>c; // �[�F�o��h���|�b�a1����J�Ȯɪ�����X���G
//�����N��⨺����Ѯ����ո� 
	cout <<"a="<<a<<endl;
	cout <<"b="<<b<<endl;
	cout <<"c="<<c<<endl;
	
	return 0;
}
