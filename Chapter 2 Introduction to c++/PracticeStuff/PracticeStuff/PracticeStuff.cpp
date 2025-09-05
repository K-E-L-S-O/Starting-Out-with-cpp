#include <iostream>
#include <iomanip> // input/output manipulators
using namespace std;

int main(){
    cout.fill('0');

    for (int hours = 0; hours < 24; hours++){
        for (int minutes = 0; minutes < 60; minutes++){
            for (int seconds = 0; seconds < 60; seconds++){
                cout << "\r" << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds;
            }
        }
    }
    {
        int x = 5;
    }
    cin.get();
    return 0;
}