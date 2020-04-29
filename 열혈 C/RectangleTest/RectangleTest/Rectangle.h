#ifndef __RECTANGE_H
#define __RECTANGE_H

#include "Header.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;

};
#endif // !__RECTANGE_H

