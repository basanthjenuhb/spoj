#include <iostream>
using namespace std;
int main()
{
	int x;
	while(1)
	{
		cin >> x;
		if(x == 42)
			return(0);
		printf("%d\n",x );
	}
	return(0);
}
