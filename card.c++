// there is one student who plays card game,
// and there are 52 cards in the game, 
// if student have 5 cards, apply insertion sort
#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &cards){
    for(int i = 1; i<cards.size();i++){
        int key = cards[i];
        int j = i-1;
        while(j>=0 && cards[j]>key){
            cards[j+1] = cards[j];
            j--;
        }
        cards[j+1] = key;
    }
}
int main(){
    vector<int> cards = {9,5,2,1,3};
    insertionsort(cards);
    for(int i =0; i<cards.size();i++){
        cout<<cards[i]<<" ";
    }
    return 0;
}