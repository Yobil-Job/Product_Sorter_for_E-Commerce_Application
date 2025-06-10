#ifndef QUICK_H
#define QUICK_H

#include "product.h"
#include <vector>
using namespace std;

extern vector<Product> productList7;

void quick_sort(vector<Product>& productList, int left, int right);
void viwer5();

int partition(vector<Product>& productList, int left, int right);

#endif