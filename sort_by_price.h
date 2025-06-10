#ifndef SORT_BY_PRICE_H
#define SORT_BY_PRICE_H

#include <vector>
#include "product.h"

using namespace std;


extern vector<Product> productList1;

void mergAlgorithm();
void merg(vector<Product>& productList1, int l, int h);
void mix(vector<Product>& productList1, int l, int mid, int h);

#endif 