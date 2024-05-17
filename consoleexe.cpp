#include <iostream>
using namespace std;
int main()
{
    cout << "Farenhrit: ";
    int farenheit;
    cin >> farenheit;
    double celsius = (farenheit -32) / 1.80;
    cout << celsius;

return 0;
}