#include <iostream>

using namespace std;

void print(int *array, int arraysize);
int* apply_all(int *array1, int array1_size, int *array2, int array2_size);

int main() {

    const int array1_size {5};
    const int array2_size {3};
    
    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};
    
    cout << "array1"<<endl;
    print(array1,array1_size);
    
    cout << "array2"<<endl;
    print(array2,array2_size);
    
    int *results = apply_all(array1,array1_size,array2,array2_size);
    cout << "Result"<<endl;
    print(results,array1_size*array2_size);
    
    delete [] results;
    return 0;
}

void print(int *array, int arraysize){
    
    for(int n=0;n<arraysize;++n){
        cout << *(array+n)<<" ";
        }
        cout << endl;
    }

int* apply_all(int *array1, int array1_size, int *array2, int array2_size){
    
    //size_t size[array1_size*array2_size];
    int size{array1_size*array2_size};
    int k {0};
    //cout << size;
    
    int *ptr{nullptr};
    {
        
        ptr = new int[size];
        
        //cout << *ptr;
        
        for (int i = 0; i<array2_size;++i){
            for (int j=0; j<array1_size;++j){
                //cout << *(array1+j)<<endl;
                //cout << *(array2+i)<<endl;
                //cout << *(array1+j)*(*(array2+i))<<endl;
                *(ptr+k) =(*(array1+j))*(*(array2+i));
                k+=1;
                //cout << i<<endl;
                //cout << j<<endl;
                //cout << k<<endl;
                //cout << endl;
                }
            }

        }
    
    
    return ptr;
    delete [] ptr;
    }

