// COMSC-210 | Lab 15 | Zhaoyi Zheng
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    int yearReleased;
    string screenWriter;

public:
    Movie() : title(""), yearReleased(0), screenWriter("") {}

    void setTitle(const string& t) {
        title = t;
    }

    void setYearReleased(int year) {
        yearReleased = year;
    }

    void setScreenWriter(const string& writer) {
        screenWriter = writer;
    }

    string getTitle() const {
        return title;
    }

    int getYearReleased() const {
        return yearReleased;
    }

    string getScreenWriter() const {
        return screenWriter;
    }

    void print() const {
        cout << "Movie: " << screenWriter << endl;
        cout << "Year released: " << yearReleased << endl;
        cout << "Screenwriter: " << title << endl;
    }
};

// Function prototypes
void readDataFromFile(vector<Movie>& movies,  string& filename);

int main() {
    vector<Movie> movies;

    readDataFromFile(movies, "input.txt");


    return 0;
}


void readDataFromFile(vector<Movie>& movies, string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return;
    }
    while (!inFil