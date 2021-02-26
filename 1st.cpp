#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;

	int quotient = n/k;
	quotient++;

	int ans = quotient*k;
	cout << ans;

}
