#include <bits/stdc++.h>
using namespace std;
#define gcd(a,b)          __gcd(a,b)
#define L                 length()
#define mkp(x,y)          make_pair(x,y)
#define int               long long
#define double            long double
#define ull               unsigned long long
#define vi                vector<int>
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define allr(v)           v.rbegin(),v.rend1()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define endl              "\n"
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define yy                cout<<"YES"<<endl
#define nn                cout<<"NO"<<endl
#define nores             cout<<"-1"<<endl
#define prec(x)           fixed<<setprecision(x)
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define reprev(i, a, b)   for (int i = (a); i >= (b); i--)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define vmin              *min_element
#define vmax              *max_element
#define ump               unordered_map
#define uns               unordered_set
#define deb(x)            cout << #x << "=" << x << endl
#define deb2(x, y)        cout << #x << "=" << x << "," << #y << "=" << y << endl
#define mid(l, r)         (l + (r - l) / 2)
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define print(x)          cout << x << endl
 
typedef vector<bool> vb;
typedef vector<pii> vpii;
typedef vector<vi> matrix;
typedef map<int, int> mpii;
typedef set<int> stii;
typedef priority_queue<int> maxpq;
typedef priority_queue<int, vi, greater<int>> minpq;
 
const long long INF=1e18;
const int32_t mod=1e9+7;
const int32_t MM=998244353;
const int N=0;
 
int power(int x, int y){   
    int res = 1;     
    while (y){     
        if (y % 2 == 1)
            res = (res * x);  
        y = y >> 1;         
        x = (x * x);
    }
    return res;
}
int modpower(int x, int y, int p){
    int res = 1; 
    x = x % p;  
    if (x == 0) return 0;
    while (y > 0){       
        if (y & 1)
            res = (res*x) % p; 
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
bool checksq(int num){
    return floor((double)sqrt(num)) == ceil((double)sqrt(num));    
}
bool ispoweroftwo(int n){
   if(n==0)
   return false; 
   return (ceil(log2(n)) == floor(log2(n)));
}
bool isprime(int n){   
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;  
    return true;
}
void sieve(int n){    
    bool prime[n + 1];
    memset(prime, true, sizeof(prime)); 
    for (int p = 2; p * p <= n; p++){        
        if (prime[p] == true){            
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
void ghost(){
    cout << "Apun Red Coder banega" << endl;
}