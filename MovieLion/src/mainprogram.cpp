#include "inc/Main.h" 


int main(){
    string folderPath;
    cout << "Enter the path to the folder containing .MP4 files: ";
    cin >> folderPath;

    vector<File> mp4Files = getMP4Files(folderPath);

}