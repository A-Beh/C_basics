
// Editted 2024.
// Map

#include <iostream>
#include <map>
#include <string>
#include <list>

using namespace std;

int main() {
    
//    map<string, string> my_dic;
//    my_dic.insert(pair<string, string>("apple","sib"));
//    my_dic.insert(pair<string, string>("strawberry","toot"));
//    my_dic.insert(pair<string, string>("orange","portugal"));
//    
//    for (auto key: my_dic){
//        cout<< key.first << " - " << key.second <<endl;
//        
//    }
    
    map <string, list<string>> pk;
    list<string> pk_1 {"num one", "num two", "num three"};
    list<string> pk_2 {"num 100", "num 200", "num 300"};
    
    pk.insert(pair<string, list<string>>("pk1_key", pk_1));
    pk.insert(pair<string, list<string>>("pk2_key", pk_2));
    
    
    for (auto key: pk){
        cout<< key.first<<endl;
        
        for (auto key2: key.second ){
            cout<< key2 <<", ";
        }
        cout<<endl;
    }
    
    return 0;
}

// Output:
// pk1_key
// num one, num two, num three, 
// pk2_key
// num 100, num 200, num 300, 