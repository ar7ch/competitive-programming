/*
ЗАДАЧА C. СУММА С ПЕРЕСТАНОВКАМИ
<https://drive.google.com/open?id=1ra0ucznapXE4arNE0ly1LSpGdgjLQRhn>
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

unsigned int VectorToInt(vector<unsigned int> v)
{
    reverse(v.begin(), v.end());
  	unsigned int decimal = 1;
    unsigned int total = 0;
    for (auto& it : v)
    {
        total += it * decimal;
        decimal *= 10;
    }
    return total;
}

int main()
{
	unsigned int a, b, c;
	std::cin >> a >> b >> c;
	vector<unsigned int> a_arr;
	vector<unsigned int> b_arr;
	vector<unsigned int> a_permuts;
	vector<unsigned int> b_permuts;
	unsigned int temp = a;
	while(temp != 0)
	{
		a_arr.push_back(temp % 10);
		temp /= 10;
	}
	temp = b;
	while(temp != 0)
	{
		b_arr.push_back(temp % 10);
		temp /= 10;
	}
	std::sort(a_arr.begin(), a_arr.end());
	std::sort(b_arr.begin(), b_arr.end());
	unsigned int current_a, current_b;
	do
	{	
		current_a = VectorToInt(a_arr);
		do
		{
			current_b = VectorToInt(b_arr);
			if (current_a + current_b == c)
			{
				cout << "YES" << endl << current_a << " " << current_b << endl;
				return 0;
			}
		} while (std::next_permutation(b_arr.begin(), b_arr.end()));
		std::sort(b_arr.begin(), b_arr.end());
	} while (std::next_permutation(a_arr.begin(), a_arr.end()));
	cout << "NO" << endl;
	return 0;
}