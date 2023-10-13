//
// Created by Chen Hua on 2023-10-12.
//
#include <vector>
#include <iostream>
#include <regex> //regex library

using namespace std;


//function to find valid pairs
vector<string> funcValidPairs(vector<string> inputStr){
    vector<string> answer;
    smatch str_match;    //declaring match datatype

    //regex pattern
    std::string patternLat = R"([\+\-]?(\d(\.\d+)?|[1-8]\d(\.\d+)?|90(\.0+)?))";
    std::string patternLon = R"([\+\-]?(\d{1,2}(\.\d+)?|1[0-7]\d(\.\d+)?|180(\.0+)?))";
    std::string pattern = R"(^[(])" + patternLat + R"(,\s+)" + patternLon + R"([)]$)";
    regex str_expr(pattern);

    for (int i = 0; i < inputStr.size(); i++) {
        if (regex_search(inputStr[i], str_match, str_expr))  //checking of valid regex pattern
            answer.push_back("Valid");  //pushing result into answer vector
        else
            answer.push_back("Invalid");
    }
    return answer;
}

//main
int main() {
    string input;
    getline(cin, input);
    int input_strsize = std::stoi(input);

    vector<string> inputStr; //inputing vector
    for (int i = 0; i < input_strsize; i++) {
        std::getline(cin, input);
        inputStr.push_back(input);
    }
    vector<string> result = funcValidPairs(inputStr);
    for (int i = 0; i < input_strsize; i++) {
        cout << result[i] << endl;
    }

    return 0;
}
