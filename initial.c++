#include <iostream>

int space_clock_function_of_urm(int initial_space=0, int speed_m_by_s=0, int time_seconds=0){
    int final_espace = 0;
    final_espace = initial_space + speed_m_by_s * time_seconds;
    return final_espace;

}

int main(){
    //example of working//
    std::cout << space_clock_function_of_urm(0,30,9) << " m/s";
    return 0;
}
