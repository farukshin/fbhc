// https://www.facebook.com/codingcompetitions/hacker-cup/2020/qualification-round/problems/B
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        string s;
        cin >> n >> s;
        int countB = 0, countA = 0, maxRep = 0, curRep = 0;
        char pre = ' ';

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                countB++;
            if (s[i] == 'A')
                countA++;

            if (pre != s[i])
            {
                if (curRep > maxRep)
                    maxRep = curRep;
                curRep = 0;
            }
            else
                curRep++;

            pre = s[i];
        };

        bool ans = abs(countA - countB) == 1 && maxRep <= 3;
        cout << "Case #" << k << ": " << (ans ? 'Y' : 'N') << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();

    return 0;
}
