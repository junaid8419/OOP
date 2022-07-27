#include<iostream>
using namespace std;
int main() {
	int x, n;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "\n\nYou entered: ";
	for (x = 0; x < n; x++) {
		cout <<"\n"<< arr[x];
	}
	return 0;
}
