#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string init;
    cin >> init;
    list<char> L; 
    for (auto c: init) L.push_back(c);
    auto cursor = L.end();
    int q;
    cin >> q;
    while(q--) {  //3번 반복, 지렸다
        char op;
        cin >> op;
        
    }
}