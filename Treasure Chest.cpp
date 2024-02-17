/**=============================================================
* @file             : Treasure Chest
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
  test
  {
    int x, y=0, k;
    cin >>x>>y>>k;
    if(x>y)
    {
      cout<<x<<endl;
    }
    else
    {
      if(y-x>k)
      {
        cout<<x+k+2*(-x+y-k)<<endl;
      }
      else
      {
        cout<<y<<endl;
      }
    }

  }
}







