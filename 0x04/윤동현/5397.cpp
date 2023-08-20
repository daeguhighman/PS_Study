#include <stdio.h>
#include <iostream>
#include <string>
#include <cctype>
#include <list>
using namespace std;

int N;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>N;
    while(N--){
    string init;
    cin >> init;
    list<char> L;
    auto cursor = L.begin();
    for (auto c:init){
        if (c == '-') {
            if(cursor!=L.begin()){
            cursor--;
            cursor = L.erase(cursor);
            }
        }
        else if (c=='<') {
            if(cursor!=L.begin())
            cursor--;
        }
        else if (c=='>') {
            if(cursor !=L.end())
            cursor++;
        }
        else
        L.insert(cursor,c);
    }
    for(auto a:L) cout << a;
    cout << "\n";
    }
    return 0;
}