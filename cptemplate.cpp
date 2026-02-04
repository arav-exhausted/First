#include<bits/stdc++.h>
using namespace std;


#define ll long long 
using ll = long long;
const ll M = 1e9+7;
#define pi (3.141592653589)

#define rep(i,a,b) for(ll i=a; i<b; i++)
#define rep0(i,b) for(ll i=0; i<b; i++)
#define rep1(i,b) for(ll i=1; i<=b; i++)
#define rrep(i,a,b) for(ll i=b-1; i>=a; i--)

#define yes cout<<"YES\n"
#define no cout<<"NO\n"

#define nl cout<<endl
#define sh(i) cout<<i<<endl
#define sh2(i,j) cout<<i<<" "<<j<<endl
#define sh3(i,j,k) cout<<i<<" "<<j<<" "<<k<<endl
#define sort(v) sort(v.begin(),v.end());
#define all(v) v.begin(),v.end()

#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b))) 
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max(d, max(c, max(a, b)))  

#define vl vector<ll>
using pll = pair<ll,ll>;
using mapl = map<ll,ll>;
using sl = set<ll>;
#define print(v) for(auto it:v)cout<<it<<" "

// Function for checking the number is prime or not
bool isPrime(ll num);
// gives a power b.
ll binpow(ll a, ll b);
//small functions
bool isPowerOfTwo(ll n);
bool isSquare(ll x);
ll ceil(ll x, ll y);

void solve(){
    ll n,k;
    cin>>n;
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    // solve();
}

//========================================================================
// Function for checking the number is prime or not
bool isPrime(ll num){
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (ll i = 5; i * i <= num; i += 6){
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
//=========================================================================
// gives a power b.
ll binpow(ll a, ll b){
    ll res = 1;
    while (b > 0){
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
//==========================================================================
//small functions
bool isPowerOfTwo(ll n){
    if (n <= 0)
        return false; 
    return (n & (n - 1)) == 0; 
}

bool isSquare(ll x){
    ll y = sqrt(x);
    return y * y == x;
}

ll ceil(ll x, ll y){
    return ((x + y - 1) / y);
}
//==========================================================================