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

    int n,i;

    while (sf ("%d",&n) != EOF)
    {
        int a[n],b[n],c[n],d[n],k;
        char x[n],str[55];
        vector <string> v,ans;

        for (i=0; i<n; i++)
            sf ("%d %d=%d",&a[i],&b[i],&c[i]);

        for (i=0; i<n; i++)
        {
            sf ("%s %d %c",str,&d[i],&x[i]);
            v.pb(str);
        }

        for (i=0; i<n; i++)
        {
            k = d[i]-1;

            if (x[i] == '+' && (a[k] + b[k] != c[k]))
                ans.pb(v[i]);
            else if (x[i] == '-' && (a[k] - b[k] != c[k]))
                ans.pb(v[i]);
            else if (x[i] == '*' && (a[k] * b[k] != c[k]))
                ans.pb(v[i]);
            else if (x[i] == 'I')
            {
                if ((a[k] + b[k] == c[k]) || (a[k] - b[k] == c[k]) || (a[k] * b[k] == c[k]))
                    ans.pb(v[i]);
            }
        }

        if (ans.size() == 0)
            pf ("You Shall All Pass!\n");
        else if (ans.size() == n)
            pf ("None Shall Pass!\n");
        else
        {
            sort (ans.begin(),ans.end());
            k = ans.size();

            for (i=0; i<k; i++)
            {
                pf ("%s",ans[i].c_str());

                if (i == k-1)
                    pf ("\n");
                else
                    pf (" ");
            }
        }
    }

    return 0;
}
