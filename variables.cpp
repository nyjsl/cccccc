#include <iostream>
#include <climits>
#include <string>

void testVariables();
void testIntegers();
void testArray();
void testString();
void test_enum();
using namespace std;


void testVariable(){
    using namespace std;

    int _Reversed_var;    //以下划线或者两个下划线和大写字母打头的名称被保留给实现(编译期及其使用的资源)
    int __reversed_variable;

    int  _reversed_global_var;//以一个下划线开头的名称被保留给实现(用作全局标识符)

    int hambergus = {27};
    // int zero = {};
    cout << "hamberus " << hambergus << endl;
    // cout << "zero " << zero << endl;

}


void testIntegers(){
    //整形 short  至少16位
    //    int    至少与short一样长(32)
    //    long   至少32且至少与int一样长
    //    long long  至少64位,且至少与long一样长
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << n_int << " " << sizeof n_int << " bytes" <<endl
     << n_short << " " << sizeof n_short << " bytes" << endl 
     << n_long << " " << sizeof(n_long) << " bytes" << endl
     << n_llong << " " << sizeof n_llong << " bytes" << endl;

     unsigned short uss = n_short;

     uss += 1;
     n_short+=1;

    cout << n_short << " " << sizeof n_short << " bytes" << endl ;
    cout << uss << " " << sizeof uss << " bytes" << endl ;


    int dic = 42;
    int octal = 042;
    int hexD = 0x42;

    cout << "decimal 42 is " << dic << endl;
    cout << "octal 042 is " << octal << endl;
    cout << "hex 0x42 is " << hexD << endl;

    cout << hex;
    cout << "hex of 42 is " << dic << endl;
    cout << oct;
    cout << "octal of 42 is " << dic << endl;

    char input_char;

    cout << "input a char" << endl;

    cin >> input_char;

    cout << "Hola " << "Thank you " << input_char << endl;

    cout << '$' << endl;
    cout.put('$');
    cout << endl;

}

void testArray(){
    //不能将数组赋值给另一个数组
    int yarms[10];
    yarms[0] = 1;
    yarms[1] = 2;
    yarms[2] = 3;
    for(int i=0;i<10;i++){
        cout << yarms[i];
        cout <<endl;
    }

    int inits[3] = {6,6,6};
    cout << inits[0] <<endl;
    // sizeof 数组得到元素的长度,单位为字节
    cout << sizeof(inits) << endl;
    //计算数组元素个数 orz
    int length = sizeof(inits) / sizeof(int);

    cout << length << endl;


}


void testString(){
    using namespace std;
    string str = "abcdefg";
    cout << str << endl;


    struct inflatable
    {
        /* data */
        char name[20];
        float volume;
        double price;
    };

    inflatable inf = {
        "I'm inflatable",
         1.88,
         29.99
    };

    cout << inf.name <<endl;
    
}

void test_enum(){
    enum spec {red,orange,yellow,green,oil,blue,purple};

    spec colors = red;

    cout << colors << endl;
}

struct out_truct
{
    /* data */
    int age;
    std::string name;
};

struct struct_union
{
    int type;
    std::string name;
    //共用体能存储不同的数据类型,但同时只能存储一种
    union id{
        double u_name;
        int uage;
    } union_id;
};
//匿名共用体
struct anonymous_union
{
    /* data */
    int type;
    union{
        long uid;
        double id;
    };
};


