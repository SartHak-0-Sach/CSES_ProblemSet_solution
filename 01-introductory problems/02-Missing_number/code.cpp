#include <iostream>
#include <vector>
using namespace std;
#define long long int

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<int> visited(n);
    for (int i = 0; i < n - 1; i++)
    {
        int temp = 0;
        cin >> temp;
        visited[temp]++;
    }
    int temp = n;
    for (int i = 1; i < visited.size(); i++)
    {
        if (visited[i] == 0)
        {
            temp = i;
            break;
        }
    }
    cout<< temp <<endl;
    return 0;
}