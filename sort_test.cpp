#include<iostream>
#include <windows.h>
#include "sort_test.h"
#include "insertion.h"
#include "product.h"
#include "selection.h"
#include "bubble.h"
#include "merge.h"
#include "quick.h"



using namespace std;

void sort_test(){
    bool player=true;
    while(player){
        system("cls");
    cout<<"************************************************************************************\n";
    cout<<"*                                                                                  *\n";
    cout<<"*                              Sorting Algorithms Test                             *\n";
    cout<<"************************************************************************************\n";

    cout<<"\nWellcome to sorting algorithms test page here u will be able to test\n";
    cout<<"different sorting algorithms and compare their performance.\n";
    cout<<"\n\n";   
    cout<<"1. insertion sort\n";
    cout<<"2. selection sort\n";
    cout<<"3. bubble sort\n";
    cout<<"4. merge sort\n";
    cout<<"5. quick sort\n";
    cout<<"6. back to home page\n";

    int choice;
    cout<<"\nEnter your choice >_";
    cin>>choice;
    
            switch (choice) {
                           case 1:
                               system("cls");
                              productList.clear();
                                Productadde();
                                viwer();
                                system("pause");
    
                                              break;
                            case 2:
                                system("cls");
                              productList.clear();
                                Productadde();
                                viwer2();
                                system("pause");
    
                                                break;
                           case 3:
                                   system("cls");
                              productList.clear();
                                Productadde();
                                viwer3();
                                system("pause");
    
                                                break;
                          case 4:
                                    system("cls");
                              productList.clear();
                                Productadde();
                                viwer4();
                                system("pause");
                                               break;
                           case 5:
                                   system("cls");
                              productList.clear();
                                Productadde();
                                viwer5();
                                system("pause");
                                              break;
                          case 6:
                                     cout<<"Returning to home page...\n";
                                       system("pause");
                                       player=false;
                                                  break;
                         default:
                                       cout<<"Invalid choice. Please try again.\n";
    }

}
}