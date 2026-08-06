// problem: best time to buy and sell stock
// logic: take profit and maxprofit and price then compare
// date: day 2

#include <iostream>
using namespace std;

int main()
{
    int prices[] = {2, 4, 3, 6, 1};
    int n = 5;
    int maxprofit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int profit = prices[j] - prices[i];
            if (profit > maxprofit)
            {
                maxprofit = profit;
            }
        }
    }
    cout << "maxprofit : " << maxprofit << endl;
    return 0;
}