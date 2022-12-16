#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f first
#define ll long long
#define s second
#define nl   "\n"
#define rl(i,j,k) for(ll i=j;i<k;i++)
#define re(i,j,k) for(ll i=j;i<=k;i++)







const int N = 2e5+10;
constexpr ll INF = 2e18;
ll i,j,k,n,m,l,r,x,y,a,b,t,u;

//ll a[N];
void solve(){
           cin >> n;
      int a[10];
      a[0] = 1;
      for(int i=1; i<10; i++){
         a[i] = a[i-1]*i;
      }
       //cout << a[9] << " " << a[5]
      for(int i=1; i<=n; i++){
           int ans=0,d;
           int n = i;
           while(n>0){
             d = n%10;
             ans += a[d];
              //cout << ans;
             n = n/10;
           }
           if(ans == i) cout << ans <<" ";
      }
      
         
    return;
      }


signed main(){

  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif

   solve();

    return 0;
}




