#include <iostream>
#include <cstdlib>
#include <unistd.h>
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
}s[1000000];
int n,w,ww,cnt,flag,ans;
string str;
void admin(){
	while(true){
		cout<<"请输入你要干什么 1.查看成绩 2.个人信息 3.登出"<<endl;
		cin>>n;
		if(n==1){
			cout<<"你的成绩为:"<<s[ans].cj<<"分"<<endl;
			cout<<"评价:";
			if(s[ans].cj>=85){
				cout<<"优"<<endl;
			}
			else if(s[ans].cj>=75){
				cout<<"良"<<endl;
			}
			else if(s[ans].cj>=60){
				cout<<"及格"<<endl;
			}
			else{
				cout<<"不及格"<<endl;
			}
			//这是小学标准
			system("pause");
			system("cls");
		}
		else if(n==2){
			cout<<"找到学生:"<<str<<endl<<"名字:"<<str<<"性别:";
					if(s[ans].xb==1){
						cout<<"男"<<endl;
					}
					else if(s[ans].xb==2){
						cout<<"女"<<endl;
					}
					else{
						cout<<"其他"<<endl;
					}
					if(s[ans].xx==true){
						cout<<"正在休学"<<endl;
					}
					else{
						cout<<"不在休学"<<endl;
					}
		}
		else{
			cout<<"已经登出,一秒后回到主页"<<endl;
			sleep(1);
			system("cls");
			return;
		}
	}
}
void dl(){//登录
	cout<<"请输入你的名字:";
	cin>>str;
	cout<<"请输入你的年龄;";
	cin>>w;
	for(int i=1;i<=cnt;i++){
		if(str==s[i].name&&w==s[i].nl&&s[i].sc==false){
			cout<<"登录成功！3秒后跳转到主页"<<endl;
			sleep(3);
			system("cls");
			ans=i;
			admin();
		}
	}
	cout<<"未找到账号"<<endl;
	sleep(1);
	system("cls");
	return;
}
int main(){
	cout<<"欢迎使用学生管理系统-学生端"<<endl;
	sleep(1);
	system("cls");
	freopen("student.out","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
	 cin>>s[i].name>>s[i].xb>>s[i].nl>>s[i].cj>>s[i].xx>>s[i].tc>>s[i].sc;
	}
	freopen("CON","r",stdin);
	while(true){
		cout<<"请输入你要干什么"<<endl<<"1.登录"<<endl<<"2.退出"<<endl;
		cin.clear();
		cin>>ww;
		if(ww==1){
			dl();
		}
		else{
			cout<<"好的"<<endl;
			sleep(1);
			return 0;
		}
	}
}
