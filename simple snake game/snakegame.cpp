#include<bits/stdc++.h>
using namespace std;
bool gameover;
const int width=20;
const int height =20;
int x, y,fruitx, fruity, score;
enum edirection{ stop =0, left, right, up,down };
edirection dir;

void setup(){
   gameover  = false;
   dir = stop;
   x= width /2;
   y =height /2;
   fruitx =rand()% width;
   fruity =rand()% height;
   score =0;
}
void draw(){
    system("cls");

    for(int i=0; i<width; i++){
        cout<<"#";
    }
    for(int i=0; i<height ; i++){
        for(int j= 0; j<width; j++){
            if(j == 0){
                cout<<"#";

            }
            if(i== y && j== x){
                cout<<"0";
            }else if(i == fruity && j== fruitx){
                    cout<<"f";
                }
                else
                cout<<" ";

            }if(j == width -1){
                cout<<" #";
            }

        }
        cout<<endl;
    }

    for(int i=0; i<width; i++){
        cout<<"#";
        cout<<endl;
    }


}
void input(){

}
void logic(){

}

int main(){ 
    setup();
    while(!gameover){
        draw();
        input();
        logic();


        //sleep (10); sleep (10);
    }

}