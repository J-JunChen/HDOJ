// 有一个文件记录了学生期末考试的几门成绩和学号，求出这几门课程的平均分和总分（假设这个文件就叫做score.txt）
// 并按照总分排序，从高到低，如果成绩相同，就按照学号从小到大的顺序。（文件要求c语言的读写操作）

#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#define MAXN 1024

using namespace std;

struct Student
{
    int ID;         //学生的学号
    double Chinese; //语文成绩
    double Math;    //数学成绩
    double English; //英语成绩
    double Science; //科学成绩
    double sum = 0; //记录总分，文件不直接给出，而是需要通过程序处理
};

bool Compare(Student x, Student y)
{
    if (x.sum == y.sum) //总分相同时，按照学号从小到大排序
        return x.ID < y.ID;
    else //总分不想同时，则总分从高到低排序
        return x.sum > y.sum;
}

int main()
{
    ifstream in;
    in.open("score.txt", ios::in);
    Student student[MAXN];
    int i = 0;
    while (in >> student[i].ID >> student[i].Chinese >> student[i].Math >> student[i].English >> student[i].Science)
    {
        student[i].sum = student[i].Chinese + student[i].Math + student[i].English + student[i].Science;
        i++;
    }
    sort(student, student + i, Compare);
    cout << "ID---Sum---Chinese---Math---English---Science" << endl;
    for (int j = 0; j < i; j++)
    {
        cout << student[j].ID << " " << student[j].sum << " ";
        cout << student[j].Chinese << " " << student[j].Math << " ";
        cout << student[j].English << " " << student[j].Science << endl;
    }
    return 0;
}