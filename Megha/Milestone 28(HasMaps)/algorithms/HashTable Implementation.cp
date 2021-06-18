#include <iostream>
#include<list>
#include<cstring>
using namespace std;

class HashTable{
    public:
    static const int hashGroups = 10;
    list<pair<int, string>> table[hashGroups];  //list 1,index 0, list 2,index 1......
    private:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, string value);
    void removeItem(int key);
    string SearchTable(int key);
    void printTable();
};

bool HashTable::isEmpty() const{
    int sum{};
    for(int i{};i<hashGroups;i++){
        sum += table[i].size();
    }
    if(!sum){
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key){
    return key%hashGroups; //key 905, in return this function will give 5
}

void HashTable::insertItem(int key,string value){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
        keyExists = true;
        bItr->second = value;
        cout<<"[Warning] key exists, Value replaced"<<endl;
        break;
        }
    }
    if(!keyExists){
        cell.emplace_back(key,value);
    }
    return;
}

void HashTable::removeItem(int key){
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
        keyExists = true;
        bItr = cell.erase(bItr);
        cout<<"[Info] pair removed"<<endl;
        break;
        }
    }
    if(!keyExists){
        cout<<"[Warning] key not found. Pair not removed."<<endl;
    }
    return;
}

void HashTable::printTable(){
    for(int i{};i<hashGroups;i++){
        if(table[i].size() == 0) continue;

        auto bItr = table[i].begin();
        for(;bItr != table[i].end();bItr++){
            cout<<"[Indo] key: "<<bItr->first<<" value: "<<bItr->second<<endl;
        }
    }
    return;
}

int main() {
    HashTable HT;

    if(HT.isEmpty()){
        cout<<"Correct answer";
    }
    else{
        cout<<"Wrong answer";
    }

    HT.insertItem(405, "a");
    HT.insertItem(201, "b");
    HT.insertItem(332, "c");
    HT.insertItem(124, "d");
    HT.insertItem(107, "e");
    HT.insertItem(929, "f");
    HT.insertItem(928, "g");
    HT.insertItem(928, "h");

    HT.printTable();

    HT.removeItem(332);
    HT.removeItem(100);

    if(HT.isEmpty()){
        cout<<"Wrong answer";
    }
    else{
        cout<<"Correct answer";
    }
    return 0;
}
