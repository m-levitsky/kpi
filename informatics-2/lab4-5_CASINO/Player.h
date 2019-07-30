

#ifndef LAB4_26_CASINO_PLAYER_H
#define LAB4_26_CASINO_PLAYER_H

#include "Human.h"
class Player : public Human{
public:
    Player();

    Player(int cash);

    int getCash() const;
    void setCash(int cash);
    bool isLucky() const;
    void setLucky(bool lucky);
    const string& getFav_game() const;
    void setFav_game(const string& fav_game);

    void Input();

    void Show();

    virtual ~Player();

private:

    int cash;
    bool lucky;
    string fav_game;


};

#endif //LAB4_26_CASINO_PLAYER_H
