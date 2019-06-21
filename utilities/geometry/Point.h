//
// Created by sarcoma on 6/21/19.
//

#ifndef GAME_UI_POINT_H
#define GAME_UI_POINT_H

class Point {
private:
    float x;
    float y;
public:
    Point(float x, float y);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);
};

#endif //GAME_UI_POINT_H
