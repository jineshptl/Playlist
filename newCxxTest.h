//Copyright 2022
//
// Created by jinesh patel on 2/26/22.
//

#ifndef CH8_PLAYLIST_NEWCXXTEST_H
#define CH8_PLAYLIST_NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
#include "PlaylistNode.h"

class MyTestSuite1 : public CxxTest::TestSuite {
public:

    void test1() {
        PlaylistNode object;

        object.SetID("none");
        object.SetSongName("none");
        object.SetArtistName("none");
        object.SetSongLength(0);

        TS_ASSERT_EQUALS(object.GetID(), "none");
        TS_ASSERT_EQUALS(object.GetSongName(), "none");
        TS_ASSERT_EQUALS(object.GetArtistName(), "none");
        TS_ASSERT_EQUALS(object.GetSongLength(), 0);

        object.PrintPlaylistNode();

        PlaylistNode *obj = new PlaylistNode("123", "n", "n", 7);

        obj->SetID("123");
        obj->SetSongName("n");
        obj->SetArtistName("n");
        obj->SetSongLength(7);

        TS_ASSERT_EQUALS(obj->GetID(), "123");
        TS_ASSERT_EQUALS(obj->GetSongName(), "n");
        TS_ASSERT_EQUALS(obj->GetArtistName(), "n");
        TS_ASSERT_EQUALS(obj->GetSongLength(), 7);

        obj->PrintPlaylistNode();

        delete obj;
    }

    void test2() {
        PlaylistNode object;

        object.SetID("114");
        object.SetSongName("j");
        object.SetArtistName("j");
        object.SetSongLength(14);

        TS_ASSERT_EQUALS(object.GetID(), "114");
        TS_ASSERT_EQUALS(object.GetSongName(), "j");
        TS_ASSERT_EQUALS(object.GetArtistName(), "j");
        TS_ASSERT_EQUALS(object.GetSongLength(), 14);

        object.PrintPlaylistNode();


        PlaylistNode *obj = new PlaylistNode("123", "n", "n", 7);

        object.InsertAfter(obj);

        obj->SetID("123");
        obj->SetSongName("n");
        obj->SetArtistName("n");
        obj->SetSongLength(7);

        TS_ASSERT_EQUALS(obj->GetID(), "123");
        TS_ASSERT_EQUALS(obj->GetSongName(), "n");
        TS_ASSERT_EQUALS(obj->GetArtistName(), "n");
        TS_ASSERT_EQUALS(obj->GetSongLength(), 7);

        obj->PrintPlaylistNode();

        delete obj;

    }


    void test3 () {

        PlaylistNode object;

        object.SetID("114");
        object.SetSongName("j");
        object.SetArtistName("j");
        object.SetSongLength(14);

        TS_ASSERT_EQUALS(object.GetID(), "114");
        TS_ASSERT_EQUALS(object.GetSongName(), "j");
        TS_ASSERT_EQUALS(object.GetArtistName(), "j");
        TS_ASSERT_EQUALS(object.GetSongLength(), 14);

        object.PrintPlaylistNode();


        PlaylistNode *obj = new PlaylistNode("123", "n", "n", 7);

        object.GetNext();

        obj->SetID("123");
        obj->SetSongName("n");
        obj->SetArtistName("n");
        obj->SetSongLength(7);

        TS_ASSERT_EQUALS(obj->GetID(), "123");
        TS_ASSERT_EQUALS(obj->GetSongName(), "n");
        TS_ASSERT_EQUALS(obj->GetArtistName(), "n");
        TS_ASSERT_EQUALS(obj->GetSongLength(), 7);

        obj->PrintPlaylistNode();

        delete obj;

    }

    void test5 () {

        Playlist object1;
        object1.AddSong("a", "a", "a", 1); // adding song
        object1.AddSong("b", "b", "b", 2);
        object1.AddSong("c", "c", "c", 3);

        TS_ASSERT_EQUALS(object1.TotalTime(), 1); //testing add song and total time

        object1.ChangePosition(1, 2); //changing position
        TS_ASSERT_EQUALS(object1.TotalTime(), 1); //testing

        object1.RemoveSong("b"); //removing song
        TS_ASSERT_EQUALS(object1.TotalTime(), 1); //testing

        object1.SongsByArtist("a");
//        TS_ASSERT_EQUALS(object1.SongsByArtist(), "a");

        object1.PrintList();
    }

#endif //CH8_PLAYLIST_NEWCXXTEST_H
};
