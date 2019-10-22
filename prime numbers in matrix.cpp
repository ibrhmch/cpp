#include <iostream>
using namespace std;
int main()
{
	int arr[3][3];
	int count;
	int rowcheck;
	for ( int i = 0; i < 3 ; i++)
	{
		for( int j = 0; j < 3; j++)
		{
			cout << "Enter for index - "<< i << " : " << j << " - ";
			cin >> arr[i][j];
		}
	}
	for ( int i = 0; i < 3 ; i++)
	{
		cout << endl;
		rowcheck = 0;
		for( int j = 0; j < 3; j++)
		{
			count = 0;
			for ( int m = 2; m < arr[i][j]; m++)
			{
				if(arr[i][j] % m == 0)
				count++;
			}
			if(count == 0)
			{
				cout << "Value : "<< arr[i][j] << " at index " << i << ":" << j << " is a prime number "<< endl;
				rowcheck++;
			}
		}
	cout << "Row : " << i + 1 << " has " << rowcheck << " prime numbers "<< endl;
	}
	
}
