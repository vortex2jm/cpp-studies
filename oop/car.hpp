#ifndef car_h
#define car_h
#include <string>

class Car
{
    std::string model;
    std::string color;
    int year;
    float velocity = 0;
    bool lights_on = false;

public:
    Car(std::string, std::string, int);
    // Car(Car&);  Copy constructor

    void speed_up(float velocity);
    void turn_on_head_light(void);
    int get_year(void);
    std::string get_model();
    std::string get_color();
    bool get_headlight_state();
    float get_velocity();

    ~Car() {}
};

#endif
