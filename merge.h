#ifndef MERGE_H
#define MERGE_H

#include<iostream>
#include<vector>
#include "product.h"

using namespace std;

extern vector<Product> productList6;

void viwer4();
void merger(vector<Product>& productList6, int l, int h);
void mixer(vector<Product>& productList6, int l, int mid, int h);

#endif