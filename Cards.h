#include <string>
#include <vector>
#include <fstream>

#ifndef CARDS_H
#define CARDS_H

using namespace std;

enum suit_t {OROS, COPAS, ESPADAS, BASTOS};
enum rank_t {AS, DOS, TRES, CUATRO, CINCO, SEIS, SIETE, SOTA=9, CABALLO=10, REY=11};

class Card {
public:
    // Constructor assigns random rank & suit to card.
    Card();
    
    // Accessors
    string get_spanish_suit() const;
    string get_spanish_rank() const;
    string get_english_suit() const;
    string get_english_rank() const;
    
    // Converts card rank to number.
    int get_rank() const;
    
    // Compare rank of two cards.
    // Useful if you want to sort the cards.
    bool operator < (Card card2) const;
    
private:
    suit_t suit;
    rank_t rank;
};


class Hand {
public:
    Hand(); //a vector of cards
    void place_bet&(int bet)const; //places bet that will be stored and used by Player
    void print()const; //outputs cards in hand
    int total_points();
    void dealCard(); //deals a card
    
private:
    // You decide what fields you'll need...
};


class Player {
public:
    // Constructor.
    Player(int m); //assigns initial amount of money
    int total_m()const; //outputs total money Player has
    void incrm() const; //when player wins
    void decrm() const; //when player loses
    
private:
    int money;
    // You decide what extra fields (if any) you'll need...
};
