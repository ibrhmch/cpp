#include <iostream>
using namespace std;
int main()
{
	int n = 12345;
    cout<<n / 10000 % 10<<endl;
	cout<<n / 1000 % 10<<endl;
	cout<<n / 100 % 10<<endl;
	cout<<n / 10 % 10<<endl;
	cout<<n % 10<<endl;

    system("PAUSE");
    return 0;
}
