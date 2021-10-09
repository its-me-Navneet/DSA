#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
 
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long tc;
	std::cin >> tc;
	while(tc--) {
		long long n;
		std::cin >> n;
		long long a[n];
		std::vector<int> fx, fy;
		for(long long i = 0; i < n; ++i) {
			std::cin >> a[i];
			if(a[i] > 0) {
				fx.push_back(i);
			}
			else if(a[i] < 0) {
				fy.push_back(i);
			}
		}
		std::reverse(fy.begin(), fy.end());
		for(int i = 0; i < int(fy.size()); ++i) {
			bool stop = false;
			while(true) {
				int l = lower_bound(fx.begin(), fx.end(), fy[i]) - fx.begin();
				--l;
				if(l == -1 || stop) {
					break;
				}
				int _plus = std::min(a[fx[l]], -a[fy[i]]);
				if(_plus == a[fx[l]]) {
					fx.erase(fx.begin() + l);
				}
				else {
					stop = true;
				}
				a[fx[l]] -= _plus;
				a[fy[i]] += _plus;
			}
		}
		long long ans = 0;
		for(long long i = 0; i < n; ++i) {
			if(a[i] > 0) {
				ans += a[i];
			}
		}
		std::cout << ans << "\n";
	}
	return 0;
}
