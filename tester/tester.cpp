#include <bits/stdc++.h>
using namespace std;

int main() {
    if(system("g++ generator.cpp -o gen")) return 1;
    if(system("g++ brute.cpp -o brute")) return 1;
    if(system("g++ soln.cpp -o soln")) return 1;;

    int start_seed = 0;
    int max_testcases = 100;
    for(int tc = start_seed; tc<max_testcases+start_seed; tc++) {
        string cmd = "gen.exe " + to_string(tc) + " > input.txt";
        system(cmd.c_str());
        system("brute.exe < input.txt > brute.txt");
        system("soln.exe < input.txt > soln.txt");

        if(system("fc brute.txt soln.txt > nul")) {
            cout << "Failed on test " << tc-start_seed << endl;
            cout << "Seed = " << tc << '\n';
            cout <<"input.txt"<<endl;
            system("type input.txt");
            return 0;
        }
        cout << "Passed " << tc << endl;
    }
}