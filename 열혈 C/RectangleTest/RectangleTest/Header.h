#ifndef __POINT_H
#define __POINT_H

class Point {
private:
	int x;
	int y;

public:
	bool InitMembers(int x, int y);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};
#endif // 

