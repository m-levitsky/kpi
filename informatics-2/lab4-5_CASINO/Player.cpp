
#include "Player.h"
Player::Player() {
    cash = rand() % 5000 + 200;
    lucky = rand() % 2;
}
Player::Player(int cash)
        :cash(cash) {
    lucky = rand() % 2;
}
int Player::getCash() const
{
    return cash;
}
void Player::setCash(int cash)
{
    Player::cash = cash;
}
bool Player::isLucky() const
{
    return lucky;
}
void Player::setLucky(bool lucky)
{
    Player::lucky = lucky;
}
const string& Player::getFav_game() const
{
    return fav_game;
}
void Player::setFav_game(const string& fav_game)
{
    Player::fav_game = fav_game;
}
Player::~Player()
{

}
void Player::Input()
{
    cout << "Введите кол-во денег игрока " << name << " : " << endl;
    cin >> cash;

    cout << "Оцените везучесть игрока от 1 до 100: " << endl;
    int a;
    cin >> a;

    if(a > 50) lucky = 1;
    else lucky = 0;

    cout << "Название любимой игры: " << endl;
    cin >> fav_game;

}
void Player::Show()
{
    Human::Show();

    cout << "Кол-во денег: " << cash;
}
