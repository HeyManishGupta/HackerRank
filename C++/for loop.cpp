#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string a[] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int start, end;
    cin >> start;
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        cout << ((i <= 9) ? a[i] : ((i % 2 == 0) ? "even" : "odd")) << endl;
    }
    return 0;
}
