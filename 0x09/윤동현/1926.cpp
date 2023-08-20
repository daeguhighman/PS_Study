#include <stdcpp.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define X first
#define Y second 

int n,m;
int board [502][502]; 
bool vis [502][502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    for (int i=0;i<n;i++){
        for (int j=0; j<m; j++){
            cin>>board[i][j];
        }
    }
    vector<int> v;
    queue<pair<int,int> > Q;
    int total = 0;
    for (int i=0;i<n;i++){
        for (int j=0; j<m; j++){
            int sum =0;
            if (board[i][j] == 0) continue;
            else if (vis[i][j] == 1) continue;
            else
            vis[i][j] = 1;
            total++;
            Q.push(make_pair(i,j));
            while(!Q.empty()){
            pair<int,int> cur = Q.front(); 
            Q.pop();
            ++sum;  
            for(int dir = 0; dir < 4; dir ++){
            int nx= cur.X + dx[dir];
            int ny= cur.Y + dy[dir];
            if (nx<0 || nx >= n || ny<0 || ny >= m) continue;
            if (vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] =1;
            Q.push(make_pair(nx, ny));
            }
            }
            v.push_back(sum);
        }
    }   
    vector<int>::iterator maxElementIterator = max_element(v.begin(), v.end());
    int maxx;
    if (maxElementIterator != v.end()) {
        maxx = *maxElementIterator;
    } else {
        maxx = 0;
    }
    cout << total <<"\n"<< maxx;
    return 0;
}
