#include<iostream>
using namespace std;
class base {
    public:
    void display(){
        cout<<"base dispaly function"<<endl;
    }
};
class derived1 : public base {
    public:
    void show(){
        cout<<"derived1 show function"<<endl;
    }
};
class derived2 : public base{
    public:
    void print(){
        cout<<"derived2 print function"<<endl;
    }
};
int main(){
    derived1 obj1;
    derived2 obj2;
    obj1.display();
    obj1.show();
    obj2.display();
    obj2.print();
}

