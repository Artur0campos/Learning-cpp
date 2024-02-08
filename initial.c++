#include <iostream>

int space_clock_function_of_urm(int initial_space, int speed_m_by_s, int time_seconds){
    int final_espace = 0;
    final_espace = initial_space + speed_m_by_s * time_seconds;
    return final_espace;

}

int main(){
    std::cout << space_clock_function_of_urm(0,30,9) << " m/s";
    return 0;
}
