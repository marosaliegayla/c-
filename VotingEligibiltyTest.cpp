#include <iostream> 
#include <iomanip>
using namespace std; 

int main() { 
    int age;
    cout<<"Welcome to voting eligibility test \n";
    cout<<"Please enter your age \n";
    cin>>age;
    if (age >= 18) {
        cout<<"Youre eligible!";
    }
    else {
        cout<<"Youre too young!";
    }

}
