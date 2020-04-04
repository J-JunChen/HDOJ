// //数列有序!

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m; //n为原有数列长度，m为需要插入的整数
//     while (cin >> n >> m)
//     {
//         if (n != 0 || m != 0)
//         {
//             int data[n + 1];
//             int temp;
//             for (int i = 0; i < n; i++)
//             {
//                 cin >> data[i];
//                        }
//             for (int i = 0; i < n + 1; i++)
//             {
//                 if(data[i]>m){
//                     int j;
//                     for(j = n;j>i;j--){
//                         data[j] = data[j-1];
//                     }
//                     data[j] = m;
//                     break;
//                 }
//             }
//             for (int i = 0; i < n + 1; i++)
//             {
//                 if(i == 0)
//                     cout<<data[i];
//                 else
//                 {
//                     cout<<" "<<data[i];
//                 }
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Compare(int a, int b) //降序
{
    return a > b;
}

int main()
{
    int n, m;
    int arr[128];
    while (scanf("%d%d", &n, &m) != EOF)
    {
        if (n == 0 && m == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        arr[n] = m;
        sort(arr, arr + n + 1, Compare);
        for (int i = 0; i < n + 1; i++)
        {
            printf("%d%c", arr[i], (i < n ? ' ' : '\n'));
        }
    }

    return 0;
}