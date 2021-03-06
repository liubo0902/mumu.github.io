#num_
该分支主要是实现了一种通过枚举来解决问题的样例。要解决的问题描述如下:
>> 给定一个任意的正整数n，要求求出所有满足式子的解：a^3 = b^3 + c^3 + d^3 (n >= a >= d >= c >= b)

求解过程是很简单的，但是复杂的是在于如何表示结果，使得内存能够得到很好的利用。
我第一时间想到的是利用数组来存储解出的数据。所以本例暂时是利用数组来存储答案的。
在给定一个正整数n时，所满足的答案有多少是不确定的，所以采用了动态数组数组来存储。
动态数组一开始申请一个跟n一样长的空间，然后当答案长度接近动态数组的指定长度时，将数组的长度翻倍。
这里涉及到动态数组的扩容和在C++中数组作为函数参数和返回值的应用场景。

##动态数组扩容
在本例中，动态数组的扩容如下
~~~C++
Perfect_Triple * temp = new Perfect_Triple[2 * max_len];
max_len = 2 * max_len;
for (int i = 0; i < len_num; i++)
{
    temp[i] = perfect_triple[i];
}
delete []perfect_triple;
perfect_triple = temp;
~~~
在C++中，当旧的的动态数组的内容不需要时，需要手动释放空间。
##数组作为返回值的函数
~~~C++
Perfect_Triple * temp = new Perfect_Triple[n];
temp = find_perfect_triple(n, temp, num_len);
~~~
要求在函数的入口传入数组的地址，然后返回数组的地址，就可以实现函数对数组的返回。
注意在使用过程中，函数中的临时变量不可以返回除值以外的任何。