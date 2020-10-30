//函数指针
// 函数地址是存储其机器语言代码的内存的开始地址
// 获取函数的地址很简单:只要使用函数名即可 

//声明函数指针,声明应制定函数的返回类型以及函数的特征(参数列表),应该像函数原型那样指出有关函数的信息
// 通常,要声明指向特定类型的函数指针,可以首先编写出这种函数的原型,然后用(*pf)替换函数名,这样pf就是这类函数的指针

//第二个参数是一个函数指针
#include <iostream>


// void estimate(int lines, double (*pf)(int));

// void estimate(int lines,double (*pf)(int)){
//     using namespace std;
//     cout << lines << " lines will take ";
//     cout << (*pf)(lines) << " hour(s)" << endl;
// }

//使用typedef 简化上面的代码 pf 为函数指针类型的别名 pf now is a  type name
typedef double (*pf)(int);
void estimate(int lines, pf);

void estimate(int lines,pf f){
    using namespace std;
    cout << lines << " lines will take ";
    cout << f(lines) << " hour(s)" << endl;
}


//头文件中包含的内容
// 函数原型
// 使用 #define 或const 定义的符号常量
// 结构声明
// 类声明
// 模板声明
// 内联函数
//在包含自己的头文件的时候,应该用双引号,而不是尖括号