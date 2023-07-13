#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void display(){
        cout<<"parent";
    }
};
class child:public Parent{
    void display(){
        cout<<"child";

    }
};
int main(){
    Parent*bptr;
    child c;
    bptr=&c;
    bptr->display();
    return 0;
}