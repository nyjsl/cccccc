#include <iostream>
#include <cmath>
#include "variables.cpp"
#include "pointer.cpp"
#include "func.cpp"
#include "stringfun.cpp"
#include "strucfun.cpp"
#include "funpointer.cpp"
using namespace std; // 函数头使用using编译指令

void simon(int); //function prototype for simon()

double time_test(int);

int main(){


    // using namespace std;
    // cout << "come up and C++ me some time";
    // cout << endl;
    // cout << "you wont regret it" << endl;


    // int carrots;
    // cout << "How many carrots do you have?" <<endl;
    // cin >> carrots;
    // cout << "here are tow more";
    // carrots += 2;
    // cout << "Now you have " << carrots << " carrots." << endl;

    // double side = 3;

    // cout << sqrt(side) << endl;
    
    // simon(1);

    // testIntegers();
    
    // testVariable();

    // testArray();

    // testString();

    // out_truct ot = {
    //     13,
    //     "Jen"
    // };

    // cout << ot.name << endl;


    // struct_union stt = {
    //     1,
    //     "Hank"
    // };

    // if(stt.type == 1){
    //     stt.union_id.u_name = 2.2;
    // };
    // cout << stt.union_id.u_name << endl;

    // test_enum();
    // test_memory_location();
    // test_new();
    // test_pointer_and_str();
    // test_pointer_and_struct();
    // test_new_delete(); 
    // test_comp();

    // string hello = "hello";
    // string world = "world";
    // string helo = "hello";
    // // string 的运算符重载
    // cout << (hello != world) << endl;
    // cout << (hello == helo) << endl;

    // const int arr_length = 5;
    // int arr[5] = {1,2,3,4,5};
    // auto result = sum_arr(arr,arr_length);
    // cout << result << endl;
    // int res = sum_arr(arr,arr+3);
    // cout << res << endl;

    // test_cosnt_p();
    // char 字符串的字面值不允许修改 所有要加上const
    // char const* src = "abcdbcdd";
    // unsigned int count = c_in_str(src,'b');
    // cout << count << endl;
    // char * result;
    // result = build_str('q',4);
    // cout << result << endl;
    // delete [] result;

    // rect rplace = {
    //     3.00,
    //     4.00
    // };
    // polar pplace = rect_to_polar(rplace);
    // show_polar(pplace);

    // rect re = {
    //     4.00,
    //     3.00
    // };
    // polar p;
    // rect_to_polar(&re,&p);
    // show_polar(&p);

    estimate(4,time_test);

    return 0;



}
double time_test(int lines){
    return lines* 0.5;
}


void simon(int n){
    // using namespace std;
    cout << "i m simon" << endl;    
}
