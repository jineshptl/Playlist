//Copyright 2022
//
// Created by jinesh patel on 2/24/22.
//

#ifndef CH8_PLAYLIST_PLAYLISTNODE_H
#define CH8_PLAYLIST_PLAYLISTNODE_H

#include <iostream>
#include <string>

#include <iostream>
#include <string>
using namespace std;

/** PlaylistNode class specifications **/
class PlaylistNode
{
public:
    PlaylistNode();
    PlaylistNode(string id, string songname, string artist, int length);
    void InsertAfter(PlaylistNode* ptr);
    void SetNext(PlaylistNode* ptr);
    string GetID();
    string GetSongName();
    string GetArtistName();
    int GetSongLength();
    PlaylistNode* GetNext();
    void PrintPlaylistNode();

    void SetID (std:: string ID);
    void SetSongName(std:: string Name);
    void SetArtistName (std:: string Artist);
    void SetSongLength (int length);


private:
    string uniqueID;
    string songName;
    string artistName;
    int songLength;
    PlaylistNode* nextNodePtr;
};

/** Playlist class specifications **/
class Playlist
{
private:
    PlaylistNode *head;
    PlaylistNode *tail;

public:
    Playlist();
    void AddSong(string id, string songname, string artistname, int length);
    bool RemoveSong(string id);
    void PrintList();
    bool ChangePosition(int oldPos, int newPos);
    void SongsByArtist(string artist);
    int TotalTime();
};

#endif //CH8_PLAYLIST_PLAYLISTNODE_H
