// Codeforces
// Bun Lover
#include <iostream>

int main()
{
		long long int t, n, op;
		std::string r;
		std::cin >> t;

		while(t > 0)
		{
				std::cin >> n;
				op  = (n*n)+(n*2)+2;
				r += std::to_string(op) + "\n";
				--t;
		}
		
		std::cout << r;

		return 0;
}
