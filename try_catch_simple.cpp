#include <bits/stdc++.h>
using namespace std;



int main(){
	double x,y;
	cin>>x>>y;
	try{
		if(x==0.0)
			throw 0;
		if(y==0.0)
			throw string("Y is zero");
		if(x+y<0.0)
			throw(x+y);
	}
	catch(int e1){cout<<e1<<endl;}
	catch(string &e2){
		cout<<e2<<endl;
	}
	catch(...){
		cout<<"x+y is less than 0.0"<<endl;
	}
	cout<<"Bye!!!"<<endl;
	return 0;
}