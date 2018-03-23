# Functions

One of the core ideas in programming is code reuse. If
you put in time to create an algorithm you could turn it
into a function and reuse it at any point. Consider for
example the following.

You are tasked with writing code to say hello to a particular
person. You decide to turn this into a function seeing as how the person
variable could vary.

```cpp
#include<iostream>

void sayHi(std::string name){
    std::cout << "Hello, " << name << std::endl;
}

int main(){
    sayHi("Danny");
    sayHi("Connor");
}
```

Notice how you can reuse the code to say hello to anyone!

Lets now look at shapes! Take the area of a square for example.
We could calculate it is length*length; While the area of a rectangle is
length*breadth.

```cpp
#include<iostream>
double square_area(double length){
    return length * length;
}

double rectangle_area(double length, double width){
    return length * width;
}

using namespace std;
int main(){
    cout << "The area of square with length 4 is: " << square_area(5) << endl;    
    cout << "The area of a rectangle with length 4 and width 6 is: " << rectangle_area(4, 6) << endl;

    return 0;
    }
```

Notice how the return type at the start of the functions have changed from void to double. If we do not expect
the function to return anything we specify a return type of void.
