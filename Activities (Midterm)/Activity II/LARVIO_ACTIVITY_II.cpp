#include <iostream>
using namespace std;

int main(){
        cout << ("Enter score: ")<< endl;
        double score[10]; 
        double average;
        double sum=0;

        for(int x=0; x<10;x++){
          cout << ("Enter your score: ");
          cin >> score [x];
          sum += score[x];

        }
        average=sum/10;
         cout << "Average: " << average << endl;
    
}