#include <bits/stdc++.h>
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define test int t=0;cin>>t;while(t--)
#define Done return 0;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v, d) memset(v, d, sizeof(v))
//#define endl "\n"
#define pb push_back
#define int long long
using namespace std;
char MyChar;
int *ptr=NULL;
char *ptr2=NULL;
const int MAXN = 2e6+5;
int S=2*1e5+1;
void binarySearch() {
    char direction;
    int left = 0, right = 1e9;

    do {
        int mid = (left + right) / 2;
        cout << mid << endl;
        cin >> direction;

        if (direction == '<') {
            right = mid - 1;
        } else if (direction == '>') {
            left = mid + 1;
        } else {
            cout << "! " << mid << endl;
            return;
        }

    } while (true);
}
void solve() {
    binarySearch();
}

int32_t main() {
    fast
        solve();
Done
}
