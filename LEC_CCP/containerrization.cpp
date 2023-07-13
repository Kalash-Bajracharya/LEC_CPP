#include<iostream>
using namespace std;
class A
{
    public:
    int Data;
    void getdata()
    {
        cout<<"enter the data";
        cin>>Data;

    }
    void showdata()
    {
        cout<<" so the value is"<<Data<<endl;
    }
};
class B
{
    public:
    A a;
    int b;
    void getdata()
    {
        A.getdata();
        cout<<"enter the value of b";
        cin>>b;
       
    }
    void showdata(){
         A.showdata();
    
        cout<<" so the value of b"<<b<<endl;

    }

};
int main()
{
    B b;
b.getdata();
b.showdata();
return 0;




}