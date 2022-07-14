#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v;
    v.push_back(123);
    v.push_back(456);
    v.push_back(789);
    v.push_back(101112);
    std::sort(v.begin(),v.end());
    for(auto&& item : v){
        std::cout << item << ' ';
    }
    std::cout << std::endl;
    return 0;
}