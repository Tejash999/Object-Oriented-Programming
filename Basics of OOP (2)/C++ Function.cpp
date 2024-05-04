// Write a C++ function called calculateDiscountedPrice that calculates the discounted price of an item. The function should have two parameters: price (representing the original price) and discountPercentage (with a default value of 10%). The function should return the calculated discounted price. In the main function, prompt the user to enter the original price of an item. Then, call the calculateDiscountedPrice function twice: once with the default discount percentage and once with a specific discount percentage entered by the user. Finally, print the original price and the two discounted price.

#include <iostream>
using namespace std;

float calculateDiscountedPrice(float price, float discountPercentage = 10.0)
{
    return (price*discountPercentage)/100;
}

int main()
{
    int price, discount;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter discount percentage: ";
    cin >> discount;
    cout << "The original price of the thing is: " << price << endl;
    cout << "The defult discounted price of the thing is: " << price-calculateDiscountedPrice(price) << endl;
    cout << "The actual discounted price of the thing is: " << price-calculateDiscountedPrice(price, discount) << endl;
    return 0;
}