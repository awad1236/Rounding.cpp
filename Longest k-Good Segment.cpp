#include <bits/stdc++.h>

#define ll long long
#define Mohamed cout<<"YES"<<endl;
#define Awad cout<<"NO"<<endl;
#define active_ctr int ctr=0;
#define test int t=0;cin>>t;while(t--)
#define Done return 0;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v, d) memset(v, d, sizeof(v))
#define endl "\n"
const int S = 1e6 + 5;
using namespace std;


vector<ll> prefix(int n , vector<int> a)
{

  ll sum=a[0];
  vector<ll>pre(n);
  pre[0]=a[0];
  for(int i=1;i<n;i++)
  {
    pre[i] =a[i]+sum;
    sum=pre[i];
  }
  return pre;
}


void down(string &s)
{
  transform(s.begin(),s.end(),s.begin(),:: tolower);
}

void up(string &s)
{
  transform(s.begin(),s.end(),s.begin(),::toupper);
}

string convert_to_binary(int Decimal_Number)
{
  string s;
  while(Decimal_Number)
  {
    if(Decimal_Number%2!=0)
    {
      s.push_back('1');
    }
    else
    {
      s.push_back('0');
    }
    Decimal_Number/=2;
  }
  reverse(s.begin(),s.end());
  return s;
}
int bitwise_xor(int NumberOne,int NumberTwo)
{
  return NumberOne^NumberTwo;
}
int binary(int n,int x,vector<int>a) {
  a.resize(S,0);
  int l = 0, r = n-1;
  int ans = -1;
  while (l <= r) //{1,2,3,4,5,6,7}
  {
    ll mid = (l + r) / 2;
    if (x == a[mid])
    {
      ans = mid;
      r=mid-1;
    }
    else if (a[mid] < x) {
      l = mid + 1;
    } else {

      r = mid - 1;
    }
  }
  a.clear();
  return ans;
}


bool can(ll mid ) {

}
int freq[S];
void solve() {
  int n, k; cin >> n >> k;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  pair<int, int> res;
  int l = 0, r = 0, mxLen = 1, cntDist = 0, cnt = 0;
  while(r < n){
    if(freq[a[r]] == 0) cntDist++;
    freq[a[r]]++;

    while(cntDist > k){
      freq[a[l]]--;
      if(freq[a[l]] == 0) cntDist--;
      l++;
      cnt++;
    }
    if(r - l + 1 > mxLen){
      mxLen = r - l + 1;
      res = {l, r};
    }
    r++;
    cnt++;
  }

  cout << res.first + 1 << " " << res.second + 1;

}

int main()
{
  fast
 
    solve();

  return 0;

}





