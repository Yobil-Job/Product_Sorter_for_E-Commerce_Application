#include<iostream>
#include "product.h"
#include "selection.h"

using namespace std;

vector<Product> productList4;

void viwer2(){
    productList4=productList;
    int n = productList4.size();
    cout<<"...............................Selection Sort By Price...................................\n";
    cout<<"\n\nBefore Sorting:\n";
    for (const Product& product : productList4){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    selection_sort(productList4,n);

     cout<<"\n\nAfter Sorting:\n";
    for (const Product& product : productList4){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";

    cout<<"\n\nDescription\n\n";
cout<<R"(
Selection sort is a simple yet intuitive sorting method that repeatedly finds the minimum-priced 
product from the unsorted section of the product list and swaps it into its correct position. 
While it is easy to understand and implement, it is less efficient than insertion sort for nearly
 sorted lists and tends to be slower than merge sort and quick sort for larger e-commerce product
 catalogs. This makes selection sort more suitable for educational purposes or small product lists
  where transparency and simplicity of the algorithm are more important than speed, especially when 
  users might want to see how sorting happens step by step.)";
}


void selection_sort(vector<Product>& productList4, int n) {
    int smallest;
    Product temp;
    for (int i = 0; i < n; i++) {
        smallest = i;
        for (int j = i + 1; j < n; j++) {
            if (productList4[j].price < productList4[smallest].price) {
                smallest = j;
            }
        }
        temp = productList4[smallest];
        productList4[smallest] = productList4[i];
        productList4[i] = temp;
    }
}