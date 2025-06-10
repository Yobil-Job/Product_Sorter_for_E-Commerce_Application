#ifndef SORT_BY_RATING_H
#define SORT_BY_RATING_H

#include <vector>
#include "product.h"

using namespace std;
extern vector<Product> productList2;

void rating();

void rateMerg(vector<Product>& productList2, int l, int h);


void rateMix(vector<Product>& productList2, int l, int mid, int h);

#endif 
