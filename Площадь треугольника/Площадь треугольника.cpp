#include <iostream>
#include <vector>
using namespace std;
int main() {

    int footing, height, square;
    cout << "Enter the base of the triangle" << endl;
    cin >> footing;
    cout << "Enter the height of the triangle" << endl;
    cin >> height;

    if (height < 0)
    {
        cout << "The height must be a positive number" << endl;
    }

    square = (footing * height) / 2;
    cout << "The area of the triangle" << square << endl;
}