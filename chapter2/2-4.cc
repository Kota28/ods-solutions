#include<bits/stdc++.h>
using namespace std;

int main() {
	auto rotate = [](vector<int>&x, int r) {
		auto y=x;
		int n=(int)x.size();
		for(int i=0;i<n;i++) {
			y[(i+r)%n]=x[i];
		}
		x=y;
	};
}