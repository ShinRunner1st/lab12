// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int random;
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    random = rand() % 9;
    switch(random){
        case 0:
            cout << "You will get A in this 261102.";
            break;
        case 1:
            cout << "You will get B+ in this 261102.";
            break;
        case 2:
            cout << "You will get B in this 261102.";
            break;
        case 3:
            cout << "You will get C+ in this 261102.";
            break;
        case 4:
            cout << "You will get C in this 261102.";
            break;
        case 5:
            cout << "You will get D+ in this 261102.";
            break;
        case 6:
            cout << "You will get D in this 261102.";
            break;
        case 7:
            cout << "You will get F in this 261102.";
            break;
        case 8:
            cout << "You will get W in this 261102.";
            break;
        default:
            break;
    }
    return 0;
}