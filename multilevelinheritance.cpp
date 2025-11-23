#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"base display function"<<endl;
    }
};
class intermediate : public base{
 public:
 void show(){
    cout<<"intermediate show function"<<endl;
 }
};
class derived : public intermediate{
    public:
    void print(){
        cout<<"derived print function"<<endl;
    }
};

int main(){
    derived obj;
    obj.display();
    obj.show();
    obj.print();
    return 0;   

}
