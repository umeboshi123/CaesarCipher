#include <bits/stdc++.h>
#define rep(i,a,b) for(ll i=ll(a);i<ll(b);i++)
using ll=long long;
using namespace std;

int main(){
    string s;
    cin>>s;
    int sl=s.length();
    rep(i,1,26){
        rep(j,0,sl){
        char t=char((s[j]-'A'+i)%26+'A');
        cout<<t;
        }
        cout<<endl;
    }
}
