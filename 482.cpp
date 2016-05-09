#include<cstdio>
#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
int main() {
	int n; cin >> n;
	getchar();
	string a[10000];
	while (n--) {
		map<int, string> ans;
		string trash;
		getline(cin,trash);
		string x, y;
		int i = 0,t;
		getline(cin, x);
		getline(cin, y);
		stringstream sx(x), sy(y);
		while (sy >> a[i++]) {};
		int j = 0;
		while (sx >> t) {
			ans[t] = a[j++];
		}
		for (map<int, string>::iterator it = ans.begin(); it != ans.end(); it++)
			cout << it->second << endl;
		if (n > 0) cout << endl;
	}
	//system("PAUSE");
	return 0;
}