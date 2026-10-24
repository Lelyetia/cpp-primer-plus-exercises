// numstr.cpp -- following number input with line input 
#include <iostream>
int main()
{
    using namespace std;
    cout << "What  year was your house built?\n";
    int year;
    cin >> year;
    // 如果你想要如预期那样的功能，可以使用:cin.get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
    return 0;
}