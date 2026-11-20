#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>

int main() {
    std::vector<int> scores = {78, 92, 65, 88, 95, 81};

    std::sort(scores.begin(), scores.end());
    std::cout << "Sorted Scores: ";
    for (int s : scores) std::cout << s << " ";
    std::cout << "\n";

    auto it = std::find_if(scores.begin(), scores.end(), [](int s) { return s > 90; });
    if (it != scores.end()) {
        std::cout << "First score above 90: " << *it << "\n";
    }

    std::map<std::string, int> studentMarks;
    studentMarks["Anuj"] = 92;
    studentMarks["Pranav"] = 89;
    studentMarks["Rohan"] = 85;

    std::cout << "\n--- Student Marks Map ---\n";
    for (const auto& entry : studentMarks) {
        std::cout << entry.first << ": " << entry.second << "\n";
    }

    return 0;
}