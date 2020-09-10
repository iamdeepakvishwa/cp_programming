// WAP to search insert delete from 1000 keys indexed from 0 to 999
#include<bits/stdc++.h>
using namespace std;

bool arr[1000] = {0};

void insert(int x){
    arr[x] = 1;
}

void search(int x){
    return arr[x] ? 1: 0;
}

void delete(int x){
    arr[x] =0;
}

int main(){
    insert(10);
    insert(19);
    search(19) ; // Returns True
}
