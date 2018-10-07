//
// Created by 刘波 on 2018/10/7.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include "num_.hpp"

Perfect_Triple * find_perfect_triple(int n, Perfect_Triple *perfect_triple, int & len_num)
{
    len_num = 0;
    int max_len = n;
    if (n < 2)
    {
        printf("Invalid input!!");
        return perfect_triple;
    }
    else
    {
        for (int d = 1; d < n; d++)
        {
            for (int c = 1; c <= d; c++)
            {
                for (int b = 1; b <= c; b++)
                {
                    float a = pow(pow(float(d), 3.0) + pow(float(c), 3.0) + pow(float(b), 3.0), 1.0 / 3);
                    if (a - int(a) < 0.000001)
                    {
                        perfect_triple[len_num].a = int(a);
                        perfect_triple[len_num].b = b;
                        perfect_triple[len_num].c = c;
                        perfect_triple[len_num].d = d;
                        len_num += 1;
                    }
                    if  (len_num == max_len - 2)
                    {
                        Perfect_Triple * temp = new Perfect_Triple[2 * max_len];
                        max_len = 2 * max_len;
                        for (int i = 0; i < len_num; i++)
                        {
                            temp[i] = perfect_triple[i];
                        }
                        delete []perfect_triple;
                        perfect_triple = temp;
                    }
                }
            }
        }
    }
    return perfect_triple;
}

void display_perfect_triple(int num_len, Perfect_Triple *perfect_triple)
{
    if (num_len < 1)
    {
        printf("A null array has been given!!\n");
        return ;
    }
    else
    {
        for (int i = 0; i < num_len; i++)
        {
            printf("================%d===================\n", i);
            std::cout << "a = " << perfect_triple[i].a << std::endl;
            std::cout << "b = " << perfect_triple[i].b << std::endl;
            std::cout << "c = " << perfect_triple[i].c << std::endl;
            std::cout << "d = " << perfect_triple[i].d << std::endl;
        }
    }
}