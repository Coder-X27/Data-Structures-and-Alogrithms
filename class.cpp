#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    string email;
    Student(){
        string name="constructed\n";
        cout<<name;
    }
    void printDetails(){
        cout << "Name of student " <<name<<endl;
        cout << "Age of student " <<age<<endl;
        cout << "Email of student " <<email<<endl;
    }
    void putDetails(){
        cout << "Enter Name of student "<<endl;
        cin >> name;
        cout << "Enter Age of student "<<endl;
        cin >> age;
        cout << "Enter email of student "<<endl;
        cin >> email;
        cout<<"\n\n";
    }
    ~Student(){
        cout<<"Deconstructed";
    }
};

int main()
{

    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        s[i].putDetails();
        s[i].printDetails();
    }
    return 0;
}