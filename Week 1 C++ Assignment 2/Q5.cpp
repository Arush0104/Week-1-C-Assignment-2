#include <iostream>
using namespace std;
int main()
{
    char x;
    char y;
    int z;
    cout << "Enter a single character\n";
    cin >> x;
    cout << "Enter another single character\n";
    cin >> y;
    z = int(x - y);
    cout << z;
}
