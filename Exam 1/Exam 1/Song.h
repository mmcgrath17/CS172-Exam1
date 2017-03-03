//Matt McGrath
//CS172 Exam 1
//March 2, 2017
//I affirm that all code given below was written solely by me, Matt McGrath, and that any help I received adhered to the rules stated for this exam.

#ifndef SONG_H
#define SONG_H
#include <string>
#include <iostream>
using namespace std;

class Song
{
private:
	string songTitle, songArtist, songGenre;
public:
	Song() //no arguement constructor makes blank song object
	{
		songTitle = "";
		songArtist = "";
		songGenre = "";
	}

	Song(string title, string artist, string genre) //makes a song object with the respective arguements
	{
		songTitle = title;
		songArtist = artist;
		songGenre = genre;
	}
	string getTitle() const //returns the song title
	{
		return songTitle;
	}

	string getArtist() const //returns the song artist
	{
		return songArtist;
	}

	string getGenre() const //returns the song genre
	{
		return songGenre;
	}

	bool isOfGenre(string genre)
	{
		if (genre.compare(songGenre)==0) //compares whether or not the strings are equal, 0 corresponds to equal
		{
			return true;
		}
		else return false;
	}

};
#endif;