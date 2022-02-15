Output Status: 

SPOJ submission 29136169 (CPP14) plaintext list. Status: AC, problem TDPRIMES, contest SPOJ. By kunal42 (Raja Kunal Pandit), 2022-02-15 06:45:24.


#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;
 
 
int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    const ll n = 1e8;
    
    vector<char> isPrime(n+1,true);
    vector<int> prime;
    
    
    isPrime[0] = isPrime[1] = false;
    
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j= i*i;j<=n;j+=i){
                isPrime[j] =false;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
    
    
    for(int i=1;i<=prime.size();i+= 100){
        cout<< prime[i-1] << " ";
    }
    
    
	return 0;
}
 
