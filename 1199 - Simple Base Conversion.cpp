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
#define u unsigned int

long long power (long long n, long long p)
{
    long long res = 1;

    while (p--)
        res *= n;

    return res;
}

int main (void)
{
    string str,hexa;
    long long len,i,val,deci,p,l,rem;

    while (cin >> str)
    {
        if (str[0] == '-')
            break;

        len = str.length();
        hexa = "";
        deci = 0;

        if (str[0] == '0' && str[1] == 'x')
        {
            l = len-3;

            for (i=2; i<len; i++)
            {
                if (isalpha(str[i]))
                {
                    if (isupper(str[i]))
                        val = str[i] - 55;
                    else
                        val = str[i] - 87;
                }
                else
                    val = str[i] - '0';

                p = power (16,l--);
                deci += val * p;
            }

            cout << deci << endl;
        }
        else
        {
            l = len-1;

            for (i=0; i<len; i++)
            {
                val = str[i] - '0';
                deci += val * power (10,l--);
            }

            while (deci != 0)
            {
                rem = deci % 16;

                if (rem == 10)
                    hexa += "A";
                else if (rem == 11)
                    hexa += "B";
                else if (rem == 12)
                    hexa += "C";
                else if (rem == 13)
                    hexa += "D";
                else if (rem == 14)
                    hexa += "E";
                else if (rem == 15)
                    hexa += "F";
                else
                    hexa += to_string(rem);

                deci /= 16;
            }

            reverse (hexa.begin(),hexa.end());

            cout << "0x"+hexa << endl;
        }
    }

    return 0;
}
