// 文件操作和结构体对象数组的处理问题，处理一个文件 student.txt，文件当中包括一组学生的信息，包括名字、学号、英语成绩、语文成绩、数学成绩、科学成绩
//姓名 学号 英语 语文 数学 科学
// 张三 20100601 78 89 62 75
// 李四 20100602 78 54 98 86
// 王五 20100603 78 69 85 75
// 从这个文件当中读入学生的信息，然后按照总成绩从高到低进行排序并输出学生信息。

// #include <fstream>
// ofstream         //文件写操作 内存写入存储设备
// ifstream         //文件读操作，存储设备读区到内存中
// fstream          //读写操作，对打开的文件可进行读写操作

#include <iostream>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#define MAXN 1000

using namespace std;

struct Student
{
    string name;
    string id;
    float english;
    float chinese;
    float math;
    float science;
    float sum = 0; //总分初始为0
};

bool Compare(Student x, Student y)
{
    return x.sum > y.sum;
}

int main_0()
{
    Student student[MAXN];
    string str, info[2];
    float score[4], sum;
    int j = 0;
    ifstream in("student.txt"); //读取文件
    if (!in.is_open())
    {
        cout << "Error opening file";
        exit(1);
    }
    while (!in.eof())
    {
        getline(in, str); //逐行读取，行之间用回车换行区分
        istringstream is(str);
        int i = 0;
        for (i = 0; i < 2; i++)
        {
            is >> info[i]; //stringstream既可以转 String 类型
        }
        for (sum = i = 0; i < 4; i++)
        {
            is >> score[i]; //stringstream也可以转 float 类型
            sum += score[i];
        }
        student[j].name = info[0];
        student[j].id = info[1];
        student[j].english = score[0];
        student[j].chinese = score[1];
        student[j].math = score[2];
        student[j].science = score[3];
        student[j].sum = sum;
        j++;
    }
    sort(student, student + j, Compare);
    for (int k = 0; k < j; k++)
    {
        cout << student[k].name << " " << student[k].id << " " << student[k].english << " " << student[k].chinese << " " << student[k].math << " " << student[k].science << endl;
    }
    return 0;
}

int main_1()
{
    ifstream in; //这是文件输入流in；而文件输出流就是ofstream out
    in.open("student.txt", ios::in); // ios::in表示打开文件用于输入（默认）；文件输出流为 out.open('student.txt',ios::out); out<<"information"<<endl;
    Student student[MAXN];  
    int i = 0;
    while (in >> student[i].name >> student[i].id >> student[i].english >> student[i].chinese >> student[i].math >> student[i].science)
    { //原来可以直接从数据流读入，不需要类型转换
        student[i].sum = student[i].english + student[i].chinese + student[i].math + student[i].science;
        i++;
    }
    sort(student, student + i, Compare);
    for (int k = 0; k < i; k++)
    {
        cout << student[k].name << " " << student[k].id << " " << student[k].english << " " << student[k].chinese << " " << student[k].math << " " << student[k].science << endl;
    }
    in.close(); //关闭文件流
    return 0;
}

int main(){
    ofstream out;
    // out.open("student.txt",ios::out); //直接覆盖
    out.open("student.txt",ios::app); //在文件尾添加数据
    out<<"hello world"<<endl;
    out.close();

    return 0;
}
