//21BCE10901
#include <iostream>
using namespace std;

int main()
{
    // Taking input of votes from user
    int n;
    cout<<"Enter the total number of votes: ";
    cin>>n;
    int votes[n];
    int spoilt_votes = 0;
    for(int i=0;i<n;i++){
        cout<<"Enter the candidate number to be voted: ";
        cin>>votes[i];
        if(votes[i]<1 || votes[i]>5)
        {
            spoilt_votes++;
        }
    }

    // Counting votes for each candidate and Spoilt votes

    int spoilt_ballots = 0;
    int candidates[5] = {0,0,0,0,0};
    for(int i=0;i<sizeof(votes)/sizeof(votes[0]);i++){
        if(votes[i]>5 || votes[i]<1){
            spoilt_ballots++;
        }
        else{
            candidates[votes[i]-1]++;
        }
    }
    cout<<" "<<endl;
    cout<<"Number of votes for each candidate: "<<endl;
    cout<<" "<<endl;
    cout<<"Candidate 1: "<<candidates[0]<<endl;
    cout<<"Candidate 2: "<<candidates[1]<<endl;
    cout<<"Candidate 3: "<<candidates[2]<<endl;
    cout<<"Candidate 4: "<<candidates[3]<<endl;
    cout<<"Candidate 5: "<<candidates[4]<<endl;
    
    // Evaluating the winner
    
    int max = candidates[0];
    int max_index = 0;
    for(int i=1;i<sizeof(candidates)/sizeof(candidates[0]);i++){
        if(candidates[i]>max){
            max = candidates[i];
            max_index = i;
        }
    }
    cout<<" "<<endl;
    cout<<"Winner of the election is : "<<max_index+1<<endl;
    cout<<" "<<endl;
    cout<<"Number of Spoilt Ballots: "<<spoilt_ballots<<endl;
    return 0;
    
}