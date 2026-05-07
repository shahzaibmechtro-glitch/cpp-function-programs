#include <iostream>
using namespace std;

void analyzeString(string s) {
    int chars = 0, spaces = 0, tabs = 0, lines = 1;

    for (char c : s) {
        chars++;

        if (c == ' ') spaces++;
        else if (c == '\t') tabs++;
        else if (c == '\n') lines++;
    }

    cout << "Characters: " << chars << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Tabs: " << tabs << endl;
    cout << "Lines: " << lines << endl;
}

int main() {
    string input;

    cout << "Enter text:\n";
    getline(cin, input);

    analyzeString(input);

    return 0;
}
