#include<iostream>
#include "product.h"
#include "merge.h"

using namespace std;

vector<Product> productList6;

void viwer4(){
    productList6=productList;
    int h = productList6.size() - 1;
    int l = 0;
    cout<<"...............................Merge Sort By Price...................................\n";
    cout<<"\n\nBefore Sorting:\n";
    for (const Product& product : productList6){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    merger(productList6, l, h);

     cout<<"\n\nAfter Sorting:\n";
    for (const Product& product : productList6){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    cout<<"\n\nDescription\n\n";
cout<<R"( 
Merge sort is a highly efficient, stable, and divide-and-conquer-based sorting algorithm that 
recursively divides the product list into smaller sublists until each contains a single product. 
It then merges these sublists in a sorted manner, ensuring that the products are ordered by 
price. Unlike simpler algorithms like bubble sort, merge sort has a consistent time complexity 
of O(n log n), making it well-suited for large product catalogs in e-commerce applications 
where performance is critical. However, it requires additional memory to store temporary 
lists during the merge step, which is a trade-off for its speed and stability.)";
}

//----------------------------------------------------
void merger(vector<Product>& productList6, int l, int h) {
             if(l<h){
                int mid=(l + h) / 2;
                merger(productList6, l, mid);
                merger(productList6, mid + 1, h);
                mixer(productList6, l, mid, h);
             }
}

//-----------------------------------------------------------
void mixer(vector<Product>& productList6, int l, int mid, int h) {
    int i = l;
    int j = mid + 1;
    vector<Product> temp;

    while (i <= mid && j <= h) {
        if (productList6[i].price < productList6[j].price) {
            temp.push_back(productList6[i]);
            i++;
        } else {
            temp.push_back(productList6[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(productList6[i]);
        i++;
    }

    while (j <= h) {
        temp.push_back(productList6[j]);
        j++;
    }

    for (int k = l; k <= h; k++) {
        productList6[k] = temp[k - l];
    }
}