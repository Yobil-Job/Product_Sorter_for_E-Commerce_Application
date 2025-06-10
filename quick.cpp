#include <iostream>
#include "product.h"
#include "quick.h"

using namespace std;

vector<Product> productList7;

void viwer5(){
    productList7 = productList;
    int n = productList7.size();

    cout << "...............................Quick Sort By Price...................................\n";
    cout << "\n\nBefore Sorting:\n";
    for (const Product& product : productList7){
        cout << "Id->" << product.id << "  name->" << product.name << " ||  price==>" << product.price << endl;
    }
    cout << "----------------------------------------------------------------------------------------------\n";

    quick_sort(productList7, 0, n - 1);

    cout << "\n\nAfter Sorting:\n";
    for (const Product& product : productList7){
        cout << "Id->" << product.id << "  name->" << product.name << " ||  price==>" << product.price << endl;
    }
    cout << "----------------------------------------------------------------------------------------------\n";
    cout << "\n\nDESCRIPTION\n\n";
    cout << R"(Quick Sort is a fast, divide-and-conquer sorting algorithm that efficiently organizes 
a product list based on price. It selects a pivot point, then partitions the list 
so that all products with lower prices are on one side and higher prices on the other.
It then recursively sorts each partition. This method is especially useful 
for sorting large or frequently updated product lists in an e-commerce application,
as it can handle large data volumes more efficiently than simpler algorithms like 
bubble sort or insertion sort.)";
}

int partition(vector<Product>& productList, int left, int right) {
    int pivotPos = left;
    while (left < right) {
        if (pivotPos == left) {
            if (productList[left].price > productList[right].price) {
                swap(productList[left], productList[right]);
                pivotPos = right;
                left++;
            } else {
                right--;
            }
        } else {
            if (productList[left].price > productList[right].price) {
                swap(productList[left], productList[right]);
                pivotPos = left;
                right--;
            } else {
                left++;
            }
        }
    }
    return pivotPos;
}

void quick_sort(vector<Product>& productList, int left, int right) {
    if (left < right) {
        int pivot = partition(productList, left, right);
        quick_sort(productList, left, pivot - 1);
        quick_sort(productList, pivot + 1, right);
    }
}
