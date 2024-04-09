#ifndef FILE_H // Include guard
#define FILE_H


#include <iostream>
#include <vector>
#include <filesystem>

vector<File> getMP4Files(const string& folderPath);


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


using namespace std::filesystem;





class File {
public:
    string Name;
    path PathToMp4;

    // Constructor
    File(const string& name, const path& pathToMp4)
        : Name(name), PathToMp4(pathToMp4) {}

    // Getters
    string getName() const { return Name; }
    path getPathToMp4() const { return PathToMp4; }

    // Method to display the file information
    void display() const {
        cout << "Name: " << Name << ", Path: " << PathToMp4 << endl;
    }
};


#endif