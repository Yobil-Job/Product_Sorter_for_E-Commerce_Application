#include<iostream>
#include "product.h"
#include "bubble.h"

using namespace std;

vector<Product> productList5;

void viwer3(){
    productList5=productList;
    int n = productList5.size();
    cout<<"...............................Bubble Sort By Price...................................\n";
    cout<<"\n\nBefore Sorting:\n";
    for (const Product& product : productList5){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    bubble_sort(productList5,n);

     cout<<"\n\nAfter Sorting:\n";
    for (const Product& product : productList5){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    cout<<"\n\nDescription\n\n";
cout<<R"( 
Bubble sort is a straightforward sorting technique that repeatedly compares adjacent products 
and swaps them if they are in the wrong order based on price. Though simple to understand 
and implement, it is the least efficient among all the classic sorting algorithms for 
large product catalogs. Bubble sort performs many comparisons and swaps, making it slow 
when sorting extensive e-commerce product lists, but it can be useful for small or nearly 
sorted lists where you want to demonstrate step-by-step progress and visualize each swap 
clearly for learning or debugging purposes.)";
}

void bubble_sort(vector<Product>& productList5, int n) {
    Product temp;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (productList5[j].price < productList5[j - 1].price) {
                temp = productList5[j];
                productList5[j] = productList5[j - 1];
                productList5[j - 1] = temp;
            }
        }
    }
}
