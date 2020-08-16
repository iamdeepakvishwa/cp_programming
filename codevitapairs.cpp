#include<bits/stdc++.h>
using namespace std;

int main(){
    string num[] = {"zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",  "fourteen", "fifteen", "sixteen", "seventeen", "eighteen" , "nineteen" ,"twenty", "twentyone", "twentytwo", "twentythree","twentyfour","twentyfive","twentysix","twentyseven","twentyeight","twentynine","thirty","thirtyone","thirtytwo","thirtythree","thirtyfour","thirtyfive","thirtysix","thirtyseven","thirtyeight", "thirtynine","forty","fortyone", "fortytwo", "fortythree","fortyfour", "fortyfive", "fortysix", "fortyseven",  "fortyeight",  "fortynine", "fifty", "fiftyone", "fiftytwo",  "fiftythree", "fiftyfour",  "fiftyfive", "fiftysix", "fiftyseven", "fiftyeight","fiftynine", "sixty", "sixtyone",  "sixtytwo", "sixtythree", "sixtyfour",  "sixtyfive", "sixtysix", "sixtyseven", "sixtyeight", "sixtynine", "seventy", "seventyone", "seventytwo", "seventythree", "seventyfour","seventyfive","seventysix","seventyseven", "seventyeight","seventynine", "eighty", "eightyone",  "eightytwo", "eightythree","eightyfour","eightyfive","eightysix","eightyseven", "eightyeight","eightynine", "ninety", "ninetyone", "ninetytwo", "ninetythree","ninetyfour", "ninetyfive","ninetysix","ninetyseven", "ninetyeight", "ninetynine", "hundred"};


    int n;
    cin>>n;
    int arr[n],vowel_count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        string number = num[arr[i]];
        int x = number.length();
        for(int j=0;j<x;j++){
            if(number[j] == 'a' || number[j] == 'e' || number[j] == 'i' || number[j] == 'o' || number[j] == 'u'){
                vowel_count +=1;
            }
        }
    }
    int count = 0;
    while(n){
        int diff = vowel_count - arr[n-1];
        for(int p = 0;p<n-1;p++){
            if(arr[p] == diff){
                count++;
            }
        }
        n--;
    }
    if(count>100){
        cout<<"greater 100";
    }else{
        cout<<num[count];
    }
}
