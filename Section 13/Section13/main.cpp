#include <iostream>
#include "movies.hpp"
using namespace std;

int main() {
    cout << "Default Project" << endl;
    movies cinema;
    cinema.set_movie("Molly","PG",1);
    cinema.set_movie("MEDICINE","PG-13",1);
    cinema.set_movie("MEDICINE","PG-13",1);
    cinema.get_names();
    //cinema.set_movie_watchcount("MEDICINE", 2);
    cinema.set_movie_watchcount("Molly");
    cinema.get_watchings();
    //cinema.get_names();
    cinema.set_movie_watchcount("BIG_ED");
    //cinema.get_watchings();
    return 0;
}