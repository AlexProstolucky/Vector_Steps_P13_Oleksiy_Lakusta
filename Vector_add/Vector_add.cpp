#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& A) {
	for (auto i = A.begin(); i != A.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
}

void right(vector<int>& A, int m)
{
	vector<int> right;
	for (int i = 0, k = A.size() - m; i < m; i++, k++) {
		right.push_back(A[k]);
	}

	for (int i = m, k = 0; i < A.size(); i++, k++) {
		right.push_back(A[k]);
	}

	cout << "Vector after = ";
	print(right);
}
 
int main() {

	vector<int> vec;
	int size = 0;
	cout << "Input size of vector --> ";
	cin >> size;
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		int buff;
		cout << "Input number --> ";
		cin >> buff;
		vec.push_back(buff);
		cout << endl;
	}

	cout << "Input step(s) --> ";
	int m  = 0;
	cin >> m;
	cout << endl;
	
	cout << "Initial vector = ";
	print(vec);
	right(vec, m);
	return 0;
}