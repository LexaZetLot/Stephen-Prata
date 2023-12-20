// str1.cpp -- �������� � ����� string
#include <iostream>
#include <string>
// ������������� ��������� ������������� ������ string
int main(void)
{
    using namespace std;
    string one("Lottery winner!");              // ctor #1
    cout << one << endl;                        // ������������� <<
    string two(20, '$');                        // ctor #2
    cout << two << endl;
    string three(one);                          // ctor #3
    cout << three << endl;
    one += "Oops!";                             // ������������� +=
    cout << one << endl;
    two = "Sorry! that was ";
    three[0] = 'P';
    string four;                                // ctor #4
    four = two + three;                         // ������������� +, =
    cout << four << endl;
    char alls[] = "all's well that ends well";
    string five(alls, 20);                      // ctor #5
    cout << five << "!\n";
    string six(alls + 6, alls + 10);            // ctor #6
    cout << six << ", ";
    string seven(&five[6], &five[10]);          // ����� ctor #6
    cout << seven << "...\n";
    string eight(four, 7, 16);                  // ctor #7
    cout << eight << " in motion!" << endl;
    return 0;
}