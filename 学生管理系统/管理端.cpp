#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
using namespace std;
struct student{
	string name;
	int xb;//是男是女
	int nl;//年龄
	int cj;//成绩
	bool xx;//是否休学
	string tc;//特长
	bool sc=false;//是否已经被删除
}s[100000];
int cnt=1,n,w,q;
int qwq,flag,ans,awa=-1;//用于登录操作
string m,mm;//用于登录的密码
string yname,ymm,str;
void admin(){
	while(true){
		cout<<"请输入你要干什么?"<<endl<<"1.添加学生"<<endl<<"2.删除学生"<<endl<<"3.搜索学生"<<endl<<"4.登出"<<endl;
		cin>>n;
		if(n==1){
		cout<<"请输入他/她的名字:";
		cin>>s[cnt].name;
		cout<<"请输入他/她的性别"<<endl<<"1.男"<<endl<<"2.女"<<endl<<"3.其他"<<endl;
		cin>>s[cnt].xb;
		cout<<"请输入他/她的的年龄:";
		cin>>s[cnt].nl;
		cout<<"请输入他/她是否休学 "<<endl<<"1.是"<<endl<<"2.不是"<<endl;
		cin>>w;
		if(w==1){
			s[cnt].xx=true;//话说如果这样的话这孩子得多调皮啊（被打
		}
		else{
			s[cnt].xx=false;
		}
		cout<<"请输入他/她的特长:";
		cin>>s[cnt].tc;
		cout<<"请输入他/她的成绩:";
		cin>>s[cnt].cj;
    cout<<"添加完成"<<endl;
    sleep(3);
    system("cls");
		}
		else if(n==2){
			cout<<"请输入学生姓名:";
			cin>>str;
			cout<<"搜索中"<<endl;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name&&s[i].sc==false){
					cout<<"找到学生:"<<str<<endl<<"名字:"<<str<<"性别:";
					if(s[i].xb==1){
						cout<<"男"<<endl;
					}
					else if(s[i].xb==2){
						cout<<"女"<<endl;
					}
					else{
						cout<<"其他"<<endl;
					}
					if(s[i].xx==true){
						cout<<"正在休学"<<endl;
					}
					else{
						cout<<"不在休学"<<endl;
					}
				 cout<<"是否删除 1.删除 2.不删除"<<endl;
				 cin>>w;
				 if(w==1){
				 	cout<<"删除成功!"<<endl;
				 	s[i].sc=true;
				 }
				 else{
				 	cout<<"好的，继续"<<endl;
				 }
				}
			}
			cout<<"完成!"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==3){
			cout<<"请输入学生姓名:";
			cin>>str;
			cout<<"搜索中"<<endl;
			for(int i=1;i<=cnt;i++){
				if(str==s[i].name&&s[i].sc==false){
					cout<<"找到学生:"<<str<<endl<<"名字:"<<str<<"性别:";
					if(s[i].xb==1){
						cout<<"男"<<endl;
					}
					else if(s[i].xb==2){
						cout<<"女"<<endl;
					}
					else{
						cout<<"其他"<<endl;
					}
					if(s[i].xx==true){
						cout<<"正在休学"<<endl;
					}
					else{
						cout<<"不在休学"<<endl;
					}
				}
			}
			cout<<"完成!"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n==4){
			freopen("student.out","w",stdout);
			for(int i=1;i<=cnt;i++){
			cout<<" "<<s[i].name<<" "<<s[i].xb<<" "<<s[i].nl<<" "<<s[i].cj<<" "<<s[i].xx<<" "<<s[i].tc<<" "<<s[i].sc;
			}
			freopen("CON","w",stdout);
			cout<<"已经登出!请关闭窗口"<<endl;
			sleep(1);
			return;
		}
		else{
			cout<<"错误"<<endl;
		}
		}
	}
void td(){
	sleep(1);
	system("cls");
	cout<<"是否读入上次的学生的信息 1.读入 2.不读入"<<endl;
	cin>>n;
	if(n==1){
		cout<<"好的!"<<endl;
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
		cout<<"是否这样!这样可能导致信息丢失!"<<endl<<"1.我要这样"<<endl<<"2.我不这样"<<endl;
		cin>>w;
		if(w==1){
			cout<<"好的!"<<endl;
			sleep(1);
			system("cls");
			admin();
		}
		else{
			cout<<"为保证安全，已经登出"<<endl;
			return;
		}
	}
}
int main(){
	cout<<"欢迎使用学生成绩管理系统"<<endl;
	sleep(1);
	system("cls");
	while(true){
		cout<<"请输入要干什么"<<endl<<"1.登录"<<endl<<"2.注册(仅能有1账号)"<<endl<<"3.设置"<<endl<<"4.退出"<<endl;
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
				cout<<"欢迎管理员,自动登录!"<<endl;
				td();
			}
			else{
				cin>>awa;
				if(awa==-1){
				freopen("CON","r",stdin);
				freopen("CON","w",stdout);
				cout<<"无账号!"<<endl;
				return 0;
				}
				else{
						cin>>m;
						cin>>mm;
						freopen("CON","r",stdin);
						cout<<"请输入名字:";
						cin>>yname;
						cout<<"请输入密码:";
						cin>>ymm;
						if(ymm!=mm||yname!=m){
							cout<<"密码or用户名错误"<<endl;
			      }
			      else{
			      	cout<<"欢迎管理员"<<endl;
				      td();
						}
			  }
			}
		}
		else if(qwq==2){
		system("start 注册.exe");
		}
		else if(qwq==3){
			cout<<"请输入你要修改什么?"<<endl<<"1.自动登录(本次)"<<endl<<"2.点错了"<<endl;
			cin>>w;
			if(w==1){
				cout<<"修改完成!"<<endl;
				ans=1;
			}
			else{
				cout<<"好的"<<endl;
			}
		}
		else if(qwq==4){
			cout<<"感谢使用"<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
		}
		sleep(3);
		system("cls");
	}
}
