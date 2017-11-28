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
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int

int main (void)
{
    /*freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);*/
    string str;
    char ch;
    int len,i,k;
    bool x,y;

    while (cin >> ch >> str)
    {
        if (ch == '0' && str == "0")
            break;

        x = false;
        len = str.size();
        string a;

        for (i=0; i<len; i++)
        {
            if (str[i] == ch)
                continue;

            if (str[i] != '0')
                x = true;

            if (x)
                a += str[i];
        }

        len = a.size();
        k = 0;

        if (len == 0)
            a = "0";
        else
        {
            for (i=0; i<len; i++)
                if (a[i] == '0')
                    k++;

            if (k == len)
                a = "0";
        }

        cout << a << endl;
    }

    return 0;
}
