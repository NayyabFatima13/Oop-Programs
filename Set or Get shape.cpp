#include<iostream>
using namespace std;

class Shape
{
    private:
	int height, width;
    public:
    void setHeight(int h)   //setters
	{   
        height = h;
    }
    void setWidth(int w){
        width = w;
    }
    int getHeight()   //getters
	{     
        return height;
    }
    int getWidth(){
        return width;
    }
};
int main()
{
    Shape s;
    
    s.setHeight(5);
    s.setWidth(2);
    
    cout << "The Height is : " << s.getHeight() << endl;
    cout << "The Width is : " << s.getWidth() << endl;
    
    return 0;
}
