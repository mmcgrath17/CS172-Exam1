//Matt McGrath
//CS172 Exam 1
//March 2, 2017
//I affirm that all code given below was written solely by me, Matt McGrath, and that any help I received adhered to the rules stated for this exam.

#include <string>
#include <iostream>

#include "Playlist.h"

int main()
{

	// make an array of songs
	static int numsongs = 9;
	Song songs[] = {
		Song("Human", "Rag'n'Bone Man", "ModernPop"),
		Song("Closer", "The Chainsmokers", "ModernPop"),
		Song("Chained To the Rhythm", "Katy Perry", "ModernPop"),
		Song("Smells Like Teen Spirit", "Nirvana", "Grunge"),
		Song("Black Hole Sun", "Soundgarden", "Grunge"),
		Song("Loser", "Beck", "Grunge"),
		Song("Elvis Presley Blues", "Gillian Welch", "Americana"),
		Song("Pirate's Gospel", "Alela Diane", "Americana"),
		Song("Come On Up To The House", "Sarah Jarosz", "Americana")
	};

	// Make the playlist
	Playlist playlist("iRandomMusic");
	for (int i = 0; i < numsongs; i++)
		playlist.addSong(songs[i]);

	int errors = 0;

	// Does the playlist have the correct number of songs?
	if (numsongs != playlist.numberOfSongs())
	{
		errors++;
		cout << "error: not counting songs correctly\n";
	}

	// Check the genre of one song
	if (playlist.playSong(2) == "")
	{
		errors++;
		cout << "error: title of the third song is incorrect\n";
	}

	if (playlist.playSong(10) != "")
	{
		errors++;
		cout << "error: index out of range not handled correctly\n";
	}

	// Check for a genre
	if (!playlist.hasGenre("Americana"))
	{
		errors++;
		cout << "error: search for genre is incorrect\n";
	}


	if (errors == 0) cout << "Passed\n";
	else cout << "Errors: " << errors << endl;

	return errors;

}

