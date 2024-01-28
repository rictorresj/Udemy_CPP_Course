#include <iostream>
#include <vector>
#include <climits>
#include <ctype.h>
using namespace std;

char menu_display();
// P - Print numbers
void print_numbers(vector<int> &vec); 
    // A - Add a number
void Add_numbers(vector<int> &vec);
    // M - Display the mean of the inputted numbers
void mean_numbers(vector<int> &vec);
    // S  - Display the smallest of the inputted numbers
void small_numbers(vector<int> &vec);
    // L - Display the largest of the inputted numbers
void large_numbers(vector<int> &vec);

int main() {
    cout << "Default Project" << endl;
    //while (Not quit)
    //Display menu
    // menu option
    // P - Print numbers
    // A - Add a number
    // M - Display the mean of the inputted numbers
    // S  - Display the smallest of the inputted numbers
    // L - Display the largest of the inputted numbers
    // Q - Quit
    // Note: must reject invalid menu options
    // Note: does it need to only accept numbers
    // Note: mean is a double not an integer
    // Note: do while is the most efficient for menus
    
    char selection {};
    vector<int> vec;
    do{
        
        selection = menu_display();
        
        switch(selection)
        {
          case 'P':
          {
              print_numbers(vec); 
                break;
          
          }
            
          case 'A':
          {
                Add_numbers(vec);

                break;
          }
            
             case 'M':
             {
                mean_numbers(vec);
/*                cout << "You chose M" << endl;
                double vec_average {};
                double vec_sum {};
                for(int i : vec)
                    {
                        vec_sum = i + vec_sum; 
                    }
                vec_average = vec_sum/vec.size();
                cout << vec_average << endl;*/
                break;
                
             }
            
             case 'S':
             {
                 small_numbers(vec);
//                 cout << "You chose S" << endl;
//                int smallestnumber {INT_MAX};
//                for(int i : vec)
//                    {
//                        if(i <= smallestnumber)
//                            {
//                                smallestnumber = i;
//                            }
//                    }
//                    cout << smallestnumber << endl;
                    break;
                    
             }
            
             case 'L':
             {
                 small_numbers(vec);
                 
/*                cout << "You chose L" << endl;
                int Largestnumber {INT_MIN};
                for(int i : vec)
                    {
                        if(i >= Largestnumber)
                            {
                                Largestnumber = i;
                            }
                    }
                    cout << Largestnumber << endl;*/
                    break;
             }
            
             case 'Q':
             {
                cout << "Goodbye" << endl;
                break;
             }
            
          default:
          {
          cout << "unknown option -- try again" << endl;
          }
        }
        /*
        if (selection == 'P' or selection == 'p'){
            //cout << "You chose P" << endl;
            if (vec.size() == 0){
                cout << "[ ]" << endl;
                //cout <<  vec.size() << endl;
            }else{
                //cout <<  vec.size() << endl;
                //cout << "vec" << endl;
                cout << "[ ";
                for(int i : vec)
                {
                    cout<< i << "  ";
                    }
                cout << "]";
            }
        }else if (selection == 'A' or selection == 'a')
            {
            //cout << "You chose A" << endl;
            cout << "Input an integer and press enter" << endl;
            int addednumber {};
            cin >> addednumber;
            vec.push_back(addednumber);
            //cout << vec.size() << endl;
        }
        else if (selection == 'M' or selection == 'm')
            {
            cout << "You chose M" << endl;
            double vec_average {};
            double vec_sum {};
            for(int i : vec)
                {
                    vec_sum = i + vec_sum; 
                }
            vec_average = vec_sum/vec.size();
            cout << vec_average << endl;
            
        }
        else if (selection == 'S' or selection == 's')
            {
            cout << "You chose S" << endl;
            int smallestnumber {INT_MAX};
            for(int i : vec)
                {
                    if(i <= smallestnumber)
                        {
                            smallestnumber = i;
                        }
                }
                cout << smallestnumber << endl;
        }
        else if (selection == 'L' or selection == 'l')
            {
            cout << "You chose P" << endl;
            int Largestnumber {INT_MIN};
            for(int i : vec)
                {
                    if(i >= Largestnumber)
                        {
                            Largestnumber = i;
                        }
                }
                cout << Largestnumber << endl;
        }
        else if (selection == 'Q' or selection == 'q')
            {
            cout << "Goodbye" << endl;
        }
        else{
             cout << "unknown option -- try again" << endl;
        }    */
        
    }while(selection != 'Q');
    
    
    return 0;
}

char menu_display(){
        char selection {};
        cout << "\n---------------------------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean of the inputted numbers" << endl;
        cout << "S - Display the smallest of the inputted numbers" << endl;
        cout << "L - Display the largest of the inputted numbers" << endl;
        cout << "Q - Quit" << endl;
        cout << "\n---------------------------------------------------" << endl;
        cout << "\nEnter your selection" << endl;
        cout << "\n---------------------------------------------------" << endl;
        cin >> selection;
        //selection = toupper(selection);
        return selection;
}

void  print_numbers(vector<int> &vec){
                if (vec.size() == 0)
                {
                cout << "[ ]" << endl;
                }
                else
                {
                    //cout <<  vec.size() << endl;
                    //cout << "vec" << endl;
                    cout << "[ ";
                    for(int i : vec)
                    {
                        cout<< i << "  ";
                    }
                    cout << "]";
                }
}

void Add_numbers(vector<int> &vec){
                cout << "Input an integer and press enter" << endl;
                int addednumber {};
                cin >> addednumber;
                vec.push_back(addednumber);
    }
    
void mean_numbers(vector<int> &vec){
                cout << "You chose M" << endl;
                double vec_average {};
                double vec_sum {};
                for(int i : vec)
                    {
                        vec_sum = i + vec_sum; 
                    }
                vec_average = vec_sum/vec.size();
                cout << vec_average << endl;
}
void small_numbers(vector<int> &vec){
                cout << "You chose S" << endl;
                int smallestnumber {INT_MAX};
                for(int i : vec)
                    {
                        if(i <= smallestnumber)
                            {
                                smallestnumber = i;
                            }
                    }
                    cout << smallestnumber << endl;
}

void large_numbers(vector<int> &vec){
                cout << "You chose P" << endl;
                int Largestnumber {INT_MIN};
                for(int i : vec)
                    {
                        if(i >= Largestnumber)
                            {
                                Largestnumber = i;
                            }
                    }
                    cout << Largestnumber << endl;
}