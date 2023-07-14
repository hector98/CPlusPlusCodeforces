// Codeforces
// Calculating Function
#include <iostream>

int main()
{
		long long int n, resu;
		std::cin >> n;

		if(n % 2 == 0)
		{
				resu = n/2;
		}
		else
		{
				resu = ((n+1)/2) * -1;
		}

		std::cout << resu << std::endl;

		return 0;
}
