#include <iostream>
using namespace std;


void numbers (int num1 , int num2 , int &sum){
    sum= num1 +num2;
}


int main(){

    int number1 , number2 , sum;

    cout << "enter your numbers:  " << endl;
    cin >> number1 >> number2;

    numbers(number1,number2,sum);

    cout << "sum is :  " << sum << endl;


    cin.get();
    return 0;
}