// A==B

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    // map<char,int> dictionary;
    // dictionary.insert(pair<char,int>('A',1));
    // dictionary.insert(pair<char,int>('a',-1));
    // dictionary.insert(pair<char,int>('B',2));
    // dictionary.insert(pair<char,int>('b',-2));

    int n;
    char x;
    int y;
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            cin >> x >> y;
            // cout<< y + dictionary[x]<<endl;
            if (x < 97)
                cout << y + (x - 'A' + 1) << endl; // ASCII大写 A=65
            else
            {
                cout << y + ('a' - x - 1) << endl; //ASCII 小写 a=97
            }
        }
    }

    return 0;
}