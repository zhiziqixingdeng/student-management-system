#include <iostream>
#include <unistd.h>
#include <cstdlib>
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
}s[100000];
int cnt=1,n,w,q;
int qwq,flag,ans,awa=-1;//���ڵ�¼����
string m,mm;//���ڵ�¼������
string yname,ymm,str;
void admin(){
	while(true){
		cout<<"��������Ҫ��ʲô?"<<endl<<"1.���ѧ��"<<endl<<"2.ɾ��ѧ��"<<endl<<"3.����ѧ��"<<endl<<"4.�ǳ�"<<endl;
		cin>>n;
		if(n==1){
		cout<<"��������/��������:";
		cin>>s[cnt].name;
		cout<<"��������/�����Ա�"<<endl<<"1.��"<<endl<<"2.Ů"<<endl<<"3.����"<<endl;
		cin>>s[cnt].xb;
		cout<<"��������/���ĵ�����:";
		cin>>s[cnt].nl;
		cout<<"��������/���Ƿ���ѧ "<<endl<<"1.��"<<endl<<"2.����"<<endl;
		cin>>w;
		if(w==1){
			s[cnt].xx=true;//��˵��������Ļ��⺢�ӵö��Ƥ��������
		}
		else{
			s[cnt].xx=false;
		}
		cout<<"��������/�����س�:";
		cin>>s[cnt].tc;
		cout<<"��������/���ĳɼ�:";
		cin>>s[cnt].cj;
    cout<<"������"<<endl;
    sleep(3);
    system("cls");
		}
		else if(n==2){
			cout<<"������ѧ������:";
			cin>>str;
			cout<<"������"<<endl;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name&&s[i].sc==false){
					cout<<"�ҵ�ѧ��:"<<str<<endl<<"����:"<<str<<"�Ա�:";
					if(s[i].xb==1){
						cout<<"��"<<endl;
					}
					else if(s[i].xb==2){
						cout<<"Ů"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
					if(s[i].xx==true){
						cout<<"������ѧ"<<endl;
					}
					else{
						cout<<"������ѧ"<<endl;
					}
				 cout<<"�Ƿ�ɾ�� 1.ɾ�� 2.��ɾ��"<<endl;
				 cin>>w;
				 if(w==1){
				 	cout<<"ɾ���ɹ�!"<<endl;
				 	s[i].sc=true;
				 }
				 else{
				 	cout<<"�õģ�����"<<endl;
				 }
				}
			}
			cout<<"���!"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==3){
			cout<<"������ѧ������:";
			cin>>str;
			cout<<"������"<<endl;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name&&s[i].sc==false){
					cout<<"�ҵ�ѧ��:"<<str<<endl<<"����:"<<str<<"�Ա�:";
					if(s[i].xb==1){
						cout<<"��"<<endl;
					}
					else if(s[i].xb==2){
						cout<<"Ů"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
					if(s[i].xx==true){
						cout<<"������ѧ"<<endl;
					}
					else{
						cout<<"������ѧ"<<endl;
					}
				}
			}
			cout<<"���!"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==4){
			freopen("student.out","w",stdout);
			for(int i=1;i<=cnt;i++){
			cout<<" "<<s[cnt].name<<" "<<s[cnt].xb<<" "<<s[cnt].nl<<" "<<s[cnt].cj<<" "<<s[cnt].xx<<" "<<s[cnt].tc<<" "<<s[cnt].sc;
			}
			freopen("CON","w",stdout);
			cout<<"�Ѿ��ǳ�!��رմ���"<<endl;
			sleep(1);
			return;
		}
		else{
			cout<<"����"<<endl;
		}
		}
	}
void td(){
	sleep(1);
	system("cls");
	cout<<"�Ƿ�����ϴε�ѧ������Ϣ 1.���� 2.������"<<endl;
	cin>>n;
	if(n==1){
		cout<<"�õ�!"<<endl;
		sleep(1);
		system("cls");
		freopen("student.out","r",stdin);
		cin>>cnt;
		for(int i=1;i<=cnt;i++){
			cin>>s[cnt].name>>s[cnt].xb>>s[cnt].nl>>s[cnt].cj>>s[cnt].xx>>s[cnt].tc>>s[cnt].sc;
		}
		cnt++;
		freopen("CON","r",stdin);
		admin();
	}
	else{
		cout<<"�Ƿ�����!�������ܵ�����Ϣ��ʧ!"<<endl<<"1.��Ҫ����"<<endl<<"2.�Ҳ�����"<<endl;
		cin>>w;
		if(w==1){
			cout<<"�õ�!"<<endl;
			sleep(1);
			system("cls");
			admin();
		}
		else{
			cout<<"Ϊ��֤��ȫ���Ѿ��ǳ�"<<endl;
			return;
		}
	}
}
int main(){
	cout<<"��ӭʹ��ѧ���ɼ�����ϵͳ"<<endl;
	sleep(1);
	system("cls");
	while(true){
		cout<<"������Ҫ��ʲô"<<endl<<"1.��¼"<<endl<<"2.ע��(������1�˺�)"<<endl<<"3.����"<<endl<<"4.�˳�"<<endl;
		cin>>qwq;
		if(qwq==1){
			if(ans==0){
				freopen("admin.out","r",stdin);
				cin>>flag;
			}
			else{
				flag=1;
			}
			if(flag==1){
				cout<<"��ӭ����Ա,�Զ���¼!"<<endl;
				td();
			}
			else{
				cin>>awa;
				if(awa==-1){
				freopen("CON","r",stdin);
				freopen("CON","w",stdout);
				cout<<"���˺�!"<<endl;
				return 0;
				}
				else{
						cin>>m;
						cin>>mm;
						freopen("CON","r",stdin);
						cout<<"����������:";
						cin>>yname;
						cout<<"����������:";
						cin>>ymm;
						if(ymm!=mm||yname!=m){
							cout<<"����or�û�������"<<endl;
			      }
			      else{
			      	cout<<"��ӭ����Ա"<<endl;
				      td();
						}
			  }
			}
		}
		else if(qwq==2){
		system("start ע��.exe");
		}
		else if(qwq==3){
			cout<<"��������Ҫ�޸�ʲô?"<<endl<<"1.�Զ���¼(����)"<<endl<<"2.�����"<<endl;
			cin>>w;
			if(w==1){
				cout<<"�޸����!"<<endl;
				ans=1;
			}
			else{
				cout<<"�õ�"<<endl;
			}
		}
		else if(qwq==4){
			cout<<"��лʹ��"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
		}
		sleep(3);
		system("cls");
	}
}
