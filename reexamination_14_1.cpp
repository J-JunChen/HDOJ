// 您的任务是编写一个小型的html浏览器。它只需要显示输入文件的内容，只知道html命令(标记)< br >，这是一个linebreak和< hr >，它是一个水平标尺。
// 然后，您应该将所有制表符、空格和换行符视为一个空格，并在一行中显示不超过80个字符的结果文本。输入输入由应该显示的文本组成。该文本由一个或多个空格、制表符或换行符分隔的单词和HTML标记组成。
// 单词是字母、数字和标点符号的序列。例如，“abc,123”是一个词，但是“abc,123”是两个单词，即“abc”和“123”。一个单词总是少于81个字符，并且不包含任何’ < ‘或’ > ‘。所有HTML标签都是< br >或< hr >。
// 输出您应该使用以下规则显示所产生的文本:如果你在输入中读了一个字，结果线的长度不会超过80个字符，打印出来，然后在新的一行上打印出来。如果您在输入中读取< br >，那么就开始一个新行。如果您在输入中读取< hr >，
// 那么就开始一条新行，除非您已经在一行的开头，显示80个字符“-”并开始一个新行(再次)。最后一行以换行符结束。（编写一个浏览器输入输出——对应杭电oj第1088题

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int count = 0;
    string str;
    while (getline(cin, str))
    {
        stringstream ss(str);
        string word;
        while (ss >> word)
        {
            // cout << count;
            if (word == "<br>")
            {
                cout << endl;
                count = 0;
                continue;
            }
            if (word == "<hr>")
            {
                if (count !=0 )
                    cout << endl;
                cout << "--------------------------------------------------------------------------------" << endl;
                
                count = 0;
                continue;
            }
            if (count == 0)
            {
                count = word.size();
                cout << word;
                continue;
            }
            if (count + word.size() + 1 > 80)
            {
                cout << endl;
                cout << word;
                count = word.size();
                continue;
            }
            count += (word.size() + 1);  //+1就是一个空格
            cout << " " << word;
        }
        
    }
    cout<<endl;
    return 0;
}