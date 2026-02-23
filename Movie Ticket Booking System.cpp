// Movie Ticket Booking System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct booking
{
    int booking_id;
    string customer_name;
    string movie_name;
    int number_of_tickets;
    float ticket_price;
};

void display_bookings(booking booking_list[], int size)

{
    float total_revenue = 0;

    cout << "\n------ Booking Details ------\n" << endl;

    for (int index = 0; index < size; index++)
    {

        float total_amount = booking_list[index].number_of_tickets 
            * booking_list[index].ticket_price;



        cout << "Booking ID:  " << booking_list[index].booking_id << endl;
        cout << "Customer Name: " << booking_list[index].customer_name << endl;
        cout << "Movie Name: " << booking_list[index].movie_name << endl;
        cout << "Number of Tickets: " << booking_list[index].number_of_tickets << endl;
        cout << "Ticket Price: " << booking_list[index].ticket_price << endl;
        cout << "--------------------------" << endl;

        total_revenue += total_amount;
        
    }

    cout << " Total Theatre Revenue: " << total_revenue << endl;
}

int main()
{

    const int size = 3;

    booking booking_list[size];


    for (int index = 0; index < size; index++)

    {
        cout << "\nEnter details for Booking " << index + 1 << endl;

        cout << "Booking ID: ";
        cin >> booking_list[index].booking_id;

        cin.ignore();

        cout << "Customer Name: ";
        getline(cin, booking_list[index].customer_name);

        cout << "Movie Name: ";
        getline(cin, booking_list[index].movie_name);

        cout << "Number of tickets: ";
        cin >> booking_list[index].number_of_tickets;

        cout << "Ticket Price: ";
        cin >> booking_list[index].ticket_price;



    }


    
    display_bookings(booking_list, size);

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
