#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        exit(0);
    }

    if (n == 3 || n == 2)
    {
        cout << "NO SOLUTION";
        exit(0);
    }

    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        exit(0);
    }

    for (int i = 1; i <= n; i += 2)
        cout << i << " ";

    for (int i = 2; i <= n; i += 2)
        cout << i << " ";

    return 0;
}