/*
 * @Author: FreedomLy 
 * @Date: 2017-12-20 09:29:15 
 * @Last Modified by: FreedomLy 
 * @Last Modified time: 2017-12-20 09:29:15 
 */
#include <iostream>

int main() 
{
    for (int i = 1; i < 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j << " * " << i << " = " << i*j << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}