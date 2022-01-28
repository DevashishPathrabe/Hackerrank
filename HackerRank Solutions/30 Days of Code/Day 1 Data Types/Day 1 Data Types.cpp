#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> i1;
    cin >> d1;
    cin.get();
    getline(cin, s1);
    // Print the sum of both integer variables on a new line.
    cout << i+i1 << endl;
    // Print the sum of the double variables on a new line.
    d = d+d1;
    cout << std::fixed << std::setprecision(1) << d << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << s1;
    return 0;
}