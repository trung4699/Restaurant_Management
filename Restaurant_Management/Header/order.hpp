
/*
* File: order.hpp
* Author: Phan Hoang Trung
* Date: 07/05/2023
* Description: This is a file include function declaration of one order
*/

#ifndef ORDER_H
#define ORDER_H


#include "Header/dish.hpp"


class Order
{
    private:
        unsigned int NumberDish;
        Dish DishOrder;
        
    public:
        Order(unsigned int number_dish, Dish dish);

        int getNumberDishes();
        void setNumberDishes(unsigned int number_dishes);

        Dish getDish();
};

#endif