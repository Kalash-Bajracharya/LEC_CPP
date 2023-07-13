#include<iostream>
using namespace std;
class mob{
    private:
    int m=10;
    public:
    void display(){
        cout<<"value of m is"<<m <<endl; 
        cout<<"value of waht is"<<this->m <<endl;
        cout<<"the address is"<<this <<endl;

    }

};
int main(){
    mob obj1, obj2;
    obj1.display();
    obj2.display();

 
}