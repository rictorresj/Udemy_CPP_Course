#ifndef MOVIES_HPP
#define MOVIES_HPP
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "movie.hpp"

class movies
{
    
private:
    std::vector<std::string> names;
    std::vector<std::string> ratings;
    std::vector<int>      watchings;
   
public:
//movie mov(std::string n, std::string r, int w);

    // Add a movie


    void set_movie(std::string n, std::string r, int w) {
        
        movie mov(n, r, w);

        if(names.empty()){
            names.push_back(mov.get_name());
            ratings.push_back(mov.get_rating());
            watchings.push_back(mov.get_watched());
        } else {
            
            std::vector<std::string>::iterator it;
            it = std::find(names.begin(), names.end(), n);
            if(it!=names.end()){
                std::cout<<"Error: Movie "<< n <<" is already added"<<std::endl;
            }else{
                names.push_back(mov.get_name());
                ratings.push_back(mov.get_rating());
                watchings.push_back(mov.get_watched());
            }
        }
        }
    //void set_movie_watchcount(std::string name, int watched){
    void set_movie_watchcount(std::string name){
       
        std::vector<std::string>::iterator it;
        it = std::find(names.begin(), names.end(), name);
        
        if(it==names.end()){
            std::cout<<"Error: Movie "<< name <<" is not added"<<std::endl;
        }else{
            int index = it - names.begin();
            //watchings[index] = watched;
            watchings[index] = watchings[index] + 1;
        }
    }
    std::vector<std::string> get_names() {
        for (auto i: names)
            std::cout << i << ' ';
        std::cout << std::endl;
    }
    
    std::vector<int> get_watchings() {
        for (auto i: watchings)
            std::cout << std::to_string(i) << ' ';
    }

movies(){
    std::vector<std::string> names;
    std::vector<std::string> ratings;
    std::vector<int> watchings;
}

//movies(){
//movie mov
//}

};

#endif // MOVIES_HPP
