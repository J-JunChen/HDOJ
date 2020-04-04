// Max Sum in subsequence of the sequence

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, m,c;
    int *data;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        if(c++) printf("\n");
        cin >> m; //输入序列的长度
        data = new int[m];
        int min = 1, max = 1; //最大sum的序列下表最小和最大
        int sum = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> data[i];
            if (sum < sum + data[i])
                max = i + 1; //找出max的最大值
            sum += data[i];  //更新总和值
        }
        for (int i = 0; i < m; i++)
        {
            if (data[i] < 0)
                min++; //找出最小值
            else
                break;
        }
        int result = 0;
        for (int i = min - 1; i < max ; i++)
            result += data[i];
        cout << "Case " << j+1 << ":" << endl;
        cout << result << " " << min << " " << max << endl;
    }
    return 0;
}