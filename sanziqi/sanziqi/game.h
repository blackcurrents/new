#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL], int x, int y);
void displayboard(char board[ROW][COL], int x, int y);
void playboard(char board[ROW][COL], int x, int y);
void botboard(char board[ROW][COL], int x, int y);
char iswin(char board[ROW][COL], int x, int y);