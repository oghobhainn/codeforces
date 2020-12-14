#include <iostream>

using namespace std;

int main(){

	int ix=0,n,t,m,a,cancelled;
	int ntab[100];
	int mtab[100];
	cin >> t;
	while (ix < t){
		cancelled = 0;
//		cerr << "Case [" << ix + 1 << "]" << endl;
		cin >> n;
//		cerr << n << " n trains" << endl;
		cin >> m;
//		cerr << m << " m trains" << endl;
		for (int i = 0; i<n; i++)
			cin >> ntab[i];
//		cerr << "	all the n trains are there" << endl;
		for (int i = 0; i<m; i++){
			cin >> a;
			for (int j = 0; j < n; j++){
				if (a == ntab[j]){
//					cerr << "we cancel the " << ntab[j] << " train" << endl;
					cancelled++;
				}
			}
		}
		cout << cancelled << endl;
		ix++;
	}
	return 0;
}
