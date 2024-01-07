#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string dna;
    cin >> dna;
    int n = dna.size();
    long unsigned int max = 0;
    vector<int> visited;
    for (int i = 0; i < n; i++)
    {
        if (dna[i] == dna[i + 1])
        {
            visited.push_back(dna[i]);
        }
        else if (dna[i] != dna[i + 1])
        {
            visited.shrink_to_fit();
            if (visited.size() > max)
            {
                max = visited.size();
            }
            visited = {};
        }
    }
    cout << max+1 << endl;
    return 0;
}
