#include <bits/stdc++.h>
using namespace std;

class AverageSizeZeroException{};
class AverageSizeNegativeException{};


int average(int arr[],int n){
	if(n==0){
		throw AverageSizeZeroException();

	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum/n;
}


int main(){
	int n;
	cin>>n;
	try{
	if(n<0){

	throw AverageSizeNegativeException();
}
	
	int * arr=new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	
	
		int res=average(arr,n);
		cout<<res<<endl;
	}
	catch(AverageSizeNegativeException &e2)
	{
		cout<<"Array Size is -ve"<<endl;
	}
	catch(AverageSizeZeroException &e1)
	{
		cout<<"Array Size is 0"<<endl;
	}
	
	cout<<"Bye"<<endl;


	return 0;
}