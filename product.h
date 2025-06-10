#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

struct Product {
                 int id;
                 string name;
                 double price;
                 double rating;
                 string description; 


};
extern std::vector<Product> productList;
void Productadde();
void viewproducts();

#endif