/*
* File: table.hpp
* Author: Phan Hoang Trung
* Date: 07/05/2023
* Description: This is a file include function declaration of one table
*/

#ifndef TABLE_H
#define TABLE_H


#include "Header/order.hpp"


class Table
{
    private:
        std::list <Order> Database_Order;
        bool Status = true;
        double total;
    public:
        bool getStatus();
        void setStatus(bool status);

        void addOrder(Order new_order);
        void deleteOrder();
        void printPayment();
        void printOrder();
        void makePayment();

};

#endif