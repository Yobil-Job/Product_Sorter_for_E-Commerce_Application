#include<iostream>
#include "product.h"
#include "sort_by_rating.h"
#include "ecommerce.h"

using namespace std;

vector<Product> productList2;

//----------------------------------------
void rating(){
    
productList2=productList;
int h = productList2.size() - 1;
int l = 0;
rateMerg(productList2, l, h);


cout << "-------------------------------------------------------------------------------------------\n";
cout << left
     << setw(6) << "Id"
     << setw(25) << "Name"
     << right << setw(12) << "Price"
     << setw(10) << "Rating" << endl;
cout << "-------------------------------------------------------------------------------------------\n";

for (const Product& product : productList2) {
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
void rateMerg(vector<Product>& productList2, int l, int h) {
             if(l<h){
                int mid=(l + h) / 2;
                rateMerg(productList2, l, mid);
                rateMerg(productList2, mid + 1, h);
                rateMix(productList2, l, mid, h);
             }
}
//-----------------------------------------------------------
void rateMix(vector<Product>& productList1, int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    vector<Product> temp;

    while (i <= mid && j <= h) {
        if (productList1[i].rating < productList1[j].rating) {
            temp.push_back(productList2[i]);
            i++;
        } else {
            temp.push_back(productList2[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(productList2[i]);
        i++;
    }

    while (j <= h) {
        temp.push_back(productList2[j]);
        j++;
    }

    for (int k = l; k <= h; k++) {
        productList2[k] = temp[k - l];
    }
}