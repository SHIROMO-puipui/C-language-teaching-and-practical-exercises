#include <iostream>
#include <cctype> //�H�U���ϥΨ��
 
/*  ���        ��^�� 
    isalpha()	�p�G�޼ƬO�r���A�Ө禡��^�u
    tolower()	�p�G�޼ƬO�j�g�r���A�h��^��p�g�A�_�h��^�Ӥ޼�
*/ 

#include <sstream> 
/*
  strstream���P�ɥi�H�䴩C���檺��y����J��X�ާ@
  stringstream�h�O�qiostream(��J��X�y��)�M�Mstringstreambase�]c++�r��y�����^���ͦӨ�
  stringstream���غc�禡��Φp�U�G 
  stringstream::stringstream(string str);   
*/
using namespace std;
int main() {
	string s,tmp; //�ŧi�榡�Gstring �ܼƦW��;
	while(getline(cin,s)){   //getline(cin,s) >>Ū���o�@�� 
	/*
	  �]���^����J���O�@�Ӵ���šA�۷��t�_�@��A
	  �ҥHgetline()�|��o�ӪŦ�Ū��s�̭��h�A�A�̫��X����M�N�O�@�ӪŦ�C	
	  while(geline(cin,s))�o�ӻy�y������L�{�O�o�˪��G
      ���ե�getline()��ơAgetline()�Nistream cin�������eŪ���@��]�A��J���Ohello world)�A
      �O�s�istring s���A��getline()����^�ȴN�Ocin
      hello world�QŪ�Js�A����᪺�Ŧ�QŪ�Js�A���ݼлxeof��cin���L�Ī��A�Awhile()�P�_�����A�`���h�X�C
    */
      for(int i=0;i<=s.length();i++){ //�Ns���C�Ӧr�����X
    /*  string str="0123456789";
        cout < <"str.length()="<<str.length()<<endl;//���G��10
        length()�O�]���u��C�y�����ߺD�ӫO�d�U�Ӫ��Astring���̪�u��length()�A
		�ޤJSTL����A���F�ݮe�S�[�J�Fsize()�A���O�@��STL�e�����ݩʦs�b���A�K��ŦXSTL�����f�W�h�A
		�H�K�Ω�STL����k,string����length()��k��^���O�r�`�ơA���ެO�_���~�r�C
	*/
	if(isalpha(s[i])){ //ctype.h ����� isalpha() ���հѼƬO�_���r���A��������^�ǫD 0 ���� �C
    s[i]=tolower(s[i]);
    /* 
       �o�Ө�ƪ�^�p�g�۷��c�A�p�G�s�b���ȡA�_�hc�O�����ܡC��^�ȥi�H����char��int�ȡC
	   �n�����>> int tolower(int c);
	*/
	
	}else{
		s[i]=' ';//�_�h�אּ�ťզr�� 
		
	}
      	
	  }
	  stringstream ss(s); ////�غc�禡��l��
	  while(ss>>tmp){ //ss��J��tmp�A�Q�Ϊťզr���i��r����ΡA�C�p�q�r��tmp�i�H�g��cout��ܨ�ù� 
	  	cout<<tmp<<endl;
	  	
	  }
	}
}
