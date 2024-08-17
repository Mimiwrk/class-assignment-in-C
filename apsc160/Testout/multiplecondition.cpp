//https://stackoverflow.com/questions/57033615/why-adding-bracket-in-if-statements-with-multiple-and-or-gives-different-result
#include <iostream>

using namespace std;

int main()
{
    bool a = true;
    bool b = true;
    bool c = true;
    bool d = true;

    if (!a && b || c || d)
        cout << "run";
    else
        cout << "pass";

    return 0;
}