#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>
//#include <iostream>

//using namespace std;

class movie
{
private: 
    std::string name;
    std::string rating;
    int watched;

public:
    std::string get_name() {return name;}
    void set_name(std::string n) {name = n;}
    
    std::string get_rating() {return rating;}
    void set_rating(std::string r) {rating = r;}
    
    int get_watched() {return watched;}
    void set_watched(int w) {watched = w;}
    
    movie(){
        name = "empty";
        rating = "empty";
        watched = 0;
        }
    movie(std::string n, std::string r, int w){
        name = n;
        rating = r;
        watched =w;
    }
    ~movie();

};

#endif // MOVIE_HPP
