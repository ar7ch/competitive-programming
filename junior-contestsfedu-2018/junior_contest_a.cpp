/*
Задача A. МНОГО НУЛЕЙ
<https://drive.google.com/open?id=1ra0ucznapXE4arNE0ly1LSpGdgjLQRhn>
*/
#include <iostream>

int main()
{
	unsigned long long n;
	std::cin >> n;
	unsigned long long counter = 1;
	unsigned long long position = 1;
	unsigned long long prev_position = 1;
	while(1)
	{
		if(position == n)
		{
			std::cout << "YES" << std::endl;
			return 0;
		}
		if (position > n)
		{
			std::cout << "NO" << std::endl;
			std::cout << prev_position << std::endl;
			return 0;
		}
		prev_position = position;
		position += counter;
		++counter;
	}
	return 0;
}