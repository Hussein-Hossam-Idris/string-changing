#include <iostream>
#include "recursive.h"
#include <string>
#include <string.h>
using namespace std;

//Takes an array of characters and a starting and ending points
//then it reverses it from start to finish
void switchArray(char arr[],int start,int End){
    if(start>=End){return;}
    else{
        swap(arr[start],arr[End]);
        return switchArray(arr,start+1,End-1);
    }
}
//reverses the order of a string using the switch array function
string reversOrder(string& str){
    int x =str.length();
    char arr[x];
    for(int i = 0 ; i <str.length();i++){
        arr[i]=str[i];
    }
    switchArray(arr,0,str.length()-1);
    for(int i = 0 ; i<x;i++){
        str[i]=arr[i];
    }

};

void firstPart(){
    string str;
    cout<<"Enter size of array"<<endl;
    int x ;
    cin>>x;
    char arr[x];
    cout<<"Enter elements of array"<<endl;
    for(int i = 0; i<x;i++){
        cin>>arr[i];
    }
    int s,e;
    cout << "please enter the starting and finishing index to be reversed ! " <<endl;
    cout <<"starting index : ";
    cin >> s;
    cout<< endl;
    cout<< "finishing index : ";
    cin >> e;
    while(e>=x){
        cout<<"bigger than size of array"<<endl;
        cin>>e;
    }
    cout <<endl;
    switchArray(arr,s,e);
    for(int i = 0 ; i < x;i++){
        cout<<arr[i]<<endl;
    }

}
void secondPart(){
    cout<<"Enter string"<<endl;
    string str;
    cin>>str;
    reversOrder(str);
    cout<<str<<endl;


}

