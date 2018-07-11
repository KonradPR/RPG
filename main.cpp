#include <iostream>

using namespace std;

//TODO: Define a structure for representing a player

struct player {
    string name;
    int column;
    int row;
};




//TODO: Declare and define a function for creating a map
void map_create(int, int, char map[][100]);

//TODO: Declare and define a function for handling user's moves and updating his position on the map

//TODO: Declare and define a function for rendering a map
void rendering(int lenght, int wide, char map[][100]);

//TODO: Declare and define a function for initializing player's character



int main()
{   player main_player;
    cin>>main_player.name;
    cin>>main_player.column;
    cin>>main_player.row;


    //TODO: Define the two dimensional char array that represents the map

    const int lenght=50, wide=100;
    char map[lenght][wide];

    //TODO: Figure out a way to display signs in color



    //TODO: Create a simple loop that will ac as the game engine for now
    map_create(lenght, wide, map);
    rendering(lenght,wide,map);

    return 0;
}
void map_create(int lenght, int wide,char map[][100])
{
    for(int i=0; i<lenght; i++)
    {
        for(int i2=0; i2<wide-1; i2++)
        {
            if(i2==0)
            {
                map[i][i2]='x';
                continue;
            }
            if(i2%2!=0)
            {
                map[i][i2]=' ';
                continue;
            }
            if((i==0 || i==lenght-1) || (i2==0 || i2==wide-2))
               map[i][i2]='x';
            else
                map[i][i2]=' ';

        }
    }
}
void rendering(int lenght, int wide, char map[][100])
{
    for(int i=0;i<lenght;i++)
    {
        cout.write(map[i],wide-1);
        cout<<'\n';
    }
}
