// Header files section
#include "PlaylistNode.h"

void PrintMenu(string title) {

        cout << endl << title << " PLAYLIST MENU" << endl;
        cout << "a - Add song" << endl;
        cout << "d - Remove song" << endl;
        cout << "c - Change position of song" << endl;
        cout << "s - Output songs by specific artist" << endl;
        cout << "t - Output total time of playlist (in seconds)" << endl;
        cout << "o - Output full playlist" << endl;
        cout << "q - Quit" << endl << endl;

        cout << "Choose an option:" << endl;

}


// function prototype
PlaylistNode* ExecuteMenu(char choice, string playlistTitle, PlaylistNode* headNode) {
    /* Type your code here */

    Playlist list;
    string id;
    string sname;
    string aname;
    int length;
    int oldPos;
    int newPos;

    if (choice == 'q' || choice == 'Q')
    {
        exit(1);
    }
    else if (choice == 'a' || choice == 'A')
    {
        cout << "\nADD SONG" << endl;
        cout << "Enter song's unique ID:" << endl;
        cin >> id;
        cin.ignore();//ignore newline
        cout << "Enter song's name:" << endl;
        getline(cin, sname);
        cout << "Enter artist's name:" << endl;
        getline(cin, aname);
        cout << "Enter song's length (in seconds):" << endl;
        cin >> length;
        list.AddSong(id, sname, aname, length);
    }
    else if (choice == 'd' || choice == 'D')
    {
        cout << "\nREMOVE SONG" << endl;
        cout << "Enter song's unique ID:" << endl;
        cin >> id;
        list.RemoveSong(id);
    }
    else if (choice == 'c' || choice == 'C')
    {
        cout << "\nCHANGE POSITION OF SONG" << endl;
        cout << "Enter song's current position:" << endl;
        cin >> oldPos;
        cout << "Enter new position for song:" << endl;
        cin >> newPos;
        list.ChangePosition(oldPos, newPos);
    }
    else if (choice == 's' || choice == 'S')
    {
        cout << "\nOUTPUT SONGS BY SPECIFIC ARTIST" << endl;
        cout << "Enter artist's name:" << endl;
        getline(cin, aname);
        list.SongsByArtist(aname);
    }
    else if (choice == 't' || choice == 'T')
    {
        cout << "\nOUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
        cout << "Total time: " << list.TotalTime() << " seconds" << endl;
    }
    else if (choice == 'o' || choice == 'O')
    {
        cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
        list.PrintList();
    }
    else
    {
        cout << "Invalid menu choice! Please try again." << endl;
    }
    return headNode;
}




// start main function
int main() {
    string plTitle;
    char menu = 'x';

    PlaylistNode *headnode;

    cout << "Enter playlist's title:" << endl;
    getline(cin, plTitle);


    while (menu != 'q') {
        PrintMenu(plTitle);
        cin>>menu;
        if (menu == 'a' || menu == 'c' || menu == 'd' || menu == 'i' || menu == 'o') {
            ExecuteMenu(menu, plTitle, headnode);
        }

    }

    return 0;

// PrintMenu function implementation
// PrintMenu() takes the playlist title as a parameter and outputs a menu
// of options to manipulate the playlist. Each option is represented by a
// single character. Build and output the menu within the function.
}