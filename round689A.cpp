#include <iostream>
#include <string>

using namespace std;

int main(){

	string str;
	int i,j,t,k,n;
	cin >> t;
	while (t-- > 0){
		str = "";
		cin >> k;
		cin >> n;
		for (i = 0; i < n; i++)
			str += "a";
		for (j = 0; j < (k-n)/3; j++)
			str += "bca";
		if (str.length() < k)
			str += "b";
		if (str.length() < k)
			str += "c";
		cout << str << endl;
	}
	return 0;
}
