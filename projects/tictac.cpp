#include<bits/stdc++.h>
using namespace std;

void draw (char move[]){
    cout<<"   |   |   "<<"\n";
    cout<<" "<<move[0]<<" | "<<move[1]<<" | "<<move[2]<<"\n";
    cout<<"___|___|___"<<"\n";
    cout<<"   |   |   "<<"\n";
    cout<<" "<<move[3]<<" | "<<move[4]<<" | "<<move[5]<<"\n";
    cout<<"___|___|___"<<"\n";
    cout<<"   |   |   "<<"\n";
    cout<<" "<<move[6]<<" | "<<move[7]<<" | "<<move[8]<<"\n";
    cout<<"   |   |   "<<"\n";
}
void playermove(char move[],char p){
    cout<<"write your move: ";
    int i;
    cin>>i;
    move[i-1] = p;
}
void computermove(char move[],int j,char c){
    move[j] = c;
}
char check(char move[], char p, char c) {
    int win_conditions[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, 
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, 
        {0, 4, 8}, {2, 4, 6}             
    };
    
    for(int i = 0; i < 8; i++) {
        int c0 = win_conditions[i][0];
        int c1 = win_conditions[i][1];
        int c2 = win_conditions[i][2];
        
        if(move[c0] != ' ' && move[c0] == move[c1] && move[c1] == move[c2]) {
            if(move[c0] == p) return p;
            if(move[c0] == c) return c;
        }
    }
    return '0'; 
}  

bool tie(char move[],char p,char c){
    for(int i=0;i<9;i++){
        if(move[i] == ' ') return false;
    }
    return true;
}

int main(){
    bool running = true;
    char move[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    draw(move);
    srand(time(0));

    while(running){
        playermove(move,player);
        cout<<"\n";
        draw(move);
        if(check(move,player,computer) == player){
            cout<<"you win"<<"\n";
            running = false;
            break;
        }

        if(tie(move, player, computer)) {
            cout << "It's a tie!" << "\n";
            running = false;
            break;
        }

        int j;

        do{
            j = rand()%9;
        }while(move[j] != ' ');
        computermove(move,j,computer);
        cout<<"\n";
        draw(move);
        if(check(move,player,computer) == computer){
            cout<<"you lose"<<"\n";
            running = false;
            break;
        }
        if(!check(move,player,computer)&&tie(move,player,computer)){
            cout<<"its a tie"<<"\n";
            running = false;
        }
    }
    
    return 0;
}
