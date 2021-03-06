#ifndef CHESSPLAYER_H
#define CHESSPLAYER_H

#include "ChessMove.h"
#include "ChessState.h"

class ChessPlayer {
private:
    virtual double evaluateState(ChessState gChessState) { return 1; };
public:


    int playerColor;

    ChessPlayer(int playerColor = 1);
    virtual ChessMove decideMoveUsingMINIMAX(ChessState &gameState, ChessMove &returnMove, unsigned int depth = 1)=0;
    void gameResult(int winner);
};
#endif // PLAYER_H
