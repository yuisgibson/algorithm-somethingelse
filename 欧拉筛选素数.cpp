//欧拉筛选素数

bool vis[100010] = { 0 };
int prime[100010] = { 0 };

int isprime(int n) {
	/*
	欧拉筛选素数。

	筛选n以内的素数，返回素数个数。

	时间复杂度：O(n)。

	*/
	int cnt = 0;
	for (int i = 2;i <= n;++i) {
		if (!vis[i]) {
			prime[cnt++] = i;
		}
		for (int j = 0;j < cnt&&i*prime[j] < n;++j) {
			vis[i*prime[j]] = 1;
			if (i%prime[j] == 0)break;
		}
	}
	return cnt;
}
