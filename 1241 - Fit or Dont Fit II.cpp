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

    char a[1005],b[1005];
    int tc,l1,l2,d,i,j;

    sf ("%d",&tc);

    while (tc--)
    {
        sf ("%s %s",a,b);

        l1 = strlen(a), l2 = strlen(b);

        if (l2 > l1)
            pf ("nao encaixa\n");
        else
        {
            d = l1-l2;

            for (i=d,j=0; i<l1,j<l2; i++,j++)
            {
                if (a[i] != b[j])
                {
                    pf ("nao encaixa\n");
                    break;
                }
            }

            if (j == l2)
                pf ("encaixa\n");
        }
    }

    return 0;
}
