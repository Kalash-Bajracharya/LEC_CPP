#include<iostream>
using namespace std;
class A{
 
    int x ;
public:
    int getnum(int x){
        this->x=x;
    }
    void shownum(){
        cout<<"enter a num"<<x;
    }
};
int main(){
   A obj1, obj2;
   obj1.getnum(4);
   obj2.getnum(3);
   
   obj1.shownum();
   obj2.shownum();
   return 0;

}
