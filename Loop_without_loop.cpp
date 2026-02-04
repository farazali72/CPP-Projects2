#include <iostream>
using namespace std;


void gfgloop(int N) {
    if (N == 0) return;    
    gfgloop(N - 1);       
    cout << "GFG ";
}

int main() {
    int N;
    cout<<"Enter the numer:";
    cin >> N;              
    gfgloop(N);           
    return 0;
}
