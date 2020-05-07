#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, j, n; cin >> n;
    vector<int> array;
    array.resize(n);
    for (i=0; i<n; i++)
    {
    	array.at(i)=i+1;
	}
    
    for (i=0; i<n; i++)
    {
    	for (j=0; j<n; j++)
    	{
    		cout << array.at(j) << ' ';
		}
		cout << endl;
		array.push_back(array.at(0));
		array.erase(array.begin());
	}
}
