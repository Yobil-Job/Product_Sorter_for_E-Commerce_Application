#include <iostream>
#include <vector>
#include <iomanip> 
#include "product.h"
using namespace std;

vector<Product> productList;


void Productadde() {
    productList.push_back({1, "Laptop", 999.99, 4.5, "High-performance laptop with 16GB RAM and 512GB SSD."});
    productList.push_back({2, "Smartphone", 599.99, 4.2, "Latest smartphone with a 6.5-inch display and 128GB storage."});
    productList.push_back({3, "Headphones", 199.99, 4.8, "Noise-cancelling headphones with superior sound quality."});
    productList.push_back({4, "Monitor", 299.99, 4.1, "27-inch 4K monitor with HDR support."});
    productList.push_back({5, "Keyboard", 49.99, 4.0, "Mechanical keyboard with customizable RGB backlighting."});
    productList.push_back({6, "Mouse", 29.99, 4.3, "Wireless mouse with ergonomic design and long battery life."});
    productList.push_back({7, "Smartwatch", 249.99, 4.6, "Smartwatch with fitness tracking and heart rate monitoring."});
    productList.push_back({8, "Tablet", 399.99, 4.4, "10-inch tablet with high-resolution display and 64GB storage."});
    productList.push_back({9, "External Hard Drive", 89.99, 4.5, "1TB external hard drive with USB 3.0 connectivity."});
    productList.push_back({10, "Bluetooth Speaker", 79.99, 4.7, "Portable Bluetooth speaker with deep bass and long battery life."});
    productList.push_back({11, "Gaming Console", 499.99, 4.9, "Next-gen gaming console with 4K gaming capabilities."});
    productList.push_back({12, "Webcam", 89.99, 4.3, "1080p webcam with built-in microphone for video calls."});
    productList.push_back({13, "Router", 129.99, 4.2, "High-speed Wi-Fi router with dual-band support."});
    productList.push_back({14, "Smart TV", 799.99, 4.8, "55-inch 4K Smart TV with streaming capabilities."});
    productList.push_back({15, "Fitness Tracker", 99.99, 4.5, "Wearable fitness tracker with step counting and sleep monitoring."});
}

void viewproducts() {

    cout << "\n================== Product List ==================\n";

    for (const auto& product : productList) {
        cout << "-----------------------------------------------------------------------------------------\n";
        cout << "| ID: " << setw(41) << left << product.id << "                                           \n";
        cout << "| Name: " << setw(38) << left << product.name << "                                       \n";
        cout << "| Description: " << setw(31) << left << product.description << "                         \n";
        cout << "| Price: $" << setw(37) << left << product.price << "                                    \n";
        cout << "| Rating: " << setw(36) << left << product.rating << "                                   \n";
        cout << "-----------------------------------------------------------------------------------------\n";
    }

    cout << "==================================================\n";
}