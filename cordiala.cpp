#include <iostream>
#include <cmath>
#include "cordial.h"

polar rect_2_polar(rect xypos){
    polar answer;
    answer.distance = sqrt(pow(xypos.x,2)+pow(xypos.y,2));
    answer.angle = atan2(xypos.x,xypos.y);
    return answer;
}
void show_polar(polar dapos){
    const double Rad_to_dege = 57.29577951;
    std::cout << "distance = " << dapos.distance << ",angle = " << dapos.angle*Rad_to_dege << " degrees\n";
}