// Creating a BMI Calculator 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float weight, height,bmi;
    cout << "Weight (kg), height(m): ";
    cin >> weight >> height;
    bmi = weight/(height*height);
    if(bmi < 18.5)
    cout << "Underweight" << endl;
    else if(bmi > 25)
    cout <<"Overweight"<<endl;
    else
    cout << "Normal weight" << endl;
    cout << "Your BMI is " <<bmi;

    return 0;
}