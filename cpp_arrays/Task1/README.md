# Task 1

Write code to perform vector dot products.
For example given vectors
```
u: <1, 2, 3, 4>
v: <0, 3, 9, 2>
```

The dot product of u and v denoted u.v
is equals to 

```
1*0 + 2*3 + 3*9 + 4*2 = 1 + 6 + 27 + 8 ...
```

An important part in this practical is realising how a problem can be broken
up into smaller parts. For example the input is given as a file, after reading
this file we need to convert the string `1,2,3` into an an array of integers.

I use the getline() function to split the string into parts in the while loop.
The function is slightly complicated but feel free to read up on it.

Dot products are only defined on vectors of equal length. So if  we read a file
with 20 elements then our vectors would be elements 0..9 and 10..19 respectively.

```c++
int split_at = count/2;
int *arrA = numbers;
int *arrB = numbers + split_at;
```

This piece of code illustrates how we can use pointers to get certain indexes
in an array. The base address ( first address ) of arrA can be thought of as 0.
If you want to find the address representing the halfway point of the array
we can say baseAddress + arr.length/2.

This only works because we are using pointers ``(int*)``.

The last for loop which is only 2 lines of code shows you how to implement dot
product for two arrays.
