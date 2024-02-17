/**=============================================================
* @file             : Rounding
* @author           : Mohamed Awad
* @date             : 17 feb 2024
=============================================================*/




/* *********************** includes section Start ************************/
#include <bits/stdc++.h>
/* *********************** includes section End *************************/




/* *********************** Definition section Start ************************/
#define ll long long
#define Mohamed cout<<"YES"<<endl;
#define Awad cout<<"NO"<<endl;
#define c int ctr=0;
# define test int t=0;cin>>t;while(t--)
#define Done return 0;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
/* *********************** Definition section End ************************/





/* *********************** Sub_Program section Start ********************/

/* *********************** Sub_Program section END *********************/


int main()
{
  int n ;
  cin >> n ;
  if ((n%10) > 5)
  {
    cout<<n+(10-n%10);
  }
  else
  {
    cout<<n-n%10;
  }
  return 0;

}







