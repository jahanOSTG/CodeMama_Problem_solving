
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    float h,w;
    cin>>h>>w;
    float bmi=w/(h*h);

cout << "BMI: " << fixed << setprecision(2) << bmi << endl;
    if(bmi<18.5){
        cout<<"Underweight"<<endl;
    }else if(bmi >= 18.5 && bmi < 25.0){
        cout<<"Normal weight"<<endl;
    }else if(bmi >= 25.0 && bmi < 30.0){
        cout<<"Overweight"<<endl;
    }else{
        cout<<"Obese"<<endl;
    }


}
