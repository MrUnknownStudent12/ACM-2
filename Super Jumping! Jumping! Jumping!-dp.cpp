#include <iostream>
using namespace std;

int main()
{
    int n;
    while (scanf("%d",&n),n) {
        int i,j,maxn=-1,a[1010]={0},dp[1010]={0};
        for (i=0; i<n; i++)
            scanf("%d",&a[i]);
        for (i=0; i<n; i++) {
            dp[i]=a[i];
            for (j=0; j<i; j++) {
                if (a[i]>a[j]&&a[i]+dp[j]>dp[i])
                    dp[i]=a[i]+dp[j];
                if (dp[i]>maxn)
                    maxn=dp[i];
            }
        }
        printf("%d\n",maxn);
    }
    return 0;
}
/*
 Problem Description
 Nowadays, a kind of chess game called “Super Jumping! Jumping! Jumping!” is very popular in HDU. Maybe you are a good boy, and know little about this game, so I introduce it to you now.
 
 
 
 
 The game can be played by two or more than two players. It consists of a chessboard（棋盘）and some chessmen（棋子）, and all chessmen are marked by a positive integer or “start” or “end”. The player starts from start-point and must jumps into end-point finally. In the course of jumping, the player will visit the chessmen in the path, but everyone must jumps from one chessman to another absolutely bigger (you can assume start-point is a minimum and end-point is a maximum.). And all players cannot go backwards. One jumping can go from a chessman to next, also can go across many chessmen, and even you can straightly get to end-point from start-point. Of course you get zero point in this situation. A player is a winner if and only if he can get a bigger score according to his jumping solution. Note that your score comes from the sum of value on the chessmen in you jumping path.
 Your task is to output the maximum value according to the given chessmen list.
 
 
 Input
 Input contains multiple test cases. Each test case is described in a line as follow:
 N value_1 value_2 …value_N
 It is guarantied that N is not more than 1000 and all value_i are in the range of 32-int.
 A test case starting with 0 terminates the input and this test case is not to be processed.
 
 
 Output
 For each case, print the maximum according to rules, and one line one case.
 
 
 Sample Input
 3 1 3 2
 4 1 2 3 4
 4 3 3 2 1
 0
 
 
 Sample Output
 4
 10
 3
*/