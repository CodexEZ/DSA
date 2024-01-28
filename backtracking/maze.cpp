#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

// Constants for cell states
const int WALL = 0;
const int PATH = 1;

// Function to generate a random maze
vector<vector<int>> generateRandomMaze(int rows, int cols) {
    // Initialize the maze with walls
    vector<vector<int>> maze(rows, vector<int>(cols, WALL));

    // Seed the random number generator
    srand(static_cast<unsigned>(time(0)));
    mt19937 mt(time(0));

    // Create a random number generator
    uniform_int_distribution<int> randRow(0, rows - 1);
    uniform_int_distribution<int> randCol(0, cols - 1);

    // Choose a random starting point
    int startX = randRow(mt);
    int startY = randCol(mt);

    // Set the starting point as a path
    maze[startX][startY] = PATH;

    // Create a list of walls to consider
    vector<pair<int, int>> walls;
    walls.push_back(make_pair(startX - 2, startY));
    walls.push_back(make_pair(startX, startY - 2));
    walls.push_back(make_pair(startX + 2, startY));
    walls.push_back(make_pair(startX, startY + 2));

    while (!walls.empty()) {
        // Choose a random wall
        int wallIndex = rand() % walls.size();
        int currentX = walls[wallIndex].first;
        int currentY = walls[wallIndex].second;

        // Calculate the corresponding cell
        int cellX = (currentX - startX) / 2 + currentX;
        int cellY = (currentY - startY) / 2 + currentY;

        // If the cell is in bounds and unvisited
        if (cellX >= 0 && cellX < rows && cellY >= 0 && cellY < cols && maze[cellX][cellY] == WALL) {
            // Make the chosen wall a path
            maze[currentX][currentY] = PATH;
            maze[cellX][cellY] = PATH;

            // Add new walls to the list
            if (currentX - 2 >= 0) walls.push_back(make_pair(currentX - 2, currentY));
            if (currentY - 2 >= 0) walls.push_back(make_pair(currentX, currentY - 2));
            if (currentX + 2 < rows) walls.push_back(make_pair(currentX + 2, currentY));
            if (currentY + 2 < cols) walls.push_back(make_pair(currentX, currentY + 2));
        }

        // Remove the current wall from the list
        walls.erase(walls.begin() + wallIndex);
    }

    return maze;
}

// Function to print the maze
void printMaze(const vector<vector<int>>& maze) {
    for (const vector<int>& row : maze) {
        for (int cell : row) {
            if (cell == WALL) {
                cout << "##";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows % 2 == 0 || cols % 2 == 0) {
        cout << "Rows and columns must be odd numbers." << endl;
        return 1;
    }

    vector<vector<int>> maze = generateRandomMaze(rows, cols);
    printMaze(maze);

    return 0;
}
