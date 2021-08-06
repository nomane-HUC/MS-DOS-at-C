#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std; 
int main(){
    double d,r,h,v;
    char y,name;
    cout<<"MS-DOS 2.0"<<endl;
    cout<<"==========="<<endl;
    cout<<"Welcome"<<endl;
    cout<<"shutdown or open ms-dos stsyem"<<endl;
    cout<<"choose Y/N"<<endl;
    cin>>y;
    cout<<endl;
    if (y=='y'||y=='Y'){
    	cout<<"Welcome to MS-DOS stsyem,user"<<endl;
    	cout<<"What is your name,user"<<endl;
    	cin>>name;
    	if(name=='admin'||name=='administor'){
    		cout<<"dear,adminisor.Welcome,back";
		}
		else if(name=='Guest'||name=='guest'){
			cout<<"welcome,Guest";
			}
			else{
			}
    }
    else if (y=='n'||y=='N'){
    	cout<<"It's will to shutdown.dear,user";
	}
	cout<<"by microsoft "<<endl<<"on Microsoft Windows";
	return 0;
}
