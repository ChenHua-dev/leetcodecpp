//
// Created by Chen Hua on 2023-10-12.
//
#include <vector>
#include <iostream>
#include <regex> //regex library

using namespace std;


//function to find valid pairs
string validCoordinates(string& inputStr){
    smatch str_match;    //declaring match datatype

    //regex pattern
    std::string patternLat = R"([\+\-]?(\d(\.\d+)?|[1-8]\d(\.\d+)?|90(\.0+)?))";
    std::string patternLon = R"([\+\-]?(\d{1,2}(\.\d+)?|1[0-7]\d(\.\d+)?|180(\.0+)?))";
    std::string pattern = R"(^[(])" + patternLat + R"(,\s+)" + patternLon + R"([)]$)";
    regex str_expr(pattern);

    if (regex_search(inputStr, str_match, str_expr)) return "Valid";
    else return "Invalid";
}

//main
int main() {
    string inputStr;
    getline(cin, inputStr);
    int input_strsize = std::stoi(inputStr);

    vector<string> results;
    for (int i = 0; i < input_strsize; i++) {
        std::getline(cin, inputStr);
        results.push_back(validCoordinates(inputStr));
    }

    for (const auto& re : results) {
        cout << re << endl;
    }

    return 0;
}
