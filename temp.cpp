#include <iostream>
using namespace std;

int main() {

    string a, b;

    cin >> a >> b;

   
    bool side1 = (a=="AB" || a=="BA" || a=="BC" || a=="CB" ||
                  a=="CD" || a=="DC" || a=="DE" || a=="ED" ||
                  a=="EA" || a=="AE");

    bool side2 = (b=="AB" || b=="BA" || b=="BC" || b=="CB" ||
                  b=="CD" || b=="DC" || b=="DE" || b=="ED" ||
                  b=="EA" || b=="AE");


    bool diag1 = (a=="AC" || a=="CA" || a=="AD" || a=="DA" ||
                  a=="BD" || a=="DB" || a=="BE" || a=="EB" ||
                  a=="CE" || a=="EC");

    bool diag2 = (b=="AC" || b=="CA" || b=="AD" || b=="DA" ||
                  b=="BD" || b=="DB" || b=="BE" || b=="EB" ||
                  b=="CE" || b=="EC");

    if ((side1 && side2) || (diag1 && diag2)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}