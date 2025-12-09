#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vec = {{1, 2}, {5, 6, 7, 8}, {9},  {9, 8, 11}};

    for (int i = 0; i < vec.size(); i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}