//
// Created by stycks on 04/05/2021.
//

#ifndef EX4_A_CITYCONTAINER_HPP
#define EX4_A_CITYCONTAINER_HPP
#include "Color.hpp"
#include "Board.hpp"
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

namespace pandemic{
    class CityContainer {
        Color color;
        vector<City> connections;
        vector<City> cityCards;
        int diseaseLevel;
        bool researchLab;
        bool cureFounded;

    public:
        CityContainer(){}

        CityContainer(Color color,string cityName, int diseaseLevel=0, bool researchLab= false, City nei1=emptyCity, City nei2=emptyCity, City nei3=emptyCity, City nei4=emptyCity,
                      City nei5=emptyCity, City nei6=emptyCity) : color(color){
            if (nei1 != emptyCity) this->addConnection(nei1);
            if (nei2 != emptyCity)this->addConnection(nei2);
            if (nei3 != emptyCity)this->addConnection(nei3);
            if (nei4 != emptyCity)this->addConnection(nei4);
            if (nei5 != emptyCity)this->addConnection(nei5);
            if (nei6 != emptyCity)this->addConnection(nei6);
        }
        /*Returns whether this city is a neighbor or not.*/
        bool hasConnection(City city){
            if(find(connections.begin(), connections.end(),city ) != connections.end()){return true;}
                return false;
         }
         /*Returns this city color.*/
         Color getColor(){return color;}
         /*Returns whether the given city has a research lab or not.*/
         bool hasResearchLab(){return researchLab;}
        /*Builds research lab.*/
        void buildResearchLab(){researchLab = true;}
        /*Returns this city disease level.*/
        int getDiseaseLevel(){return diseaseLevel;}
        /*Lowers disease level by one. If is already zero, exception will be thrown.*/
        void lowerDiseaseLevel(){
            if(diseaseLevel == 0) { throw "Can't be below zero!";}
            diseaseLevel--;
        }
        /*Returns whether the city is cured or not.*/
        bool isCured(){return cureFounded;}


    private:
        /*Set this city disease level at the start of the game.*/
        void setDiseaseLevel(int level){diseaseLevel = level;}
        /*Connects between two neighbors.*/
        void addConnection(City neighbor){this->connections.push_back(neighbor);}
        /*Set this city as cured.*/
        void setCured(){ cureFounded = true;}
        friend class Board;
        friend class Player;
    };
}
#endif //EX4_A_CITYCONTAINER_HPP
