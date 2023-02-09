#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int times;
	cout<<"--CONVERT BINARY NUMBER to IP ADDRESS--"<<"\n";
	cout<<"*the binary number should contain 32 digits*"<<"\n";
	cout<<"Enter how many times you want to convert BINARY NUMBER to IP ADDRESS: "; 
	cin>>times;
	for(int z =0; z<times; z++){
		cout<<"Enter the BINARY NUMBER: ";
		long long int num , temp;
		string binum;
		cin>>binum;
		int arr[32];
	
		int jjj = 31;
		for(int i = 0; i<32; i++){
		
			arr[jjj] = binum[i]-'0';
			jjj--;
		
		}
	
		int sum = 0, j =7;
		cout<<"The IP ADDRESS is: ";
		for(int i = 31; i>=0; i--){
			sum = sum + (pow(2,j)*arr[i]);
			j--;
			if(i==0){
				cout<<sum;
				break;
			}
		
			if(j==-1){
			cout<<sum<<".";
			j = 7;
			sum = 0;
			}	
		}
	cout<<"\n";
	}
	return 0;
}
