#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
	int arr[] = { 3,5,1,4,3,7,3,9,2,6 };

	vector<int> v(10);

	copy(arr, arr + 10, v.begin()); // �迭�� ���ͷ� ����

	ostream_iterator<int> out_iter(cout, " : ");

	cout << "********** �� �� �� **********" << endl;
	copy(v.begin(), v.end(), out_iter);
	cout << endl;

	// v.begin()~v.end()���� �� ��� 100���� �����Ѵ�
	fill(v.begin(), v.end(), 100);

	cout << "********** �� �� �� **********" << endl;
	copy(v.begin(), v.end(), out_iter);
	cout << endl;


}