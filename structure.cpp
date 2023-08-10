#include<iostream>
using namespace std;

struct{
    string name;
    int roll_no;
    string course;
}s;

int main(){
    cout<<"enter the name of the student";
    cin>>s.name;

    cout<<"Enter the roll number";
    cin>>s.roll_no;

    cout<<"ENter the course";
    cin>>s.course;

    cout<<s.name<<endl<<s.roll_no<<endl<<s.course;
}