#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main() {
    float x1,y2,x2,y1;
    cin>>x1>>y1;
    cin>>x2>>y2;
    float a=(x2-x1)*(x2-x1);
    float b=(y2-y1)*(y2-y1);
    float result=sqrt(a+b);

    cout<<"Distance: "<<fixed<<setprecision(2)<<result<<endl;



    return 0;
}
