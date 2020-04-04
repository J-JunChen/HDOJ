// 绝对值大小排序，利用qsort函数进行重载，省去自己写排序算法

// #include <iostream>
// #include <stdlib.h>

// using namespace std;

// int compare(const void *a, const void *b)
// {
//     // return abs(*b) - abs(*a);
//     return (abs(*(int *)b) - abs(*(int *)a));
// }

// int main()
// {
//     int n, data[101];
//     while (cin >> n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cin >> data[i];
//         }
//         qsort(data, n, sizeof(int), compare); //关键qsort系统函数
//         for (int i = 0; i < n; i++)
//         {
//             if (i == n - 1)
//                 cout << data[i] << endl;
//             else
//             {
//                 cout << data[i] << " ";
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Compare(int a, int b)
{
    return abs(a) > abs(b);
}

int main()
{
    int n;
    int arr[100];
    while (scanf("%d", &n), n)
    {
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        sort(arr, arr + n, Compare);
        for (int i = 0; i < n; i++)
        {
            printf("%d%c", arr[i], (i < n - 1 ? ' ' : '\n'));
        }
    }

    return 0;
}