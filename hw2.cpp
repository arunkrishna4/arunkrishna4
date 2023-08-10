#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int admno;
    string sname;
    float eng;
    float math;
    float science;

public:
    float ctotal() {
        return eng + math + science;
    }

    void Takedata() {
        cout << "Enter Admission Number: ";
        cin >> admno;

        cin.ignore(); 
        cout << "Enter Student Name: ";
        getline(cin, sname);

        cout << "Enter Marks in English: ";
        cin >> eng;

        cout << "Enter Marks in Math: ";
        cin >> math;

        cout << "Enter Marks in Science: ";
        cin >> science;
    }

    void Showdata() {
        cout << "Admno: " << admno << endl;
        cout << "Name: " << sname << endl;
        cout << "English: " << eng << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
        cout << "Total: " << ctotal() << endl;
    }
};

int main() {
    Student student1;
    student1.Takedata();
    student1.Showdata();

    return 0;
}