#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<vector<int>> ans;
void solve(vector<int> v) {
	if (v.size() == m) {
		ans.push_back(v);
		return;
	}
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
		solve(v);
		v.pop_back();
	}
}

int main() {
	scanf("%d %d", &n, &m);
	vector<int> empty_v;
	solve(empty_v);
	sort(ans.begin(), ans.end());
	for (vector<int> v : ans) {
		for (int i : v) {
			printf("%d ", i);
		}
		printf("\n");
	}
}