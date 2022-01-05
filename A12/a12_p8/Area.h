/* 
    CH-230-A
    a12_p8.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

class Area {
	private:
		char color[11];
	public:
		virtual ~Area();
		Area(const char *n);
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
};
#endif
