//Matt McGrath
//CS172 Exam 1
//March 2, 2017
//I affirm that all code given below was written solely by me, Matt McGrath, and that any help I received adhered to the rules stated for this exam.

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"

class Playlist
{
private:
	string playlistName;
	Song list[9];

public:
	Playlist(string name)
	{
		playlistName = name;
	}
	string getName()
	{
		return playlistName;
	}
	bool hasGenre(string genre)
	{
		for (int i = 0; i < 9; i++)
		{
			if (list[i].getTitle().compare(genre) == 0) //gets the title from the song at index i of list
			{
				return true;
			}
		}
		return false;
	}
	void addSong(Song song)
	{
		int index = -1; //negative 1 so i can tell if it is full
		for (int i = 0; i < 9; i++)
		{
			if (list[i].getTitle().compare(" ")<0) //checks if the title is nothing
				index = i; //sets the index the first empty space
		}
		
		if (index == -1)
		{
			cout << "Array is full.\n";
		}
		else
			list[index] = song; //adds the song from the arguement into the first free space in the array
	}
	int numberOfSongs()
	{
		for (int i = 0; i < 9; i++)
		{
			if (list[i].getTitle().compare(" ")<0)
				return i; //returns the number of songs in the playlist, i is the first empty spot
		}
		return 9; //returns the size, since none are empty
	}
	string playSong(int songNumber)
	{
		return list[songNumber--].getTitle();
	}

};

#endif