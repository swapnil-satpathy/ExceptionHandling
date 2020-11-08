#include <bits/stdc++.h>
using namespace std;

int average(int arr[],int n) throw(string){
	if(n==0){
		throw string("Array size is zero");

	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum/n;
}


int main(){
	int arr[]={2,3,5};
	int n=0;
	try{
		int res=average(arr,n);
		cout<<res<<endl;
	}
	catch(string &e)
	{
		cout<<e<<endl;
	}
	cout<<"Bye"<<endl;


	return 0;
}