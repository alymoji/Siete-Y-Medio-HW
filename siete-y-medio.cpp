#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main(){
    Player one(100);
    Hand own_set();
    Hand dealer_set();
    
    //Figure out what loop to use
    int bet;
    cout << "You have $ " << one.total_m() <, ". ";
    cout << "Enter bet: ";
    cin >> bet;
    own_set.place_bet();
    cout << "\n Your cards: \n" << own_set.print() << endl;
    
    //find another loop
    string answer;
    cout << "Your total is " << own_set.total_points() << ". Do you want another card (y/n)? ";
    cin >> answer;
    cout << "Dealer's cards: " << dealer_set.print() << endl;
    cout << "The dealer's total is " << dealer_set.total_points() << ". \n";
    if (answer == "y")
    {
        own_set.dealCard();
        dealer_set.dealCard();
    }
    else {
        dealer_set.dealCard();
        return 0;
    }
