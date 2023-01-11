#include <iostream>
#include "car.hpp"

Car::Car(std::string model, std::string color, int year)
{
    this->model = model;
    this->color = color;
    this->year = year;
}

void Car::speed_up(float velocity)
{
    this->velocity += velocity;
}

void Car::turn_on_head_light(void)
{
    lights_on = true;
}

int Car::get_year()
{
    return year;
}

std::string Car::get_model()
{
    return model;
}

bool Car::get_headlight_state()
{
    return lights_on;
}

float Car::get_velocity()
{
    return velocity;
}
