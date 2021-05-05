//
// Created by stycks on 04/05/2021.
// 0,
#include "Board.hpp"

namespace pandemic{
    pandemic::Board::Board(){
        world[Atlanta] =CityContainer (Blue, 0, false,Chicago,Miami,Washington);
//        world[Chicago]=CityContainer(Blue, SanFrancisco,LosAngeles,MexicoCity,Atlanta,Montreal);
//        world[Essen]=CityContainer(Blue ,London,Paris,Milan,StPetersburg);
//        world[London]=CityContainer(Blue, NewYork,Madrid,Essen,Paris);
//        world[Madrid]=CityContainer(Blue,London,NewYork,Paris,SaoPaulo,Algiers);
//        world[Milan]=CityContainer(Blue,Essen,Paris,Istanbul);
//        world[Montreal]=CityContainer(Blue,Chicago,Washington,NewYork);
//        world[NewYork]=CityContainer(Blue, Montreal,Washington,London,Madrid);
//        world[Paris]=CityContainer(Blue,Algiers,Essen,Madrid,Milan,London);
//        world[SanFrancisco]=CityContainer(Blue,LosAngeles,Chicago,Tokyo,Manila);
//        world[StPetersburg]=CityContainer(Blue,Essen,Istanbul,Moscow);
//        world[Washington]=CityContainer(Blue,Atlanta,NewYork,Montreal,Miami);
//        //yellow cities
//        world[Bogota]=CityContainer(Yellow,MexicoCity,Lima,Miami,SaoPaulo,BuenosAires);
//        world[BuenosAires]=CityContainer(Yellow,Bogota,SaoPaulo);
//        world[Johannesburg]=CityContainer(Yellow,Kinshasa,Khartoum);
//        world[Khartoum]=CityContainer(Yellow,Lagos,Kinshasa,Johannesburg);
//        world[Kinshasa]=CityContainer(Yellow,Lagos,Khartoum,Johannesburg);
//        world[Lagos]=CityContainer(Yellow,SaoPaulo,Khartoum,Kinshasa);
//        world[Lima]=CityContainer(Yellow,MexicoCity,Bogota,Santiago);
//        world[LosAngeles]=CityContainer(Yellow,SanFrancisco,Chicago,MexicoCity,Sydney);
//        world[MexicoCity]=CityContainer(Yellow,LosAngeles,Chicago,Miami,Lima,Bogota);
//        world[Miami]=CityContainer(Yellow,Atlanta,MexicoCity,Washington,Bogota);
//        world[Santiago]=CityContainer(Yellow,Lima);
//        world[SaoPaulo]=CityContainer(Yellow,Bogota,BuenosAires,Lagos,Madrid);
//        //black cities
//        world[Algiers]=CityContainer(Black,Madrid,Paris,Istanbul,Cairo);
//        world[Baghdad]=CityContainer(Black,Tehran,Istanbul,Cairo,Riyadh,Karachi);
//        world[Cairo]=CityContainer(Black,Algiers,Istanbul,Baghdad,Khartoum,Riyadh);
//        world[Chennai]=CityContainer(Black,Mumbai,Delhi,Kolkata,Bangkok,Jakarta);
//        world[Delhi]=CityContainer(Black,Tehran,Karachi,Mumbai,Chennai,Kolkata);
//        world[Istanbul]=CityContainer(Black,Milan,Algiers,StPetersburg,Cairo,Baghdad,Moscow);
//        world[Karachi]=CityContainer(Black,Tehran,Baghdad,Riyadh,Mumbai,Delhi);
//        world[Kolkata]=CityContainer(Black,Delhi,Chennai,Bangkok,HongKong);
//        world[Moscow]=CityContainer(Black,StPetersburg,Istanbul,Tehran);
//        world[Mumbai]=CityContainer(Black,Karachi,Delhi,Chennai);
//        world[Riyadh]=CityContainer(Black,Baghdad,Cairo,Karachi);
//        world[Tehran]=CityContainer(Black,Baghdad,Moscow,Karachi,Delhi);
//        //red cities
//        world[Bangkok]=CityContainer(Red,Kolkata,Chennai,Jakarta,HoChiMinhCity,HongKong);
//        world[Beijing]=CityContainer(Red,Shanghai,Seoul);
//        world[HoChiMinhCity]=CityContainer(Red,Jakarta,Bangkok,HongKong,Manila);
//        world[HongKong]=CityContainer(Red,Bangkok,Kolkata,HoChiMinhCity,Shanghai,Manila,Taipei);
//        world[Jakarta]=CityContainer(Red,Chennai,Bangkok,HoChiMinhCity,Sydney);
//        world[Manila]=CityContainer(Red,Taipei,SanFrancisco,HoChiMinhCity,Sydney);
//        world[Osaka]=CityContainer(Red,Taipei,Tokyo);
//        world[Seoul]=CityContainer(Red,Beijing,Shanghai,Tokyo);
//        world[Shanghai]=CityContainer(Red,Beijing,HongKong,Taipei,Seoul,Tokyo);
//        world[Sydney]=CityContainer(Red,Jakarta,Manila,LosAngeles);
//        world[Taipei]=CityContainer(Red,Shanghai,HongKong,Osaka,Manila);
//        world[Tokyo]=CityContainer(Red,Seoul,Shanghai,Osaka,SanFrancisco);
    }

