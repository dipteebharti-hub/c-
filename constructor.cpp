#include<iostream>
using namespace std;
class emp{
    int id;
    char name[30];
    float salary;
public:
     emp();
     void display();
};
emp::emp()
{
    cout<<"Enter the ID No.:";
    cin>>id;
    cout<<"Enter the Name:";
    cin>>name;
    cout<<"Enter the salary:";
    cin>>salary;
}
void emp::display()
{
    cout<<"\n Id No :"<<id ;
    cout<<"\n Name :"<<name;
    cout<<"\nsalary :"<<salary;
}
int main()
{
    emp e1;
    e1.display();
}
