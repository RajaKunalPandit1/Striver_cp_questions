Output Status:

RESULT:  AcceptedRefer judge environment
Score

20

Time (sec)

1

Memory (KiB)

64

Language

C++17

#include <bits/stdc++.h>
#include <iostream>
#define endl "\n"
using namespace std;


int main(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 cout.tie(NULL);
	string name;
	getline(cin,name);

	unordered_map<char,int> m;
	
	int n = name.length();
	for(int i=0;i<n;i++){
		m[name[i]]++;
	}
	int max=0;
	char c;
	for(auto x:m){
		if(x.second>max || (x.second == max && x.first<c) ){
			max = x.second;
			c = x.first;
		}	
	}
	cout<< c << " " << max << endl;

return 0;
}

