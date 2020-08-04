// https://www.facebook.com/codingcompetitions/hacker-cup/2020/qualification-round/problems/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        string in, out;
        cin >> n >> in >> out;

        const int MAXARR = 50 + 5;
        bool arr[MAXARR][MAXARR] = {false};

        for (int i = 0; i < n; i++)
        {
            arr[i][i] = true;
            for (int j = i + 1; j < n; j++)
                if (in[j] == 'Y' && out[j - 1] == 'Y')
                    arr[i][j] = true;
                else
                    break;

            for (int j = i - 1; j >= 0; j--)
                if (in[j] == 'Y' && out[j + 1] == 'Y')
                    arr[i][j] = true;
                else
                    break;
        }

        cout << "Case #" << k + 1 << ":\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << (arr[i][j] ? "Y" : "N");
            cout << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();

    return 0;
}
