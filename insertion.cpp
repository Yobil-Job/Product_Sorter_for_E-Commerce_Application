#include<iostream>
#include "product.h"
#include "insertion.h"

using namespace std;

vector<Product> productList3;

void viwer(){
    productList3=productList;
    int n = productList3.size();
    cout<<"...............................Insertion Sort By Price...................................\n";
    cout<<"\n\nBefore Sorting:\n";
    for (const Product& product : productList3){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";
    insertion_sort(productList3, n);

    cout<<"\n\nAfter Sorting:\n";
    for (const Product& product : productList3){
    cout<<"Id->"<<product.id<<"  name->"<<product.name<<"||  price==>"<<product.price<<endl;
    }
    cout<<"----------------------------------------------------------------------------------------------\n";
    cout<<"\n\nDESCRIPTION\n\n";
    cout<<R"(Insertion sort is best suited for sorting small to moderately sized product lists in an e-commerce app, 
    as it efficiently places each product into its correct position one at a time. Compared to selection sort and
     bubble sort, it generally performs fewer swaps, making it faster for mostly sorted product lists, such as 
     when prices are updated slightly or new products are added incrementally. However, for larger product 
     catalogs or frequent sorting demands, more advanced algorithms like merge sort and quick sort can handle higher
      data volumes more efficiently by dividing the list and combining results, while heap sort provides a reliable
       option with a consistent performance. Overall, insertion sort is ideal when you expect smaller, incremental 
       changes in your product list that require quick and straightforward sorting by price or rating.)";
   
    
}



