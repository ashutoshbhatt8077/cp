#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <conio.h> // For _kbhit() and _getch()

using namespace std;

const int WIDTH = 30, HEIGHT = 10;
int birdX = 5;
float birdY = HEIGHT / 2, velocity = 0.0;
const float gravity = 0.3;
bool gameOver = false;

struct Pipe {
    int x, gapY, gapSize = 3;
};
vector<Pipe> pipes;

void draw() {
    system("CLS"); // use "clear" on Linux/Mac
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            bool printed = false;
            if (x == birdX && int(birdY) == y) {
                cout << "O";
                printed = true;
            }
            for (auto &p : pipes) {
                if (p.x == x && (y < p.gapY || y > p.gapY + p.gapSize)) {
                    cout << "|";
                    printed = true;
                    break;
                }
            }
            if (!printed) cout << " ";
        }
        cout << "\n";
    }
}

int main() {
    srand(time(0));
    while (!gameOver) {
        // Input
        if (_kbhit()) {
            char ch = _getch();
            if (ch == 'w' || ch == 'W') velocity = -1.5;
        }

        // Logic
        velocity += gravity;
        birdY += velocity;

        for (auto &p : pipes) p.x--;
        if (pipes.empty() || pipes.back().x < WIDTH - 15)
            pipes.push_back({WIDTH - 1, rand() % (HEIGHT - 4) + 2});

        for (auto &p : pipes)
            if (p.x == birdX && (birdY < p.gapY || birdY > p.gapY + p.gapSize))
                gameOver = true;

        if (birdY >= HEIGHT) gameOver = true;

        // Draw
        draw();

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

    }
    cout << "Game Over!\n";
    return 0;
}
