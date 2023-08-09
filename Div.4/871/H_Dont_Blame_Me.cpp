#include<bits/stdc++.h>

#define ull mi 
#define ll long long

using namespace std;

const int mod = 1e9 + 7;
 struct mi {
    int v;
    mi(){v=0;}
    mi(ll _v){v=int(-mod<=_v&&_v<mod?_v:_v%mod); if(v<0)v+=mod;}
    explicit operator int()const{return v;}
    friend bool operator==(const mi &a,const mi &b){return (a.v==b.v);}
    friend bool operator!=(const mi &a,const mi &b){return (a.v!=b.v);}
    friend bool operator<(const mi &a,const mi &b){return (a.v<b.v);}
    mi& operator+=(const mi &m){if((v+=m.v)>=mod)v-=mod; return *this;}
    mi& operator-=(const mi &m){if((v-=m.v)<0)v+=mod; return *this;}
    mi& operator*=(const mi &m){v=((ll)(v)*m.v)%mod; return *this;}
    mi& operator/=(const mi &m){return (*this)*=inv(m);}
    friend mi pow(mi a,ll e){mi r=1; for(;e;a*=a,e/=2)if(e&1)r*=a; return r;}
    friend mi inv(mi a){return pow(a,mod-2);}
    mi operator-()const{return mi(-v);}
    mi& operator++(){return (*this)+=1;}
    mi& operator--(){return (*this)-=1;}
    friend mi operator++(mi &a,int){mi t=a; ++a; return t;}
    friend mi operator--(mi &a,int){mi t=a; --a; return t;}
    friend mi operator+(mi a,const mi &b){return a+=b;}
    friend mi operator-(mi a,const mi &b){return a-=b;}
    friend mi operator*(mi a,const mi &b){return a*=b;}
    friend mi operator/(mi a,const mi &b){return a/=b;}
    friend istream& operator>>(istream &is,mi &m){ll _v; is >> _v; m=mi(_v); return is;}
    friend ostream& operator<<(ostream &os,const mi &m){os << m.v; return os;}
};

void Solution()
{
    int n,k;
    cin >> n >> k;

    vector<vector<ull>> dp(n, vector<ull>(64, 0));
    vector<int> A(n);

    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    dp[0][A[0]] = 1;

    for(int i = 1; i < n; i++) {
        for(int u = 0; u < 64; u++) {
            dp[i][u] = dp[i - 1][u];
        }

        dp[i][A[i]]++;

        for(int mask = 0; mask < 64; mask++) {
            dp[i][mask & A[i]] += dp[i - 1][mask];
        } 
    }
    
    ull ans = 0;

    for(int i = 0; i < 64; i++) {
        if(__builtin_popcount(i) == k) {
            ans += dp[n - 1][i];
        }
    }
    cout << ans << endl;

    return ;
}


int main()
{
    int T;
    cin >> T;
    while(T--) {
        Solution();
    }

    return 0;

}
