#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
const ll INF = 1e18;

void solve(){
	int n; cin >> n;
	vector<vector<int>> grid(n + 1, vector<int>(n + 1));
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> grid[i][j];
		}
	}
	
	//Doc toa do xuat phat va dich
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	
	//Bang luu tru tong chi phi nho nhat de di den o (i, j)
	vector<vector<ll>> dist(n + 1, vector<ll> (n+1, INF));
	
	//Hang doi uu tien (min-heap) luu pair {chi phi, {toa_do_x, toa_do_y}
	priority_queue<pair<ll, pair<int, int>>,
					vector<pair<ll, pair<int, int>>>,
					greater<pair<ll, pair<int, int>>>> pq;
					
	//Khoi tao diem bat dau
	dist[x1][y1] = grid[x1][y1];
	pq.push({grid[x1][y1], {x1, y1}});
	
	while(!pq.empty()){
		auto top = pq.top();
		pq.pop();
		
		ll d = top.first;
		int x = top.second.first;
		int y = top.second.second;
		
		if(x == x2 && y == y2){
			cout << d << "\n";
			return;
		}
		
		if(d > dist[x][y]) continue;
		
		for(int i=0; i<8; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= n){
				ll next_cost = d + grid[nx][ny];
				
				if(next_cost < dist[nx][ny]){
					dist[nx][ny] = next_cost;
					pq.push({next_cost, {nx, ny}});
				}
			}
		}
	}
	
	cout << -1 << "\n";
}

int main(){
	int t; cin >> t;
	
	while(t--){
		solve();
	}
}
