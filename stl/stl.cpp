#include <iostream>
#include<vector>
#include<algorithm>
int main()
{
    // c++ stl
    std::vector<int> A = { 11,2,14,13 };
    std::cout << A[1] << std::endl;
    sort(A.begin(), A.end());
    bool present = binary_search(A.begin(), A.end(),2);
//    present =binary_search(A.begin(),A.end(), 4);
    std::cout << "Hello World!\n";
    A.push_back(100);
    present = binary_search(A.begin(), A.end(), 100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    lower_b
    return 0;
}
