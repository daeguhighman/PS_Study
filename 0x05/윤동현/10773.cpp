#include<iostream>
#include <stack>
using namespace std;
int main(){
    int K;
    stack<int> S;
    int sum=0;
    cin>>K;
    for(int i=0;i<K;i++){
        int N;
        cin>>N;
        if (N != 0) S.push(N);
        else S.pop();
    }

    while(S.size()){
        sum += S.top();
        S.pop();
    }
    cout << sum;
    return 0;
}