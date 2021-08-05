Output Status:
Sub-Task	Task #	Result
(time)
1	0	AC
(0.000000)
Subtask Score: 50.00%	Result - AC
2	1	AC
(0.020000)
Subtask Score: 50.00%	Result - AC
Total Score = 100.00%




#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int l=0,r,n;
	    r=n=(int)s.size();
	    int z=0;
	    for(int i=0;i<n;i++)if(s[i]=='1'){l=i;break;}
	    for(int i=n-1;i>=0;i--)if(s[i]=='1'){r=i;break;}
	    
	    for(int i=l;i<=r;i++)
	    if(s[i]=='0')z++;
        
       if(z>0)
	    cout<<"NO\n";
	    else cout<<"YES\n";

	}
	
	return 0;
}

// Another Solution 

#include <bits/stdc++.h>
#define ll long long int 
#define endl '\n'


using namespace std;

int main() {

    ll tc;
    cin >> tc;
    while(tc--){
    string s ;
    cin >> s;

    vector<int>v(2);
    for(ll i=0;i<s.length();i++){
        v[s[i]-'0']++;
    }

ll c = 0;
ll ans= 0;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            c++;
        }else{
            ans = max(ans,c);
            c=0;
        }
    }
    ans = max(ans,c);

    //cout << ans <<endl;
    /*for(auto x : v)
    cout << x;*/

    if(v[1]==0){
        cout << "NO" <<endl;
        continue;
    }

    if(ans == v[1]){
        cout << "YES" <<endl;
    }else
    cout << "NO" <<endl;

    }

return 0;
}
