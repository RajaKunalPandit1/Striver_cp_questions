Output Status:
RESULT:  Accepted Refer judge environment
Score

20.0

 
Time (sec)

7.30999994278

 
Memory (KiB)

64

 
Language

C++17

#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){

	long long int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int max_sum = INT_MIN;
	long long int res=0,count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=0){
			res += arr[i];
			count++;
		}
		max_sum = max(max_sum,arr[i]);
	}
	if(res>0){
		cout<< res << " " << count <<endl;
	}else{
		cout<< max_sum << " " << "1" <<endl;
	}
	

return 0;	
}
