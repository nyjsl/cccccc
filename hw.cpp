#include <iostream>
#include <cmath>
#include "variables.cpp"
using namespace std; // 函数头使用using编译指令

void simon(int); //function prototype for simon()

int main(){


    // using namespace std;
    cout << "come up and C++ me some time";
    cout << endl;
    cout << "you wont regret it" << endl;


    // int carrots;
    // cout << "How many carrots do you have?" <<endl;
    // cin >> carrots;
    // cout << "here are tow more";
    // carrots += 2;
    // cout << "Now you have " << carrots << " carrots." << endl;

    double side = 3;

    cout << sqrt(side) << endl;
    
    simon(1);

    // testIntegers();
    
    // testVariable();

    // testArray();

    testString();

    out_truct ot = {
        13,
        "Jen"
    };

    cout << ot.name << endl;

    return 0;
}


void simon(int n){
    // using namespace std;
    cout << "i m simon" << endl;    
}
