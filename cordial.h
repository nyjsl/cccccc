#ifndef CORDIAL_H_ 
#define CORDIAL_H_ 
//在同一个文件中只能将同一个头文件包含一次
//使用预处理编译指令 #ifndef 可以避免这个问题
// 表示if not define  CORDIAL_H 则运行 #ifndef 和 #endif 之间的代码
struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_2_polar(rect xypos);
void show_polar(polar dapos);

#endif