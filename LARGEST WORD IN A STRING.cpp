
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    cout << "saurabh yadav CU ID- CU26960042" << endl;

    string str, word, largest;

    cout << "Enter a string: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word) {
        if (word.length() > largest.length()) {
            largest = word;
        }
    }

    cout << "Largest word: " << largest;

    return 0;
}
