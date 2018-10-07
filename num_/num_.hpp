//
// Created by 刘波 on 2018/10/7.
//

#include <cstdlib>
#include <cmath>

#ifndef GITHUB_IO_NUM_HPP
#define GITHUB_IO_NUM_HPP

struct Perfect_Triple{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
};

Perfect_Triple* find_perfect_triple(int n, Perfect_Triple *perfect_triple, int &len_num);
void display_perfect_triple(int num_len, Perfect_Triple *perfect_triple);

#endif //GITHUB_IO_NUM_HPP
