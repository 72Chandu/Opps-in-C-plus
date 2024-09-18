/*write a c++ program using array of object that store player name match played and run scored for given number of players involve member function 
to obtain player with maximum match played, maximum run scored and maximum average*/
#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int matchesPlayed;
    int runsScored;
public:
    Player() : matchesPlayed(0), runsScored(0) {}
    void setName(string playerName) {
        name = playerName;
    }
    void setMatchesPlayed(int matches) {
        matchesPlayed = matches;
    }
    void setRunsScored(int runs) {
        runsScored = runs;  
    }
    string getName() const {
        return name;
    }
    int getMatchesPlayed() const {
        return matchesPlayed;
    } 
    int getRunsScored() const {
        return runsScored;
    }
    double getAverage() const {
        if (matchesPlayed == 0)
            return 0;
        return static_cast<double>(runsScored) / matchesPlayed;
    }
};

int main() {
    int numPlayers;
    cout << "Enter the number of players: ";
    cin >> numPlayers;

    Player players[numPlayers];

    for (int i = 0; i < numPlayers; ++i) {
        string playerName;
        int matchesPlayed, runsScored;

        cout << "Enter player name: ";
        cin >> playerName;
        players[i].setName(playerName);

        cout << "Enter matches played by " << playerName << ": ";
        cin >> matchesPlayed;
        players[i].setMatchesPlayed(matchesPlayed);

        cout << "Enter runs scored by " << playerName << ": ";
        cin >> runsScored;
        players[i].setRunsScored(runsScored);
    }

    Player maxMatchesPlayer, maxRunsPlayer, maxAveragePlayer;

    for (int i = 0; i < numPlayers; ++i) {
        if (players[i].getMatchesPlayed() > maxMatchesPlayer.getMatchesPlayed()) {
            maxMatchesPlayer = players[i];
        }
        if (players[i].getRunsScored() > maxRunsPlayer.getRunsScored()) {
            maxRunsPlayer = players[i];
        }
        if (players[i].getAverage() > maxAveragePlayer.getAverage()) {
            maxAveragePlayer = players[i];
        }
    }

    cout << "Player with maximum matches played: " << maxMatchesPlayer.getName() << " (" << maxMatchesPlayer.getMatchesPlayed() << " matches)\n";
    cout << "Player with maximum runs scored: " << maxRunsPlayer.getName() << " (" << maxRunsPlayer.getRunsScored() << " runs)\n";
    cout << "Player with maximum average: " << maxAveragePlayer.getName() << " (" << maxAveragePlayer.getAverage() << " average)\n";

    return 0;
}

