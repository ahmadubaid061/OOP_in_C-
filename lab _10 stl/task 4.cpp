#include <iostream>
#include <list>
#include <forward_list>
#include <string>
#include <algorithm>
using namespace std;
void addRecentlyPlayed(forward_list<string>& recent, const string& song) {
    recent.push_front(song);
    int count = 0;
    auto it = recent.before_begin();

    for (auto &x : recent) {
        count++;
        if (count > 5) break;
        ++it;
    }

    if (count > 5) {
        recent.erase_after(it);
    }
}
int main() {
    list<string> playlist;
    forward_list<string> recentlyPlayed;
    int choice;

    do {
        cout << "\n--- Music Playlist Menu ---\n";
        cout << "1. Add Song to Playlist\n";
        cout << "2. Play a Song\n";
        cout << "3. Remove a Song from Playlist\n";
        cout << "4. Display Playlist\n";
        cout << "5. Display Recently Played Songs\n";
        cout << "6. Sort Playlist by Title\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            string song;
            cout << "Enter song title: ";
            getline(cin, song);
            playlist.push_back(song);
            cout << "Song added.\n";
        }
        else if (choice == 2) {
            string song;
            cout << "Enter song title to play: ";
            getline(cin, song);

            auto it = find(playlist.begin(), playlist.end(), song);

            if (it != playlist.end()) {
                cout << "Playing: " << song << endl;
                addRecentlyPlayed(recentlyPlayed, song);
            } else {
                cout << "Song not found in playlist.\n";
            }
        }
        else if (choice == 3) {
            string song;
            cout << "Enter song title to remove: ";
            getline(cin, song);

            playlist.remove(song);
            cout << "Song removed (if it existed).\n";
        }
        else if (choice == 4) {
            cout << "\n--- Playlist ---\n";
            if (playlist.empty()) cout << "Playlist is empty.\n";
            else {
                for (auto &s : playlist) {
                    cout << s << endl;
                }
            }
        }
        else if (choice == 5) {
            cout << "\n--- Recently Played Songs (Max 5) ---\n";
            if (recentlyPlayed.empty()) cout << "No recent songs.\n";
            else {
                for (auto &s : recentlyPlayed) {
                    cout << s << endl;
                }
            }
        }
        else if (choice == 6) {
            playlist.sort();
            cout << "Playlist sorted.\n";
        }

    } while (choice != 0);

    cout << "Exiting program.\n";
    return 0;
}

