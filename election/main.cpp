/*an election is contested by 5 candidate . the candidate are numbered 1 to 5 and the voting is done by the marking the candidate
number in the ballot paper . create a class BallotBox to read the ballot and the count the votes cast for each candidate using an array variable count
in case a number read is outside the range 1to 5 the ballot should be considered as "spoilt ballot" and the program should also count the number of spoilt*/
#include<iostream>
using namespace std;
class BallotBox{
private:
     int count[5];
     int spoiltBallotCount;
public:
    BallotBox(){
        for(int i=0;i<5;i++){
            count[i]=0;
        }
        spoiltBallotCount=0;
    }
    void readBallot(int candidate_no){
        if(candidate_no>=1 && candidate_no<=5){
            count[candidate_no-1]++;
        }
        else{
            spoiltBallotCount++;
        }
    }
    void display_count(){
        cout<<"Vote count:"<<endl;
        for(int i=0;i<5;i++){
            cout<<"candidate "<<(i+1)<<": "<<count[i]<<endl;
        }
        cout<<"spoilt Ballots: "<<spoiltBallotCount<<endl;
    }
};
int main(){
    BallotBox box;
    box.readBallot(1);
    box.readBallot(3);
    box.readBallot(2);
    box.readBallot(8);
    box.readBallot(7);
    box.readBallot(5);
    box.readBallot(4);
    box.readBallot(6);
    box.display_count();
    return 0;
}