
template <class T> 
void swapp(T &a,T &b); // template prototype

template <class T> 
void swapp(T &a,T &b){ // function template definition
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// 对于给定的函数名,可以有非末班函数,模板函数和显示具体化末班函数以及它们的重载版本
// 显示具体化的原型和定义应以 template<>打头,并通过名称类指出类型
// 具体化优先于常规末班,非模板函数优先于具体化和常规模板
struct job
{
    char name[40];
    double salary;
    int floor;
};

void swap(job &, job &); // non template  function prototype

// template <> void swap<job>(job&,job&);
