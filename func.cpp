// 仅在c++中 int arr[] 等价于 int* arr
int sum_arr(int arr[],int n);

int sum_arr(const int* begin,const int* end);

int sum_arr(int arr[],int n){
    int total = 0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    return total;
}
//通过区间计算
int sum_arr(const int* begin,const int* end){
    int total = 0;
    for(const int* cur = begin;cur!= end;cur++){
        total+= *cur;
    }
    return total;
}

// 内联函数
// 对于内联代码,程序无需跳到另一个位置处执行代码,再跳回来.
// 因此,内联函数的运行速度比常规函数稍快,但代价是需要占用更多内存

inline double square(double x){return x*x;}


//c和c++使用&符号来表示变量的地址
//c++给&符号赋予了另一个含义,将其用来声明引用
// 引用必须在声明时将其初始化,而不能像指针那样,先声明,再赋值
// 引用更接近const 指针

// 什么时候使用引用,什么时候使用指针

// 对于使用的值而不做修改的函数
// 如果数据对象很小,如内置数据类型或小型结构,则按值传递
// 如果数据对象是数组,则使用指针,因为这是唯一的选择,并将指针声明为指向const的指针
// 如果数据对象是较大的结构,则使用const指针或const引用,以提高程序的效率,这样可以节省复制结构所需的时间和空间
// 如果数据对象是类,则使用const 引用

// 对于修改调用函数中数据的函数
// 如果数据对象是内置数据类型,则使用指针
// 如果数据对象是数组,则只能使用指针
// 如果数据对象是结构,则使用引用或指针
// 如果数据对象是类,则使用引用
void first_ref();
#include <iostream>
void first_ref(){
    int rats = 101;
    int& rodents = rats; // rodents is a reference
    rodents++;
    using namespace std;
    cout<< rats << endl;
    cout << rodents <<endl;
    cout << "rats address " << &rats << endl; // rodents 和 rats的地址相同
    cout << "rodents address " << &rodents << endl;

    int business = 50;

    rodents = business ;

    cout << business<< endl;

    cout << rodents<< endl;

    cout << rats << endl;
}

void swapr(int & a,int & b);
void swapp(int *p ,int * q);

// use reference
void swapr(int & a,int & b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// use pointers
void swapp(int* p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}