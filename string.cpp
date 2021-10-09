#include <bits/stdc++.h>

  
#define   ll         long long
#define   ull        unsigned long long
#define   lscn(x)    scanf("%lld",&x)
#define   lpri(x)    printf("%lld",&x)
#define   rep(i,x,n) for(ll i=x;i<n;i++)
#define   rev(i,n)   for(i=n-1;i>=0;i--)
#define   VC         vector<ll>
#define   MP         map<ll,ll>
#define   pb         push_back
#define   mp         make_pair
#define   gcd        __gcd
#define   tc(t)      cin>>t;while(t--)
#define   endl       "\n"
#define   lb         lower_bound
#define   ub         upper_bound
#define   ab(a)      a.begin(),a.end()
#define   fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   srt(v)     sort(v.begin(),v.end())
#define   revsrt(v)  reverse(v.begin(),v.end())
#define   inp(a,n)   rep(i,0,n)cin>>a[i]
#define   arr(a,n)   ll n;cin>>n;ll a[n];inp(a,n);
#define   con5       100001 
using namespace std;
 //::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
 void solve()
 {
     arr(a,n);

    string s(200, 'a');
    cout << s << endl;

   rep(i,0,n)
   {
       if(s[a[i]]=='a')
       s[a[i]]='n';
       else
       s[a[i]]='a';
       cout << s << endl;
   }

 }

int main()
 {
     ll t,kk;
     kk=1;
     if(kk==1){
     tc(t)
     {
         solve();
     }}
     else solve();
 }
