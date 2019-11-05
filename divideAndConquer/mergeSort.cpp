#include<bits/stdc++.h>
#include<time.h>
#include<cstdlib>
using namespace std;


void display(int *arr,int Size){
    for(int i=0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr,int l ,int m ,int r){
    int i,j,k,nl,nr;
    nl = m-l+1;
    nr = r-m;
    int larr[nl],rarr[nr];
    for(i=0;i<nl;i++){
        larr[i] = arr[i+l];
    }
    for(j=0;j<nr;j++){
        rarr[j] = arr[j+1+m];
    }
    i = 0; j = 0; k = l;
    while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         arr[k] = larr[i];
         i++;
      }else{
         arr[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {
        arr[k] = larr[i];
        i++; k++;
   }
   while(j<nr) {
        arr[k] = rarr[j];
        j++; k++;
   }
}


void mergeSort(int *arr , int l, int r){
    int m;
     if(l < r) {
      int m = l+(r-l)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}
int main(){
    clock_t start ,ends;
    int n;
    cout << "Enter the number of elements: "<<endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) {
         arr[i] = rand()%100+1;
    }
    cout << "Array before Sorting: "<<endl;
    display(arr, n);
    start = clock();
    mergeSort(arr, 0, n-1);
    ends = clock();
    cout << "Array after Sorting: "<<endl;
    display(arr, n);
    cout<<"The Time Taken Was  ==>>"<<ends-start/CLK_TCK<<endl;
}
