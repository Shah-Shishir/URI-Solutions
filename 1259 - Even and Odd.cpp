/***

            Bismillahir Rahmanir Rahim
            Read the name of Allah, who created you!!!
            Author : Shah Newaj Rabbi Shishir
            Department of CSE, City University, Bangladesh.

***/

#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int main (void)
{
    /*
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    */

    int tc,n,len,i;

    while (sf ("%d",&tc) != EOF)
    {
        vector <int> even,odd;

        while (tc--)
        {
            sf ("%d",&n);

            if (n & 1)
                odd.pb(n);
            else
                even.pb(n);
        }

        sort (even.begin(),even.end());
        sort (odd.begin(),odd.end());

        len = even.size();

        for (i=0; i<len; ++i)
            pf ("%d\n",even[i]);

        len = odd.size();

        for (i=len-1; i>=0; i--)
            pf ("%d\n",odd[i]);
    }

    return 0;
}
