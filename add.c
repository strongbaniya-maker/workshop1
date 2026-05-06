#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int roll;

    public:
    Student(){
        cout<<"enter name:";
        cin>>name;
        cout<<"roll";
        cin>>roll;
    }
    Student (Student &s1)

    {
        name = s1.name;
        roll = s1.roll;
    }
    void display(){
        cout<<"name:"<<name<<endl<<"roll:"<<roll;

    }
};

int main(){
    Student s2;
    Student s1(s2);
    s2.display();
    return 0;
}