#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Insert String for string pyramind" << endl;
    string stringpyramidblocks {};
    cin >> stringpyramidblocks;
    cout << "-----------------\n" << endl;
 
    string stringpyramidspacer (" ");

    for (int i = 0 ; i < stringpyramidblocks.length(); i++){
       cout << endl;
        for (int k = 0 ; k < stringpyramidblocks.length()-i; k++){
                cout << stringpyramidspacer;
        }
        for (int j = 0 ; j < stringpyramidblocks.length()-(stringpyramidblocks.length()-1)+i; j++){
            cout << stringpyramidblocks.at(j);
        }
        if (i != 0){
            for (int l = 1 ; l < stringpyramidblocks.length()-(stringpyramidblocks.length()-1)+i; l++){
                cout << stringpyramidblocks.at(i-l);
            }
        
        }
    }
    
    return 0;
}