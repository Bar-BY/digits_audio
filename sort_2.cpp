#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main(int argc, char **argv) {
    ifstream inFile;
    ofstream outFile;
    std::string file_path(argv[1]);
    inFile.open(file_path);
    if (!inFile) {
        cerr << "Unable to open file!\n";
        exit(1);
    }
    std::vector<int> elements;
    int element;
    while (inFile >> element) {
        elements.push_back(element);
    }
    inFile.close();
    std::sort(elements.begin(),elements.end());
    outFile.open(file_path);
    for (std::vector<int>::iterator it=elements.begin(); it!=elements.end(); ++it) {
        outFile << *it << ' ';
    }
    outFile.close();
    return 0;
}

