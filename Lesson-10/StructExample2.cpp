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
    Student student1 = {"Aditya", 58479, 4, 60.5};
    Student student2 = {"Karthik", 58479, 4, 60.6};
    
    if (student1.grade > student2.grade) {
        cout << student1.name << " has a higher grade than " << student2.name << endl;
    } else {
        cout << student2.name << " has a higher grade than " << student1.name << endl;
    }
}
