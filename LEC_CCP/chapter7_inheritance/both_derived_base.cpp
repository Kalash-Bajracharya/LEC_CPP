#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"default constructor from base class"<<endl;
    }
};
class derived:public base
{
public:
    derived(/* args */){
        cout<<"default constru from deroved"<<endl;
    }
    
};

int main(){
    derived d;
}


