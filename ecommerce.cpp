#include<iostream>
#include <windows.h>
#include <cstdlib>
#include <limits>


#include "ecommerce.h"
#include "product.h"
#include "sort_by_price.h"
#include "sort_by_rating.h"

using namespace std;
void ecommerce(){
    bool usingApp=true;
 while(usingApp){
   system("cls");

    cout<<"*************************  Great-Shopping   *************************";
    cout<<"\n\n";
             cout<<"_________________________________________________________________________________________________________________________";
    cout<<"\n\n";
    cout<<"                  1.View products\n";
    cout<<"                  2.Sort product by price\n";
    cout<<"                  3.Sort product by ratings\n";
    cout<<"                  4.Back to Home page\n";
    cout<<"                  5.Exit";

    cout<<"\n\n";
    cout<<"Enter your option >_";
    int choise;
    cin>>choise;
    cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    switch (choise){
        case 1:
        system("cls");
            cout<<"Here are products that are available\n";
          productList.clear();
           Productadde();
            viewproducts();
            system("pause");
            break;
        case 2:
          system("cls");
            cout<<"products being sorted by price...\n";
            productList.clear();
            Productadde();
           mergAlgorithm();
            system("pause");
            break;
        case 3:
            system("cls");
            cout<<"products being sorted by ratings...\n";
            productList.clear();
            Productadde();
            rating();
            system("pause");
            break;
        case 4:
            cout<<"Returning to the home page...\n";
            system("pause");
            usingApp = false; 

            break;
        case 5:
            cout<<"Exiting the application Goodbye\n";
            exit(0);
            break;
        default:
            cout<<"Invalid option. Please try again.\n";
    }
    

}

}
