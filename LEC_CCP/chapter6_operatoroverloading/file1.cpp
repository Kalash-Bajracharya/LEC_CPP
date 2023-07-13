#include<iostream>
using namespace std;
class A{
    private:
    int a, b ,c;
    public:
   A (int x, int y, int z)
    {

    a=x;
    b=y;
    c=z;
    };
    void operator -(){
        a=-a;
        b=-b;
        c=-c;

    }
    void getData()
    {
    cout<<" a b c"<<a <<b <<c<<endl;
    }

};
int main(){
    A A1(20,30,40);
    A1.getData();
    return 0;


}




