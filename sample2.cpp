#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n>>m ;
	/*vector<int >arr(n);
	for(int i= 0; i<arr.size();i++){
		cin>>arr[i];
	}
	int m = find(arr.begin(),arr.end(),2)-arr.begin();
	cout<<m<<"\n";
	if(find(arr.begin(),arr.end(),2)!= arr.end())
	{
		cout<<"yes";
	}
	else
		cout<<"No";*/

/*

    //********* 2D vector **********  //


	vector<vector<int>>mat(n,vector<int>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	vector<vector<int>>mat2(n,vector<int>(m,0));
	for(int i= 0;i<n;i++){
		for(int j =0 ;j<m;j++){
			cin>>mat2[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<mat[i][j]+mat2[i][j]<<" ";
		}
		cout<<"\n";

	}

*/

	// map ---> dictionary which contain key and value

	string s = "abcfhewewdubcjnvnscbna";
	map<char,int>dic;
	    //first method
	for(int i = 0 ; i<s.size(); i++){
		dic[s[i]]++;
	}
	    //second method
	/*for(auto x:s){
		dic[x]++;
	}*/
	for (auto z:dic){
		cout<<z.first << " "<< z.second<<"\n";
	}


}