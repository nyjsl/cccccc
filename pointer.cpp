#include <iostream>
using namespace std;

#include <cstring>
void test_memory_location();
void test_new();
void test_pointer_and_str();
void test_pointer_and_struct();
char* get_name();

void test_comp();

// 指针用于存储值的地址,因此,指针名表示的是地址
// * 运算符被称为间接值或解除引用运算符
// 将其运用于指针,可以得到该地址处存储的值 (这和乘法使用的符号相同,C++根据上下文来确定所指的是乘法还是解除引用)
// 指针的危险,一定要在堆指针应用解除引用运算符(*)之前,将指针初始化为一个确定,适当的地址,这是关于指针的金科玉律
// 指针不是整形,虽然计算机通常把地址当做整数来处理.从概念上看,指针与整数是截然不同的类型.
void test_memory_location(){
    int donut = 6;
    double keys = 5.5;
    cout << "var donut memory location is " << &donut <<endl
    << "var keys memory location is " << &keys <<endl;
    // int_pointer 表示内存地址 ,指针声明时必须指定指针指向的数据的类型
    int * int_pointer; // declare pointer to an int  * 两边的空格是可选的
    int_pointer = &donut; // assign address of int to pointer, 

    cout << "address &donut is "<< int_pointer <<endl
    << "val dont is " << *int_pointer <<endl; 

    *int_pointer += 4; // use pointer to change value
    
    cout << "address &donut is "<< int_pointer <<endl
    << "val dont is " << *int_pointer <<endl;

    //指针的危险, daner没有初始化为确定的内存地址,它不知道自己指向哪里
    long* danger; // create a pointer to long
    * danger = 23333; // place a value in never-never land
    cout << "* danger is "<< *danger << " danger is " << danger <<endl;


}
// 使用new来分配内存
// new 和delete 遵循以下规则
// . 不要使用delete来释放不是new分配的内存
// . 不要使用delete 释放同一个内存块两次
// . 如果使用new[] 为数组分配内存,则应使用 delete[]来释放
// . 如果使用new[] 为一个实体分配内存,则应使用delete 来释放.
// . 对空指针应用delete 是安全的

// 将指针变量加1后,增加的量等于它指向的类型的字节数
void test_new(){
    //new int 告诉程序,需要适合存储int 的内存,并返回其地址
    int* sevens = new int; // allocate space for an int
    *sevens = 7777; // store a value threre
    
    cout << "sevens val is " << *sevens << " sevens location is " << sevens <<endl;  

    double* nines = new  double;
    *nines = 999.9999;
    cout.precision(8);
    cout << "nines val is " << *nines << " nines location is " << nines <<endl;  

    cout << "sizeof nines is " << sizeof(nines) << " size of sevens is " << sizeof(sevens) <<endl;

    //使用delete 释放内存,释放执行sevens的呢次,但不会删除sevens指针本身
    // 不能用delete尝试释放已经释放的内存,不能用delete释放声明变量所获得的内存
    // 一般来说不要创建两个指针指向同一个内存块
    delete sevens;
    cout << "after delete sevens sevens val is " << *sevens << " sevens location is " << sevens <<endl;  
    
    //*psome是第一个元素的值
    int* psome = new int[10]; // 使用new 创建动态数组
    // 对于使用new创建的数组,应使用另一个格式的dlete来释放
    psome[0] = 3;
    psome[2] = 4;

    delete [] psome;
    psome[3] = 5;
    // 3 0 4 5 0 0 0 0 0 
    for(int i=0;i<9;i++){
        cout << psome[i] << " ";
    }
    cout << endl;

    
    cout << &psome[0] << endl; //数组第一个元素的地址
    cout << psome << endl; // 数组第一个元素的地址
    cout << &psome << endl; //整个数组的地址
    cout << *psome << endl;

}


void test_pointer_and_str(){

    char flower[10] = "rose";
    cout << flower << " S are read\n";

    //
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;


    cout << animal << " and " << bird << endl;
    ps = animal;

    cout << ps << endl;

    ps = new char[strlen(animal)+1];
    // ps = "elephant";

    cout << "animal is " << animal << " ps is " << ps << endl;
    // strcpy(ps,animal);
    // cout << "animal is " << animal << " ps is " << ps << endl;
    delete[] ps;
    
}

void test_pointer_and_struct(){

    struct hehe_struct
    {
        /* data */
        int age;
        string name;
    };
    //创建动态结构体
    hehe_struct* hehe = new hehe_struct;
    //动态结构不能将成员运算符用于结构名,因为这种结构体没有名称,只是知道它的地址
    //如果结构标识符是结构名,使用点句运算符 .
    //如果结构标识符是指向结构的指针,则使用箭头运算符 ->
    cout << hehe << endl;

    //箭头运算符
    hehe->age = 1;
    hehe->name = "hehe";

    cout << "hehe age is " << hehe->age <<endl;
    // *hehe 为结构本身
    cout << "hehe name is " <<(*hehe).name <<endl;

    delete hehe;
}

// 根据分配内存的方法,c++有3中管理数据内存的方式
// 自动存储,静态存储,和动态存储
// 在函数内部定义的常规变量使用自动存储空间,被称为自动变量,函数被调用时自动产生,函数结束时消亡
// 静态存储是整个执行期间都存在的存储方式.一种是在函数外面定义它;另一种是在声明变量时使用关键字static
// 动态存储 new 和 delete ,它们管理了一个内存池  堆
void test_new_delete(){
    char* name;
    name = get_name();
    cout << name << " at " << (int*)name <<endl;
    delete[] name;
    name = get_name();
    cout << name << " at " << (int*)name <<endl;
    delete[] name;
}

char* get_name(){
    char temp[80];
    cout << "Enter last name: ";
    cin >> temp;
    char* pn = new char[strlen(temp)+1];
    strcpy(pn,temp);
    return pn;
}


void test_comp(){
    struct an_years_end
    {
        /* data */
        int year;
    };

    an_years_end s01,s02,s03;
    s01.year = 1998;
    //创建指向结构体的指针
    an_years_end* pa = &s02;
    pa->year = 1999;
    an_years_end trio[3];
    trio[0].year = 2003;
    (trio+1)->year = 2004;
    //创建指针数组
    const an_years_end* arp[3] = {&s01,&s02,&s03};
    // arp 是一个数组的名称,因此它是第一个元素的地址. 但是其第一个元素是指针
    cout << arp[0]->year << endl;
    cout << arp[1]->year << endl;
    //一个指向指针的指针(指针的指针)
     // arp 是一个数组的名称,因此它是第一个元素的地址. 但是其第一个元素是指针
    // 因此 ppa是一个指针,指向一个指向an_years_end的指针
    const an_years_end** ppa = arp;
    // 利用编译器的推断能力
    auto ppb = arp;

    cout << (*ppa)->year << endl;
    cout << (*(ppb+1))->year<< endl;

    
}