/* 
    CH-230-A
    a12_p9.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

#ifndef _AREA_H
#define _AREA_H

class Area {
	private:
		// changed to string to make implementation easier
		std::string color;
	public:
		virtual ~Area();
		Area(std::string&);
		void getColor() const;
		virtual double calcArea() const = 0;
		virtual double calcPerimeter() const = 0;
};
#endif
