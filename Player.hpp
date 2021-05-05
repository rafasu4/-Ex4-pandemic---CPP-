//
// Created by stycks on 03/05/2021.
//

#ifndef EX4_A_PLAYER_HPP
#define EX4_A_PLAYER_HPP

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"

namespace pandemic {
    class Player {
    protected:
        City currentCity;
        Board board;
        vector<City> cityCards;
        string className;

    public:
        Player(Board board, City city): currentCity(city){}
        /*Move from current city to one of it's neighbors.*/
        void drive(City city, Board board);
        /*Move from current city to city that player has a card of it. Cost this city's card*/
        Player &fly_direct(City city);
        /*Move from current city to any city. Cost current city's card*/
        Player &fly_shuttle(City city);
        /*Move to any other city that has a research lab, if current city has one.*/
        Player &fly_charter(City city);
        /*Builds a research lab in current city. Cost current city's card.*/
        void build();
        /*Discovers a cure to a given color type(doesn't have to be the same as city's). Player must have a research lab in current city.
         * Cost 5 city card of the same color.
         * Note: in case cure was already found, nothing will happen.*/
        void discover_cure(Color color);
        /*Lowers current city's disease level by one.
         * Note: in case cure was already found, this action will lower current city's disease level to 0.
         * Note: this action is illegal in case current city's disease level is 0. */
        Player &treat(City city);
        /*Returns this player role.*/
        string role(){return className;}
        /*Takes a given city's card to the player hand.
         * Note: each city has only one card.
         * Note: if player has this city's card, nothing will happen.*/
        Player &take_card(City city);
        /*Returns the city currently the player is at.*/
        City getCurrentCity();
        /*Returns the data about the given city in a container.*/
        CityContainer getCityContainer(City city);
        /*Return the board currently is played.*/
        Board getBoard();

    private:
        /*Set player's current city to the given one.*/
        void setCurrentCity(City city);
        /*Removes a card from card collection.*/
        void removeCard(City city);
        /*Returns whether the player has the given city card.*/
        bool hasCard(City city);
        /*Return whether the player has 5 card of the same given colors.*/
        bool hasFiveCards(Color color);
        /*Discard given city's card from player's hand.*/
        void discard(City city);
    };
}


#endif //EX4_A_PLAYER_HPP
