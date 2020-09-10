// how to implement chaining in case of occurrence of a collision.

#include<bits/stdc++.h>
using namespace std;

struct myHash {
    int Bucket;
    list<int> *table;
    myHash(int b){
        Bucket = b;
        table = new list<int>[b];
    }
    bool search (int key){
        int i = key % Bucket;
        for(auto x: table[i]){
            if(x == i){
                return true;
            }
        }
        return false;
    }
    void delete(int key){
        int i = key % Bucket;
        table[i].remove(key);
    }
    void insert(int key){
        int i = key % Bucket ;
        table[i].push_back(key);
    }
}

int main()
