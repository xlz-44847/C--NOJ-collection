# NOJ练习题题目与思考

### NOJ 001 

##### Question：![NOJ 1](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 1.png)

##### Thought：

非常基础，无补充



### NOJ 002

##### Question：

![NOJ 2](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 2.png)

##### Thought： 

```
vq = 4*pi*r*r*r/3;
```

这是进行体积运算时的代码，在编译时需注意不可以将4/3放在首位，因为4/3是整型运算，得到的结果是1而非数学意义上的1.333...，因而导致结果出错。



### NOJ 003

##### Question：

![NOJ 3](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 3.png)

##### Thought：

基础题，无补充



### NOJ 013

##### Question：

![NOJ 13](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 13.png)

##### Thought：

在编译过程中因为计算的结果数字很大，会出现数据向上溢出的情况，经试验即使是long long int也无法满足，所以需要优化算法。本人的做法是在代码中加入if判断语句，当乘积结果大于1000即可做取余取出后三位，因为积的后三位与高位无关，所以通过这样的做法来控制数字大小。



### NOJ 014

##### Question:

![NOJ 14](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 14.png)

##### Thought: 

这道题目明显是利用循环来找到关键的起始数字，完成这一步时灵感来的快，但是不幸的是把等差数列求和看成等比数列求和导致编译出错，修正了好一会儿。另一个启示点就是明白了这种不确定个数的打印应该采取循环的方式去执行来控制，很简单的思路，但就是没有转过来弯，不加\n即可出现在同一行。

### NOJ 015

##### Question:

![NOJ 14](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 15.png)

##### Thought: 

根源问题是斐波那契数的表示，此处采用循环的方式进行表示，还可采用函数递归（不推荐，重复计算次数太多，效率低）。

### NOJ 016

##### Question:

![NOJ 14](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 16.png)

##### Thought: 

同上一题思想类似，也属于给出数字递推公式的题目，只要实现循环体内部的数字交叉赋值即可。

### NOJ 017

##### Question:

![NOJ 14](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 17.png)

##### Thought: 

一道简单的求素数的题目。不过这种题目算法的提升空间很大，采用试除法，只需除到$\sqrt{n}$即可，而试除除数可以排除偶数（2除外）。



### NOJ 018

##### Question:

![NOJ 14](C:\Users\lang\Pictures\截了一手好图\NOJ\NOJ 18.png)

##### Thought: 

这里采用了二分法，很经典的一种算法，具体实现方法可以在我的[博客](https://blog.csdn.net/XLZ_44847/article/details/130234028?spm=1001.2014.3001.5502)内查看。

