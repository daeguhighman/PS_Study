#include <stdcpp.h>
using namespace std;
#define X first
#define Y second 

int n,m;
int board [502][502];
bool vis [502][502];



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    return 0;
    for (int i=0;i<n;i++){
        for (int j=0; j<m; j++){
            cin>>board[i][j];
        }
    }
    int sum = 0;
    queue<pair<int,int> > Q;
    vis[0,0] = 1;
    Q.push({0,0});
    while(Q.empty()){
        pair<int,int> cur = Q.front(); 
        Q.pop;
        ++sum;  
    for(int dir = 0; dir < 4; dir ++){
        int nx= cur.X + dx[dir];
        int ny= cur.Y + dy[dir];
        if (nx<0 || nx >= n || ny<0 || ny >= m) continue;
        if (vis[nx][ny] || board[nx][ny] != 1) continue;
        vis[nx][ny] =1;
        Q.push({nx,ny});
    }
    }

}