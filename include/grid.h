#pragma once
#include <iostream>
#include <vector>
#include <raylib.h>

class Grid
{
protected:
    int rows;
    int cols;
    int cellSize;
    int offsetX;
    int offsetY;
    int gridWidth;
    int gridHeight;
    int grid[20][30];
    char cellValue[2];
    Rectangle Cell;
    Rectangle Calculate;
    Rectangle Result;
    Color CalculateColor, CalculateColorHover;
    std::string result;
    Font Bodyfont;
    // Font font;
    std::vector<int> minterms;

public:
    Grid();
    void Initialize();
    void listenClick();
    void printResult(int ox, int oy, int rw, int rectWidth, int rectHeight);
    void listenHover();
    void calculateButton();
    void resultButton();
    std::string solveKMap(int numberOfVariables, int numberOfMinterms, std::vector<int> minterms);
    int calculateNumberOfVariables(int rows, int cols);
    std::vector<int> returnMinterms();
    bool resultCalculated = false;
};