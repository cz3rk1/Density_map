# Density Map

This repository contains a C++ program to generate a density map based on a given matrix.

## About the Program

The program consists of the following functions:

### `wejscie()`

This function initializes a 2D array `T[N][N]` with predefined values representing a binary matrix.

### `oblicz()`

This function calculates the density map based on the input matrix `T[N][N]`. It calculates the density of each cell by summing up the values of neighboring cells within a specified radius `r`.

### `drukuj()`

This function prints the content of a 2D array.

## Usage

1. Compile the program using a C++ compiler.

2. Run the compiled executable.

3. The program will generate and print the density map based on the predefined binary matrix.

## Input

The input matrix `T[N][N]` is initialized with predefined values representing a binary matrix. Each element in the matrix represents the density of a particular cell.

## Output

The program outputs the density map `G[N][N]`, where each element represents the density of the corresponding cell in the input matrix.

## Example

Consider the following input matrix:

