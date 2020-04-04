// // 集合A - 集合B

// #include <iostream>

// using namespace std;

// int main(void)
// {
//     int n, m, i, j, num;
//     int data[200];
//     int res[100];
//     bool flag;
//     while (cin >> n >> m)
//     {
//         if (n != 0 || m != 0)
//         {
//             num = 0;
//             for (i = 0; i < n + m; i++)
//                 cin >> data[i];
//             for (i = 0; i < n; i++)
//             {
//                 flag = true;
//                 for (j = n ; j < n + m; j++)
//                 {
//                     if (data[i] == data[j])
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }
//                 if (flag)
//                     // cout<<data[i]<<(i<n-1? ' ': '\n');
//                     res[num++] = data[i];
//             }
//             if (num == 0)
//                 cout << "NULL" << endl;
//             else
//             {
//                 for (i = 0; i < num; i++)
//                     cout << res[i] << (i < num - 1 ? ' ' : '\n');
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <set> //set头文件

struct intComp //排序重载
{
    bool operator()(const int &right, const int &left) const
    {
        return right > left;
    }
};

using namespace std;
int main()
{
    int n, m, temp;
    // set<int,intComp> data; //运算符重载，由大到小排序
    set<int> data;
    set<int>::iterator it;
    while (cin >> n >> m)
    {
        if (n != 0 || m != 0)
        {
            while (n--)
            {
                cin >> temp;
                data.insert(temp);
            }

            while (m--)
            {
                cin >> temp;
                if (data.count(temp))
                    data.erase(temp); //count表示set中是否有temp这个数在内，及其数量
            }

            for (it = data.begin(); it != data.end(); it++) //set默认是从小到大排序
                cout << *it << " ";

            // cout << (data.size() ? "\n" : "NULL\n");
            printf(data.size()? "\n":"NULL\n");
            data.clear();
        }
    }

    return 0;
}
