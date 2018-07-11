#include <iostream>

using namespace std;

//TODO: Define a structure for representing a player
<<<<<<< HEAD
struct player {
    string name;
    int column;
    int row;
};

||||||| merged common ancestors

=======
//TODO: Declare and define a function for creating a map
void map_create(int, int, char map[][100]);
>>>>>>> 894556a589f647986741e7bc5e7d846b3cddf5d8
//TODO: Declare and define a function for handling user's moves and updating his position on the map

//TODO: Declare and define a function for rendering a map
void rendering(int lenght, int wide, char map[][100]);

//TODO: Declare and define a function for initializing player's character



int main()
<<<<<<< HEAD
{   player main_player;
    cin>>main_player.name;
    cin>>main_player.column;
    cin>>main_player.row;


    //TODO: Define the two dimensional char array that represents the map
||||||| merged common ancestors
{   //TODO: Define the two dimensional char array that represents the map
=======
{   //TODO: Define the two dimensional char array that represents the map
    const int lenght=50, wide=100;
    char map[lenght][wide];
>>>>>>> 894556a589f647986741e7bc5e7d846b3cddf5d8
    //TODO: Figure out a way to display signs in color
<<<<<<< HEAD

    //TODO: Create a simple loop that will act as the game engine for now

||||||| merged common ancestors

    //TODO: Create a simple loop that will ac as the game engine for now

=======
    //TODO: Create a simple loop that will ac as the game engine for now
    map_create(lenght, wide, map);
    rendering(lenght,wide,map);
>>>>>>> 894556a589f647986741e7bc5e7d846b3cddf5d8
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
