//
// Created by ice1000 on 2016/7/5.
//

#include <stdio.h>

long long a[101];

void init();

int main(int argc, char* argv[]) {
	init();
	int n;
	scanf("%i", &n);
	while (n--) {
		int t;
		scanf("%i", &t);
		a[t] ++;
	}
	for(n = 0; n < 100; n++) {
		if(a[n]) {
			printf("%i ", n);
			a[n]--;
		}
	}
	return 0;
}

void init() {
	freopen("age.in", "r", stdin);
	freopen("age.out", "w+", stdout);
}
