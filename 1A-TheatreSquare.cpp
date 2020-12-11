#include <iostream>

using namespace std;

int main(){
	long long m, n, a, ans;
	cin >> m;
	cin >> n;
	cin >> a;

	if (n % a == 0)
		ans = n / a;
	else
		ans = (n / a) + 1;
	if (m % a == 0)
		ans *= m / a;
	else
		ans *= (m / a) + 1;
	cout << ans << "\n";
	return 0;
}
