#include <iostream>

using namespace std;

int main()
{

    int small_room_price{25};
    int large_room_price{35};
    double tax_price{0.06};

    int number_small_rooms{0};
    cout << "Enter the number of small rooms: ";
    cin >> number_small_rooms;

    int number_large_rooms{0};
    cout << "Enter the number of large rooms: ";
    cin >> number_large_rooms;

    cout << "The price of a small room is $" << small_room_price << endl;
    cout << "The price of a large room is $" << large_room_price << endl;
    cout << "Cost : $" << (small_room_price * number_small_rooms) + (large_room_price * number_large_rooms) << endl;
    cout << "Tax : $" << (small_room_price * number_small_rooms * tax_price) + (large_room_price * number_large_rooms * tax_price) << endl;
    cout << "===============================================================" << endl;
    cout << "Total estimate: $" << (small_room_price * number_small_rooms * tax_price) + (large_room_price * number_large_rooms * tax_price) + (small_room_price * number_small_rooms) + (large_room_price * number_large_rooms) << endl;
    cout << "this estimate is valid for 30 days" << endl;
}