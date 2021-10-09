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
 
 void solve()
 {
     ll n,m,x,s;
     cin>>n>>m>>x;
     vector<pair<ll,ll>>v;
     rep(i,0,n)
     {
       cin>>s;
       v.pb({s,i});
     }
     sort(ab(v));
     reverse(v.begin()+m,v.end());
     VC vn(m,0);VC vf(n);
     s=0;
     rep(i,0,n)
     {
         s=i%m;
         vn[s]+=v[i].first;
         vf[v[i].second]=s+1;

     }
     sort(ab(vn));
     if(vn[m-1]-vn[0]>x)
    {cout<<"NO"<<endl;
     return;}
     else{
    cout<<"YES"<<endl;
    rep(i,0,n)
    cout<<vf[i]<<" ";
    cout<<endl;
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
