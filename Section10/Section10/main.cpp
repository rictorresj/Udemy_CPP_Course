#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Default Project" << endl;
    
    string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string key ("XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr");
    
    cout << "Enter your secret message: " ;
    string secretmessage{};
    cin >> secretmessage;
    
    cout << secretmessage;
    
   // for(auto i:secretmessage){
   //     cout << i;
   // }
    string encryptedmessage {};
    for(auto i:secretmessage){
         //cout << secretmessage.find(i);
    //     cout << key.at(alphabet.find(i));
         encryptedmessage+=ked
    cout << encryptedmessage;
    
    string decryptedmessage{};
    for(auto i:encryptedmessage)
        decryptedmessage += alphabet.at(key.find(i));
    cout << decryptedmessage;
    
    return 0;
}