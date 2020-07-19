class Point final {
public:
Point() : x { 5 }, y { 5 } { }
Point(const unsigned int initialX, const unsigned int initialY) :
x { initialX }, y { initialY } { }
void setCoordinates(const unsigned int newX, const unsigned int newY) {
x = newX;
y = newY;
}

private:
unsigned int x;
unsigned int y;
};

class Shape {
public:
Shape() : isVisible { false } { }
virtual ~Shape() = default;
void moveTo(const Point& newCenterPoint) {
hide();
centerPoint = newCenterPoint;
show();
}
virtual void Shape::show() {
isVisible = true;
}
virtual void Shape::hide() {
isVisible = false;
}
private:
Point centerPoint;
bool isVisible;


};


class Rectangle : public Shape {
public:
Rectangle() : width { 2 }, height { 1 } { }
Rectangle(const unsigned int initialWidth, const unsigned int initialHeight) :
width { initialWidth }, height { initialHeight } { }
virtual void show() override {
Shape::show();
// ...code to show a rectangle here...
}
virtual void hide() override {
Shape::hide();
// ...code to hide a rectangle here...
}
void setWidth(const unsigned int newWidth) {
width = newWidth;
}
void setHeight(const unsigned int newHeight) {
height = newHeight;
}
void setEdges(const unsigned int newWidth, const unsigned int newHeight) {
width = newWidth;
height = newHeight;
}
unsigned long long getArea() const {
return static_cast<unsigned long long>(width) * height;
}
// ...
private:
unsigned int width;
unsigned int height;
};

class Square : public Rectangle {
public:
//...
};


int main(){


Shape *bp=new Rectangle();
bp->show();  

Square square;
square.setHeight(10); // Err...changing only the height of a square?!
/*
- Violation of Principle of Least Astonishment 
Why are there two parameters?
Which parameter is used to set the length of all edges?
Must I maybe put both parameters to the same value?
What happens if I don’t?
*/
square.setEdges(10, 20); // Uh oh! 



}