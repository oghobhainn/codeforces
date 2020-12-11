#include <iostream>

using namespace std;

int main(){

	int n,a,b,c,tot=0;
	cin >> n;
	while (n-- > 0){
		cin >> a;
		cin >> b;
		cin >> c;
		if (a+b+c >= 2)
			tot += 1;
	}
	cout << tot << endl;
	return (0);
}
