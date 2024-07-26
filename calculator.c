#include <iostream> 
#include <iomanip>
using namespace std; 

int main() { 
int x,y;
double answer;
char operation;
cout<<"Welcome, You are about to use the calculator \n";
cout<<"Begin by typing the first number \n";
cin>>x;
cout<<"Now, type the second number \n";
cin>>y;
cout<<"Now, enter if you want to add(A), subtract(S), divide(D) or multiply(M) \n";
cin>>operation;

if (operation == 'A' || operation == 'a') {
    answer = x + y;
}

else if (operation == 'S' || operation == 's') {
    answer = x-y;
}

else if (operation == 'D' || operation == 'd') {
    answer = x / y;
}

else if (operation == 'M' || operation == 'm') {
    answer = x * y; 
}

else {
    cout<<"Invalid input!!";
    return 0;
}

cout<<"The answer is " <<answer;
}
