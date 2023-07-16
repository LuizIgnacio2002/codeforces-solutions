#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, c;
        cin >> n >> c;

        vector<int> orbitas;
        map<int, int> countMap;

        orbitas.clear();
        countMap.erase(countMap.begin(), countMap.end());
		int cosSin = 0;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            orbitas.push_back(a);
            countMap[a]++;
            cosSin++;
        }

        int costTotal = 0;
        int costC = 0;
		
        for (const auto& pair : countMap)
        {
            if (pair.second > 1)
            {
                costC = costC + c;
                
            }
            else if (pair.second == 1)
            {
                costTotal++;
            }
            
        }

        cout << min(costTotal + costC, cosSin) << endl;
    }

    return 0;
}

