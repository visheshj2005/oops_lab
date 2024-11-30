#include <iostream>
using namespace std;
class Solution
{
public:
    int factorial(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
};
int main()
{
    Solution S;
    cout << S.factorial(5) << endl;
    return 0;
}
