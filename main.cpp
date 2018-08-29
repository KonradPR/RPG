#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <conio.h>
using namespace std;

//TODO: Define a class for representing a player

class player
{
    public:
    string name;
    int column;
    int row;
    //TODO: Declare and define a function for handling user's moves and updating his position on the map
    void map_position(int &pos_x, int &pos_y, char map[][100], char map_help[]);
};

//TODO: Declare player's object
player player_1;



//TODO: Declare and define a function for creating a map
void map_create(int, int, char map[][100]);




//TODO: Declare and define a function for rendering a map
void rendering(int lenght, int wide, char map[][100]);

//TODO: Declare and define a function for initializing player's character



int main()
{
    cin>>player_1.name;
    cin>>player_1.column;
    cin>>player_1.row;


    //TODO: Declare and define starting player's position
    int pos_x=1,pos_y=1;
    //TODO: Define the two dimensional char array that represents the map

    const int lenght=50, wide=100;
    char map[lenght][wide];
    char map_help[4];
    map_help[1]=' ';

    //TODO: Figure out a way to display signs in color



    //TODO: Create a simple loop that will ac as the game engine for now
    map_create(lenght, wide, map);
    rendering(lenght,wide,map);
    while(true)
    {
        player_1.map_position(pos_x, pos_y, map, map_help);
        system( "cls");
        rendering(lenght,wide,map);
    }


    return 0;
}
//*******************************************************************
void map_create(int lenght, int wide,char map[][100])
{
     map[2][2]='o';
    for(int i=0; i<lenght; i++)
    {

        for(int i2=0; i2<wide-1; i2++)
        {

            if(i2==0)
            {
                map[i][i2]='=';

            }
             if(i2%2!=0 && (i==0 || i==lenght-1))
            {
                map[i][i2]='=';
                continue;
            }
            if(i2%2!=0)
            {
                map[i][i2]=' ';
                continue;
            }
            if((i==0 || i==lenght-1))
               map[i][i2]='=';
            else
                map[i][i2]=' ';
            if(i2==0 || i2==wide-2)
                map[i][i2]='|';


        }


    }
    //Some testing textures bellow
    map[1][1]='X';
    map[1][2]='a';
    map[1][3]='b';

}
//*************************************************************
void rendering(int lenght, int wide, char map[][100])
{
   for(int i=0,i2=0;i<lenght;i++,i2++)
    {

        cout.write(map[i],wide-1);
        cout<<'\n';

    }
}
//*************************************************************************
void player::map_position(int &pos_x, int &pos_y, char map[][100], char map_help[])
{
    char movement;
    movement = _getch();
    switch(movement)
        {
        case 'd':
            if(map[pos_y][pos_x+1]=='=' || map[pos_y][pos_x+1]=='|')
            {
                break;
            }
            map_help[2]=map[pos_y][pos_x];
            if(map_help[1]==' ')
            {
                map[pos_y][pos_x]=' ';
                map_help[1]='Z';
            }
            else
            {
                map[pos_y][pos_x]=map_help[3];
            }
            map_help[3]=map[pos_y][pos_x+1];
            map[pos_y][pos_x+1]=map_help[2];
            pos_x=pos_x+1;
           break;
        case 'a':
            if(map[pos_y][pos_x-1]=='=' || map[pos_y][pos_x-1]=='|')
            {
                break;
            }
           map_help[2]=map[pos_y][pos_x];
            if(map_help[1]==' ')
            {
            map[pos_y][pos_x]=' ';
            map_help[1]='Z';
            }
            else
            {
                map[pos_y][pos_x]=map_help[3];
            }
            map_help[3]=map[pos_y][pos_x-1];
            map[pos_y][pos_x-1]=map_help[2];


           pos_x=pos_x-1;
           break;
        case 'w':
            if(map[pos_y-1][pos_x]=='=' || map[pos_y-1][pos_x]=='|')
            {
                break;
            }
          map_help[2]=map[pos_y][pos_x];
            if(map_help[1]==' ')
            {
            map[pos_y][pos_x]=' ';
            map_help[1]='Z';
            }
            else
            {
                map[pos_y][pos_x]=map_help[3];
            }
            map_help[3]=map[pos_y-1][pos_x];
            map[pos_y-1][pos_x]=map_help[2];


           pos_y=pos_y-1;
           break;
        case 's':
            if(map[pos_y+1][pos_x]=='=' || map[pos_y+1][pos_x]=='|')
            {
                break;
            }
           map_help[2]=map[pos_y][pos_x];
            if(map_help[1]==' ')
            {
            map[pos_y][pos_x]=' ';
            map_help[1]='Z';
            }
            else
            {
                map[pos_y][pos_x]=map_help[3];
            }
            map_help[3]=map[pos_y+1][pos_x];
            map[pos_y+1][pos_x]=map_help[2];


           pos_y=pos_y+1;
           break;
        default:
            break;
        }
}

