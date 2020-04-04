// 计算文章不同的单词书

#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int main()
{
    set<string> Set;
    string s1, s2;
    while (getline(cin, s1))
    {
        if (s1 == "#")
            break;
        istringstream istr(s1); //istringstream对象可以绑定一行字符串，然后以空格为分隔符把该行分隔开来。
        while (istr >> s2)
            Set.insert(s2);
        cout << Set.size() << endl;
        Set.clear();
    }
    return 0;
}