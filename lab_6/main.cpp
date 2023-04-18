#include <iostream>
#include <cmath>
using namespace std;


double calculate(int n){

    if (n == 1) {
        return 1;
    }

    double sum = calculate(n-1);

    double term = pow(-1, n+1) / n;

    sum += term;

    return sum;
}

void calculate(){
    int n;
    cout<<"Enter a value for n: ";
    cin>>n;

    double result= calculate(n);
    cout<<"Result is: "<<result<<endl;
}



int main() {
    int n;
    cout<<"Enter a value for n: ";
    cin>>n;

    double result= calculate(n);
    cout<<"The result is : "<<result<<endl;

    calculate();

    return 0;
}
