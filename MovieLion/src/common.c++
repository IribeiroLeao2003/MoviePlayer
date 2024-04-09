#include "inc/Main.h" 



vector<File> getMP4Files(const string& folderPath) {
    if (!exists(folderPath) || !is_directory(folderPath)) {
        cout << "The folder does not exist." << endl;
        return {};
    }

    if (is_empty(folderPath)) {
        cout << "The folder is empty." << endl;
        return {};
    }

    vector<File> mp4Files;

    for (const auto& entry : directory_iterator(folderPath)) {
        if (entry.is_regular_file() && entry.path().extension() == ".mp4") {
            mp4Files.emplace_back(entry.path().filename().string(), entry.path());
        }
    }

    if (mp4Files.empty()) {
        cout << "No .MP4 files found in the folder." << endl;
        return {};
    }

    return mp4Files;
}