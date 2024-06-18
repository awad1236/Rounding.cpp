/*2015 ACM Syrian Collegiate Programming Contest*/
/* problem l */


#include <bits/stdc++.h>
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define test int t=0;cin>>t;while(t--)
#define Done return 0;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v, d) memset(v, d, sizeof(v))
#define endl "\n"
#define pb push_back
#define int long long
using namespace std;
char MyChar;
int *ptr=NULL;
char *ptr2=NULL;
const int MAXN = 2e6+5;
int const S= 1e5 + 10;
vector<int>a;
bool isprime(int n)
{

    if (n <= 1)
        return false;


    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
int countSetBits( int n)
{
     int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
void getnums()
{
    for(int i = 0;i <=1e5;i++)
    {
        if (isprime(countSetBits(i))) {
            a.push_back(i);
        }
    }
}
void solve()
{
     int ctr=0;
int n,m; cin >> n >> m;
    int idxn=lower_bound(a.begin(),a.end(),n)-a.begin();
    int idxm=upper_bound(a.begin(),a.end(),m)-a.begin();
cout << idxm-idxn << endl;

}
int32_t main() {
    fast
    getnums();
  test
  {
        solve();
    }


Done
}
