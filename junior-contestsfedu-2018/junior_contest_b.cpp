/*
Задача B. НАИБОЛЬШЕЕ ПРОИЗВЕДЕНИЕ ТРЕХ ЧИСЕЛ
<https://drive.google.com/open?id=1ra0ucznapXE4arNE0ly1LSpGdgjLQRhn>
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
	int n;
	std::cin >> n;
	std::vector<short> arr;
	short x;
	while (std::cin >> x) 
	{ 	
		/*
		 n <= 10^6, memory limit is 3000 kbytes
		 2-byte short size * 10^6 already gives 2000 kbytes
		 however, we don't need to keep more than 5 elements (3 max + 2 min) in the vector at the same time
		*/
	 	arr.push_back(x);
		std::sort(arr.begin(), arr.end());
		if (arr.size() >= 6)
			arr.erase(arr.begin() + 2);
	}

	n = arr.size();
	std::cout << std::max( (long long)arr[0] * arr[1] * arr[n-1], (long long)arr[n-1] * arr[n-2] * arr[n-3]) << std::endl;
	return 0;
}