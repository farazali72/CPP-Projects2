#include <iostream>
using namespace std;

int main() {
    long long n;
    cout<<"Enter the integer:"<<endl;
    cin >> n;

    if (n < 0) n = -n;   

    while (n >= 10) {
        n /= 10;
    }

    cout << n;

    return 0;
}