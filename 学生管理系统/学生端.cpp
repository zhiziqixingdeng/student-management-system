#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
using namespace std;
struct student{
	string name;
	int xb;//������Ů
	int nl;//����
	int cj;//�ɼ�
	bool xx;//�Ƿ���ѧ
	string tc;//�س�
	bool sc=false;//�Ƿ��Ѿ���ɾ��
}s[1000000];
int n,w,ww,cnt,flag,ans;
string str;
void admin(){
	while(true){
		cout<<"��������Ҫ��ʲô 1.�鿴�ɼ� 2.������Ϣ 3.�ǳ�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��ĳɼ�Ϊ:"<<s[ans].cj<<"��"<<endl;
			cout<<"����:";
			if(s[ans].cj>=85){
				cout<<"��"<<endl;
			}
			else if(s[ans].cj>=75){
				cout<<"��"<<endl;
			}
			else if(s[ans].cj>=60){
				cout<<"����"<<endl;
			}
			else{
				cout<<"������"<<endl;
			}
			//����Сѧ��׼
			system("pause");
			system("cls");
		}
		else if(n==2){
			cout<<"�ҵ�ѧ��:"<<str<<endl<<"����:"<<str<<"�Ա�:";
					if(s[ans].xb==1){
						cout<<"��"<<endl;
					}
					else if(s[ans].xb==2){
						cout<<"Ů"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
					if(s[ans].xx==true){
						cout<<"������ѧ"<<endl;
					}
					else{
						cout<<"������ѧ"<<endl;
					}
		}
		else{
			cout<<"�Ѿ��ǳ�,һ���ص���ҳ"<<endl;
			sleep(1);
			system("cls");
			return;
		}
	}
}
void dl(){//��¼
	cout<<"�������������:";
	cin>>str;
	cout<<"�������������;";
	cin>>w;
	for(int i=1;i<=cnt;i++){
		if(str==s[i].name&&w==s[i].nl&&s[i].sc==false){
			cout<<"��¼�ɹ���3�����ת����ҳ"<<endl;
			sleep(3);
			system("cls");
			ans=i;
			admin();
		}
	}
	cout<<"δ�ҵ��˺�"<<endl;
	sleep(1);
	system("cls");
	return;
}
int main(){
	cout<<"��ӭʹ��ѧ������ϵͳ-ѧ����"<<endl;
	sleep(1);
	system("cls");
	freopen("student.out","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
	 cin>>s[cnt].name>>s[cnt].xb>>s[cnt].nl>>s[cnt].cj>>s[cnt].xx>>s[cnt].tc>>s[cnt].sc;
	}
	freopen("CON","r",stdin);
	while(true){
		cout<<"��������Ҫ��ʲô"<<endl<<"1.��¼"<<endl<<"2.�˳�"<<endl;
		cin.clear();
		cin>>ww;
		if(ww==1){
			dl();
		}
		else{
			cout<<"�õ�"<<endl;
			sleep(1);
			return 0;
		}
	}
}
