#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int> v;
    v.push_back(101112);
    std::sort(v.begin(),v.end());
    for(auto&& item : v){
        std::cout << item << ' ';
    }
    int max = 100;
    std::cout << std::endl;
    return 0;
}