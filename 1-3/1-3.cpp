#include <iostream> 
#include <stdlib.h> //�ϥ�rand() 
#include <time.h> //�ϥ� time()
using namespace std;
int main() {
	int a,b;
	char *a1,*b1,*r;
	
	//�b�̤��s���w�q�@��char *�����ܶq�A���e���r�Ŧꡧa1�Bb1�Br�������a�}
//���O�r�Ŧꡧa1�Bb1�Br�������e�s�b��`�q�ϡA���e���i�ܡA
//�b�sĶ���ɭԴN�w�g�T�w���e�C�B��t�׺C�C
/*   
     �ɥR>> 
	 char *str="test";       //����
:    char str[] = "test";    //�}�C
:    ���� "test" �O const char[] ���@�ӱ`�ƭ�, �|�Q����Ū�ϰ�
*/   

	time_t t;    //�ݭn�ŧi#include <time.h>
	/*
   time()���

   �Ө�Ƨ@�άO����t�ήɶ��C

   ��@��Φ���

   time_t time(time_t *t)�F

   �䤤time_t�]�N�O���㫬long�A�w�q�Gtypedef long time_t�F
   */
   
	srand((unsigned)time(&t));//�H������üư_�I�A �Y���ϥΦ����O�A�C���üư_�I���ۦP 
	 /*
       C�w���void srand(unsigned int seed)
	    �ؤlrand��ƩҨϥΪ��H���Ƶo�;��C
	    void srand(unsigned int seed) >>srand()����n��
		seed -- �o�O�@�Ӿ�ƪ��ȳQ�Ψӧ@���ؤl�Ѱ��H���ƥͦ�����k
	*/
	
	cout<< "input 0(�ŤM) 1(���Y) 2(��) :";
	cin>>a;	 
	b=rand()%3;//���Ͳq���ü�(0�B1�B2)
	switch (a){
		case 0:
			a1="�ŤM";
			switch(b){
				case 0:
					b1="�ŤM";
					r ="����" ;
					break;					
				case 1:
					b1="���Y";
					r ="�q��Ĺ" ;
					break;
				case 2: 
					b1="��";
					r ="�AĹ"; 
					break;									
			}
			break;
		case 1:
			a1="���Y";
			switch(b){
				case 0:
					b1="�ŤM";
					r ="�AĹ" ;
					break;
				case 1:
					b1="���Y";
					r ="����" ;
					break;
				case 2: 
					b1="��";
					r ="�q��Ĺ";
					break; 			
			}
			break;
		case 2:
			a1="��";
			switch(b){
				case 0:
					b1="�ŤM";
					r ="�q��Ĺ"; 
					break;
				case 1:
					b1="���Y";
					r ="�AĹ"; 
					break;
				case 2: 
					b1="��";
					r ="����";
					break; 				
			}
			break;
 	}
 	cout<<"�A�X:"<<a<<a1<<", �q���X�G"<<b<<b1<<",  ���G�G"<<r;
	return 0;
}

