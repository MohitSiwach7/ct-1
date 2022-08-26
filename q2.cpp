//Name-Mohit
 //Roll No--2010992007
 //Set-04
 //Q-2
 #include<bits/stdc++.h>
using namespace std;

int main() {

  int a;
  cin>>a;
  int arr[a];

  for(int i=0;i<a;i++){
    cin>>arr[i];
  }

if(a<=1){
    return false;
  }

  int min=*min_element(arr,arr+a);
  int max=*max_element(arr,arr+a);

  if(max-min==a-1){
    cout<<"The array contains consecutive integers "<<min<<" to "<<max;
  }

  map<int ,int> mp;

  for(int i=0;i<a;i++){
    mp[arr[i]]++;
  }
  for(auto it=mp.begin();it!=mp.end();it++){
    if(it->second>1){
      cout << "The array does not contain consecutive integers as element "<<it->first<<" is repeated";
        }
  }

  return 0;
}