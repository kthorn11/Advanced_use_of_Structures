// Food Delivery Order Status.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum order_status
{
    placed,
    preparing,
    out_for_delivery,
    delivered,
};



struct order
{
    int order_id;
    string customer_name;
    float total_amount;
    order_status status;
};

int main()
{

    order order_1;
    int status_choice;


    cout << "Enter Order ID: ";
    cin >> order_1.order_id;

    cout << "Enter Customer Name: ";
    cin >> order_1.customer_name;

    cout << "Enter Total Amount: ";
    cin >> order_1.total_amount;

    cout << "\nChoose Order Status:\n";

    cout << "0 - Placed\n";
    cout << "1 - Preparing\n";
    cout << "2 - Out for Delivery\n";
    cout << "3 - Delivered\n";
    cout << "Enter your choice: ";
    cin >> status_choice;




    if (status_choice == 0)
        order_1.status = placed;
    else if (status_choice == 1)
        order_1.status = preparing;
    else if (status_choice == 2)
        order_1.status = out_for_delivery;
    else
        order_1.status = delivered;



    cout << "\nOrder Summary\n";
    cout << "Order ID: " << order_1.order_id << endl;
    cout << "Customer: " << order_1.customer_name << endl;
    cout << "Total Amount: " << order_1.total_amount << endl;



    if (order_1.status == placed)
    {
        cout << "\nStatus: Placed" << endl;
        cout << "We have received your order." << endl;

    }

    else if (order_1.status == preparing)
    {
        cout << "\nStatus: Preparing" << endl;
        cout << "Your food is being prepared." << endl;
    }

    else if (order_1.status == out_for_delivery)
    {
        cout << "\nStatus: Out for Delivery" << endl;
        cout << "Your food is on the way!" << endl;
    }

    else
    {
        cout << "\nStatus: Delivered" << endl;
        cout << "Enjoy your meal!" << endl;
    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
