#include<iostream>
#include <iomanip>
#include "product.h"
#include "sort_by_price.h"
#include "ecommerce.h"

using namespace std;

vector<Product> productList1;

//----------------------------------------
void mergAlgorithm(){
    
productList1=productList;
int h = productList1.size() - 1;
int l = 0;
merg(productList1, l, h);


cout << "-------------------------------------------------------------------------------------------\n";
cout << left
     << setw(6) << "Id"
     << setw(25) << "Name"
     << right << setw(12) << "Price"
     << setw(10) << "Rating" << endl;
cout << "-------------------------------------------------------------------------------------------\n";

for (const Product& product : productList1) {
    cout << left
         << setw(6) << product.id
         << setw(25) << product.name
         << right << fixed << setprecision(2)
         << setw(12) << product.price
         << setw(10) << product.rating << endl;
}

cout << "-------------------------------------------------------------------------------------------\n";


}

//----------------------------------------------------
void merg(vector<Product>& productList1, int l, int h) {
             if(l<h){
                int mid=(l + h) / 2;
                merg(productList1, l, mid);
                merg(productList1, mid + 1, h);
                mix(productList1, l, mid, h);
             }
}

//-----------------------------------------------------------
void mix(vector<Product>& productList1, int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    vector<Product> temp;

    while (i <= mid && j <= h) {
        if (productList1[i].price < productList1[j].price) {
            temp.push_back(productList1[i]);
            i++;
        } else {
            temp.push_back(productList1[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(productList1[i]);
        i++;
    }

    while (j <= h) {
        temp.push_back(productList1[j]);
        j++;
    }

    for (int k = l; k <= h; k++) {
        productList1[k] = temp[k - l];
    }
}