    int& pandemic::Board::operator[](City c) {
        return world[c].diseaseLevel;
    }

    const CityContainer pandemic::Board::getCityContainer(City city){
        return this->world.at(city);
    }

    bool pandemic::Board::is_clean(){
        for(auto  &pair: world){
            CityContainer cc = pair.second;
            if(cc.getDiseaseLevel() != 0){
               return false;
            }
        }
        return true;
    }

    ostream &operator<<(ostream &os, const Board &b){
        for(auto& pair: b.world){
            os << b.cityToString(pair.first) << endl;
        }
        return os;
    }

    std::string pandemic::Board::cityToString(const City c) const{
        if(c == Atlanta) return "Atlanta";
        if(c == Chicago) return "Chicago";
        if(c == Essen) return "Essen";
        if(c == London) return "London";
        if(c == Madrid) return "Madrid";
        if(c == Milan) return "Milan";
        if(c == Montreal) return "Montreal";
        if(c == NewYork) return "NewYork";
        if(c == Paris) return "Paris";
        if(c == SanFrancisco) return "SanFrancisco";
        if(c == StPetersburg) return "StPetersburg";
        if(c == Washington) return "Washington";
        if(c == Bangkok) return "Bangkok";
        if(c == Beijing) return "Beijing";
        if(c == HoChiMinhCity) return "HoChiMinhCity";
        if(c == HongKong) return "HongKong";
        if(c == Jakarta) return "Jakarta";
        if(c == Manila) return "Manila";
        if(c == Osaka) return "Osaka";
        if(c == Seoul) return "Seoul";
        if(c == Shanghai) return "Shanghai";
        if(c == Sydney) return "Sydney";
        if(c == Taipei) return "Taipei";
        if(c == Tokyo) return "Tokyo";
        if(c == Algiers) return "Algiers";
        if(c == Baghdad) return "Baghdad";
        if(c == Cairo) return "Cairo";
        if(c == Chennai) return "Chennai";
        if(c == Delhi) return "Delhi";
        if(c == Istanbul) return "Istanbul";
        if(c == Karachi) return "Karachi";
        if(c == Kolkata) return "Kolkata";
        if(c == Moscow) return "Moscow";
        if(c == Mumbai) return "Mumbai";
        if(c == Riyadh) return "Riyadh";
        if(c == Tehran) return "Tehran";
        if(c == Bogota) return "Bogota";
        if(c == BuenosAires) return "BuenosAires";
        if(c == Johannesburg) return "Johannesburg";
        if(c == Khartoum) return "Khartoum";
        if(c == Kinshasa) return "Kinshasa";
        if(c == Lagos) return "Lagos";
        if(c == Lima) return "Lima";
        if(c == LosAngeles) return "LosAngeles";
        if(c == MexicoCity) return "MexicoCity";
        if(c == Miami) return "Miami";
        if(c == Santiago) return "Santiago";
        if(c == SaoPaulo) return "SaoPaulo";
        return "Fail";
    }

    std::string pandemic::Board::colorToEnum(const Color color) const{
        if(color == Blue) return "Blue";
        if(color == Red) return "Red";
        if(color == Black) return "Black";
        if(color == Yellow) return "Yellow";
        return "Fail";
    }


}