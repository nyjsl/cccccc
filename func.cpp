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