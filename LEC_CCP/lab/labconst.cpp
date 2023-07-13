#include <iostream>
using namespace std;
class Time {
private:
    int hr;
    int min;
    int sec;
    int seconds;

public:
Time(){
    hr=0;
    min=0;
    sec=0;
}
void Enter(){
    cout<<"enter time in seconds"<<endl;
    cin>>seconds;
}
void calcdata(){
    hr=seconds/3600;
    min=(seconds%3600)/60;
    sec=(seconds%3600)%60;
}
void converted(){
    cout<<hr<<"hr"<<min<<"mins"<<sec<<"secs"<<endl;
}
}; 
int main(){
    Time obj1;
    obj1.Enter();
    obj1.calcdata();
    obj1.converted();
    return 0;


}