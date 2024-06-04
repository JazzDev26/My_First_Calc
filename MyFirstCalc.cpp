#include <iostream>
#include <math.h>
#include <string>
using namespace std; 

class Calculator {
    private: 
        double a; 
        double b; 
        double c; 
        double d; 
    public: 
        Calculator(){
            a = 0.0; 
            b = 0.0; 
            c = 0.0; 
            d = 0.0; 
        }
        Calculator(double x, double y, double z, double z2){
            a = x; 
            b = y; 
            c = z; 
            d = z2; 
        }
        void setPower(double x, double y){ 
            a = pow(x, y);  
        }
        double getPower(){
            return a;  
        }
        void setSqrt(double x){
            b = sqrt(x); 
        }
        double getSqrt(){
            return b; 
        }
        void setMultiply(double x, double y, double z){
            c = x * y * z; 
        }
        double getMultiply(){
            return c; 
        }
        void setDivide(double x, double y){
            d = x/y; 
        }
        double getDivide(){
            return d; 
        }
}; 

int main(){
    Calculator calc; 
    double x, y, z; 

    cout << "Enter a number" << endl; 
    cin >> x; 
    cout << "Enter another number" << endl; 
    cin >> y; 
    cout << "Enter one more number" << endl; 
    cin >> z; 
    cout << endl;

    calc.setPower(x, y); 
    calc.setSqrt(x); 
    calc.setMultiply(x, y, z); 
    calc.setDivide(x, y); 

    cout << "Power function = " << calc.getPower() << endl;  
    cout << "Squareroot function = " << calc.getSqrt() << endl; 
    cout << "Multiply function = " << calc.getMultiply() << endl; 
    cout << "Divide function = " << calc.getDivide() << endl; 

    return 0; 
}
