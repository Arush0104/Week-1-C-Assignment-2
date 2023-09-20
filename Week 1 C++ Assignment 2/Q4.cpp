#include <iostream>
using namespace std;
int main()
{
    float radius, height, pi, volume;
    pi = 3.1415;
    cout << "Enter the radius of cylinder\n";
    cin >> radius;
    cout << "Enter the height of cylinder\n";
    cin >> height;

    volume = height * pi * radius * radius;
    cout << volume;
}