#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << "Name = ";
        cout << name <<endl;
        cout << "Age = ";
        cout<<age<<endl;
        cout << "Gender = ";
        cout <<gender<<endl;
    }
};

int main()
{
    student a[3];
    cout << "Enter no of student data to store" << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << "Name = " << endl;
        cin >> a[i].name;
        cout << "Age = ";
        cin >> a[i].age;
        cout<<"Gender (0=male,1=female) :";
        cin >> a[i].gender;
    }

    for(int i = 0; i < 3; i++)
    {
        a[i].printInfo();
    }
    return 0;
}


