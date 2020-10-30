#include <cmath>
#include <iostream>
// struct polar
// {
//     /* data */
//     double distance;
//     double angle;
// };
// struct rect
// {
//     /* data */
//     double x;
//     double y;
// };
// //传结构的值(结构本身)
// polar rect_to_polar(rect xypos);
// void show_polar(polar dapos);

// //为了充分利用指针的效率,应使用指针而不是返回值
// void rect_to_polar(const rect* pxy,polar* pda);
// //使用指向结构的指针,调用函数时应该使用结构的地址
// void show_polar(const polar* pda);


// polar rect_to_polar(rect xypos){
//     polar answer;
//     answer.distance = sqrt(pow(xypos.x,2)+pow(xypos.y,2));
//     answer.angle = atan2(xypos.x,xypos.y);
//     return answer;
// }
// void show_polar(polar dapos){
//     const double Rad_to_dege = 57.29577951;
//     std::cout << "distance = " << dapos.distance << ",angle = " << dapos.angle*Rad_to_dege << " degrees\n";
// }


// void rect_to_polar(const rect* pxy,polar* pda){
//     pda->distance = sqrt(pow(pxy->x,2)+pow(pxy->y,2));
//     pda->angle = atan2(pxy->x,pxy->y);
// }

// void show_polar(const polar* pda){
//     const double Rad_to_dege = 57.29577951;
//     //间接成员运算符 -> 
//     std::cout << "distance = " << pda->distance << ",angle = " << pda->angle*Rad_to_dege << " degrees\n";
// }
