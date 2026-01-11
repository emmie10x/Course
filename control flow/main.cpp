#include<iostream>
using namespace std;

int main(){
    int budget;

    cout << "enter your budget:";
    
    cin >> budget;

    if(budget > 200000){
        cout << "You can afford a budget car" << endl;
    }

    return 0;
}