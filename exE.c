//
// Created by user on 15.10.2023.
//
#include <stdio.h>
#include <conio.h>

int main() {
    int m1[3][3]={
            {1,2,3},
            {4,5,6},
            {7,8,9}};
    int n=3,m=3;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(i<j) printf("%d,",m1[i][j]);

        }

    }

   getch();
    return 0;
}
