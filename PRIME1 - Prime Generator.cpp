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


bool isPrime(int n){
    
    if(n == 1){
        return false;
    }
    if(n == 2 || n== 3){
        return true;
    }
    if(n%2 == 0 || n%3 == 0){
        return false;
    }
    
    for(int i=5;i*i<=n;i+=6){
        if(n%i == 0 || n%(i+2) == 0){
            return false;
        }
    }
    return true;
}


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    ll t;
    cin >>t;
    
    while(t--){
        
        ll m,n;
        cin >> m >> n;
        
        for(int i=m;i<=n;i++){
            if(isPrime(i)){
                cout<< i << " ";
            }
        }
        cout<< endl;
        
    }
    
    
	return 0;
}
