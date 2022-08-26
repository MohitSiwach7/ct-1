/*
Name - Mohit
Roll.No. - 2010992007
Set - 04
Q1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	try{
		int a;
	cin>>a;
	vector<int> v(a);
	unordered_map<int,int> mp;
	bool Right=false;
	for(int i=0;i<a;i++){
		cin>>v[i];
		if(mp.count(v[i])){
			cout<<"The minimum index of the repeating element is ";
			cout<<mp[v[i]]<<endl;
			Right=true;
			break;
		}
		mp[v[i]]=i;
	}
	if(!Right){
		cout<<"Invalid Input\n";
	}
	}
	
	catch(...){
			cout<<"Error\n";	
	}
	return 0;
}