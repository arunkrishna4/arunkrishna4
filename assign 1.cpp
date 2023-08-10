//design a class student containig get data and display data as two of its methods which will be used for reading and displaying the student info respectively where the get data method will be private
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string course;

    void get_data() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter student age: ";
        cin >> age;
        cin.ignore(); // Ignore newline character left in the buffer

        cout << "Enter student course: ";
        getline(cin, course);
    }

public:
    void display_data() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
        cout << "Student Course: " << course << endl;
    }

    void input_student_data() {
        get_data();
    }
};

int main() {
    Student student;

    student.input_student_data();
    cout << "\nStudent Information:\n";
    student.display_data();

    return 0;
}











//design a class demo which will contain the following methods read_number, factorial, reverse number, is pallindrome, amstrong where the read number will be the private method
#include <iostream>
#include <cmath>
using namespace std;

class NumberDemo {
private:
    int num;

    // Private method to read a number
    void read_number() {
        cout << "Enter a number: ";
        cin >> num;
    }

public:
    // Public method to calculate factorial
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1LL;
        } else {
            return static_cast<long long>(n) * factorial(n - 1);
        }
    }

    // Public method to reverse a number
    int reverse_number(int n) {
        int reversed = 0;
        while (n > 0) {
            reversed = reversed * 10 + n % 10;
            n /= 10;
        }
        return reversed;
    }

    // Public method to check for palindrome
    bool is_palindrome(int n) {
        return n == reverse_number(n);
    }

    // Public method to check for Armstrong number
    bool is_armstrong(int n) {
        int original = n;
        int digits = log10(n) + 1;
        int sum = 0;
        
        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, digits);
            n /= 10;
        }
        
        return sum == original;
    }

    // Public method to perform all operations
    void perform_operations() {
        read_number();
        cout << "Factorial: " << factorial(num) << endl;
        cout << "Reverse number: " << reverse_number(num) << endl;
        cout << "Is palindrome: " << (is_palindrome(num) ? "Yes" : "No") << endl;
        cout << "Is Armstrong: " << (is_armstrong(num) ? "Yes" : "No") << endl;
    }
};

int main() {
    NumberDemo demo;
    demo.perform_operations();

    return 0;
}



 //WAP to demonstrate fun defination outside the class and accessing the class members in a fun defination.
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    void setX(int val) {
        x = val;
    }
};

// Function definition outside the class
void printValue(MyClass obj) {
    
    cout << "Value of x inside the class: " << obj.x << endl;
}

int main() {
    MyClass myObj;
    myObj.setX(42);
    
    printValue(myObj); // Calling the function to print the value of x
    
    return 0;
}
