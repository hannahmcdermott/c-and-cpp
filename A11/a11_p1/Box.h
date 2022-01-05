/* 
    CH-230-A
    a11_p1.cpp 
    Hannah McDermott
    h.mcdermott@jacobs-university.de
*/

class Box 
{
   private:
        double height;
        double width;
        double depth;
    public:
        //default constructor 
        Box();
        //parametric constructor
        Box(double, double, double);
        Box(const Box&);
        //destructor 
        ~Box();
        //setter methods to assign values to the properties of instances
        void setHeight(double newheight);
        void setWidth(double newwidth);
        void setDepth(double newdepth);
        //getter methods to get back the values of the properties of instances 
        double getHeight() const;
        double getWidth() const;
        double getDepth() const;
        double calcVolume() const;
        //service method
        void print(); 
};