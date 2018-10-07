//
// Created by 刘波 on 2018/10/7.
//

#include <iostream>
#include "num_.hpp"

int main() {
    int n;
    std::cin >> n;
    if (n < 1)
    {
        printf("Invalid input\n");
        exit(0);
    }
    Perfect_Triple * temp = new Perfect_Triple[n];
    int num_len = 0;
    temp = find_perfect_triple(n, temp, num_len);
    display_perfect_triple(num_len, temp);
    return 0;
}