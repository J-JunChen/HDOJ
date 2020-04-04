//  Bitset : 10进制换成二进制

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x; //十进制数x
    while (cin >> x)
    {
        vector<int> binary;
        while (x != 0)
        {
            binary.push_back(x % 2);
            x /= 2;
        }
        for (int i = binary.size() - 1; i >= 0; --i) //逆序输出
        {
            cout << binary[i];
        }
        cout << endl;
    }

    return 0;
}
