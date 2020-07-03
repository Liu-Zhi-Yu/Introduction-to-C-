#include <iostream>
using namespace std;

struct Student {
    string name;
    int addressNum;
    int dayofBirth;
    double grade;
};
int main()
{
    Student student1 = Student();
    student1.name = "Aditya";
    student1.addressNum = 58479;
    student1.dayofBirth = 4;
    
    Student student2 = Student();
    student2.name = "Karthik";
    student2.addressNum = 58479;
    student2.dayofBirth = 4;
    
    cout << "What do you want " << student1.name << "'s grade to be?" << endl;
    cin >> student1.grade;
    
    cout << "What do you want " << student2.name << "'s grade to be?" << endl;
    cin >> student2.grade;
    
    if (student1.grade > student2.grade) {
        cout << student1.name << " has a higher grade than " << student2.name << endl;
    } else {
        cout << student2.name << " has a higher grade than " << student1.name << endl;
    }
}
