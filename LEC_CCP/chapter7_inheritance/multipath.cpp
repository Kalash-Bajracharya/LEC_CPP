#include<iostream>
using namespace std;
class student{
    protected:
    int studID;
    char name[25];
    public:
    void getstdata(){
        cout<<"\nEnter student id:";
        cin>>studID;
        cout<<"\nname:";
        cin>>name;
    }
    void showstdata(){
        cout<<"\nstudent id:"<<studID;
        cout<<"name:"<<name;
    }
}; 
class InternalExam:virtual public student{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata(){
        cout<<"enter ionternal marks";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata(){
        cout<<"\ninternal marks 1;"<<marks1;
        cout<<"\ninternal marks2:"<<marks2;
        cout<<"\n ineternal marks3:"<<marks3;
    }
    int totalInternalMarks(){
        return (marks1+marks2+marks3);
    }    
};
class ExternalExam:virtual public student{
    protected:
    int marks1,marks2,marks3;
    public:
    void getdata(){
        cout<<"eneter external marks 3";
        cin>>marks1>>marks2>>marks3;
    }
    void showdata()
    {
        cout<<"\n external1:"<<marks1;
        cout<<"\nexternla 2;"<<marks2;
        cout<<"\nexternal 3: "<<marks3;
    }
    int totExternalMarks(){return(marks1,marks2,marks3);}
};
class result:public InternalExam,public ExternalExam{
    public:
    void getdata(){
        InternalExam::getdata();
        ExternalExam::getdata();
    }
    void showdata(){
        InternalExam::showdata();
        ExternalExam::showdata();

    }
    int Total(){
        return(totalInternalMarks()+totExternalMarks());
    }
};
int main(){
    result r;
    cout<<"enter data"<<endl;
    r.getstdata();
    cout<<"\nenter marks"<<endl;
    r.getdata();
    cout<<"\ndata is"<<endl;
    r.showdata();
    cout<<"total "<<r.Total();
    return 0;

}