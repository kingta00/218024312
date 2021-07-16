#include <iostream>
using namespace std;
int main(){

    int number, reminder, revNumber = 0;
    cout<< "enter an integer" <<endl;
    cin>> number;

    while( number > 0){
        reminder = number % 10;
        cout<< reminder<<" "
        number = number / 10;

    }


}