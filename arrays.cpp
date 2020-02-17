//SPOJ submission 22992682 (CPP)plaintext list.Status: AC, problem PP0502B, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 04 11 : 08 : 21.
#include <iostream>

using namespace std;

int main()
{
    int prob, n, k;
    cin >> prob;
    for (int i = 1; i <= prob; i++)
    {
        cin >> n;
        int taba[n];
        for (int j = 1; j <= n; j++)

        {
            cin >> k;
            taba[j - 1] = k;
        }
        for (int z = n; z >= 1; z--)
            cout << taba[z - 1] << " ";
        cout << endl;
    }
    return 0;
}
