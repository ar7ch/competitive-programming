#include <algorithm>
#include <iostream>

int main()
{
    int k,o,i,j,n,m;
    o = 0;
    std::cin >> n;
    int* a = new int[n];
    for(i = 0; i <= n; i++){
      std::cin >> a[i];
    }
    k = 1;
    for(i = 1; i < n; i++){
      if(a[i] >= a[i - 1]){
        k++;
      }
      else{
        o = std::max(o, k);
        k = 1;
      }
      


    }
    delete[] a;
    o = std::max(o, k);
    std::cout << o << '\n';
    
    return 0;
}
