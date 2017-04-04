//
//  main.cpp
//  函数对象2
//
//  Created by 郭悟清 on 2017/4/4.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

class MyLess
{
public:
    bool operator()(const int &c1,const int &c2)
    {
        return (c1%10)<(c2%10);
    }
};
template <class T>
void Print(T first,T last)
{
    for(;first!=last;++first)
        cout<<*first<<",";
}
int main(int argc, const char * argv[]) {
    // insert code here...
    const int SIZE=5;
    int a[SIZE]={5,21,14,2,3};
    list<int> lst(a,a+SIZE);
    lst.sort(MyLess());
    Print(lst.begin(), lst.end());
    cout<<endl;
    lst.sort(greater<int>());
    Print(lst.begin(), lst.end());
    cout<<endl;
    return 0;
}
