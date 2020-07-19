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

//Prefer Compisiton Over Inheritance
class Square : public Shape {
public:
Square() {
impl.setEdges(5, 5);
}
explicit Square(const unsigned int edgeLength) {
impl.setEdges(edgeLength, edgeLength);
}
void setEdge
(const unsigned int length) {
impl.setEdges(length, length);
}
virtual void moveTo(const Point& newCenterPoint) override {
impl.moveTo(newCenterPoint);
}
virtual void show() override {
impl.show();
}
virtual void hide() override {
impl.hide();
}
unsigned lomg longgetArea() const {
return impl.getArea();
}
private:
Rectangle impl;

};

int main(){



}