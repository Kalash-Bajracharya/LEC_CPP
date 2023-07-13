#include <iostream>
using namespace std;
void display(){
    static int i=1;
    i=i+5;
    cout<<"the value of i is"<<i<<endl;
};
int main()
{
    display();
    display(); 
}