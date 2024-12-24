#include <iostream>
using namespace std;

int main()
{

    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of cups: ";
    cin >> cups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;
    // apply 5% discount if the total price is greater than 100

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice - (5 / 100));
        cout << "Discounted Price is: " << discountedPrice << endl;
    }
    else
    {
        cout << "Total price is " << totalPrice << endl;
    }

    return 0;
}