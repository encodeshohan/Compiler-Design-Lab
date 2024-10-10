#include <bits/stdc++.h>
using namespace std;

int main()
{
    string dfa_current_input, dfa_current_state;
    string D[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    cin>>dfa_current_state;
    cin>>dfa_current_input;

    if(dfa_current_state== "A" && dfa_current_input=="+"){
        dfa_current_state= "F";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "A" && dfa_current_input=="."){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "A" && dfa_current_input=="-"){
        dfa_current_state= "C";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "B" && dfa_current_input=="."){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "B" && dfa_current_input=="D"){
        dfa_current_state= "E";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "C" && dfa_current_input=="."){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "C" && dfa_current_input=="D"){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "D'" && dfa_current_input=="D"){
        dfa_current_state= "F";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "E" && dfa_current_input=="."){
        dfa_current_state= "G";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "E" && dfa_current_input=="D"){
        dfa_current_state= "E";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "F" && dfa_current_input=="D"){
        dfa_current_state= "F";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "G" && dfa_current_input=="."){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "G" && dfa_current_input=="D"){
        dfa_current_state= "H";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "H" && dfa_current_input=="."){
        dfa_current_state= "D'";
        cout<<"Current State : "<<dfa_current_state;
    }

    if(dfa_current_state== "H" && dfa_current_input=="D"){
        dfa_current_state= "H";
        cout<<"Current State : "<<dfa_current_state;
    }
    return 0;
}
