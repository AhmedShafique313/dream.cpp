#include<iostream>
#include<memory>
using namespace std;

// class
class rectangle
{
    private:
        double length;
        double width;
    public:
        double setlength(double);
        double setwidth(double);
        double getlength() const;
        double getwidth() const;
        double getarea() const;
};

// functioning
double rectangle:: setlength(double len)
{
    length=len;
}

double rectangle:: setwidth(double w)
{
    width=w;
}

double rectangle:: getlength() const
{
    return length;
}

double rectangle:: getwidth() const
{
    return width;
}

double rectangle:: getarea() const
{
    return length * width;
}

// main function
int main()
{
    // measuring things
    double number;
    double area;

    // dynamically allocate
    unique_ptr<rectangle> kitchen(new rectangle);
    unique_ptr<rectangle> washroom(new rectangle);
    unique_ptr<rectangle> dining(new rectangle);
    unique_ptr<rectangle> garage(new rectangle);
    unique_ptr<rectangle> store(new rectangle);
    unique_ptr<rectangle> garden(new rectangle);
    unique_ptr<rectangle> room(new rectangle);

    // Dimensions
    cout<<"Enter the length of Kitchen: ";
    cin>>number;
    cout<<endl;
    kitchen->setlength(number);
    cout<<"Enter the width of Kitchen: ";
    cin>>number;
    cout<<endl;
    kitchen->setwidth(number);

    cout<<"Enter the length of Bedroom: ";
    cin>>number;
    cout<<endl;
    room->setlength(number);
    cout<<"Enter the width of BedRoom: ";
    cin>>number;
    cout<<endl;
    room->setwidth(number);

    cout<<"Enter the length of WashRoom: ";
    cin>>number;
    cout<<endl;
    washroom->setlength(number);
    cout<<"Enter the width of Washroom: ";
    cin>>number;
    cout<<endl;
    washroom->setwidth(number);

    cout<<"Enter the length of DiningHall: ";
    cin>>number;
    cout<<endl;
    dining->setlength(number);
    cout<<"Enter the width of DiningHall: ";
    cin>>number;
    cout<<endl;
    dining->setwidth(number);

    cout<<"Enter the length of Garage: ";
    cin>>number;
    cout<<endl;
    garage->setlength(number);
    cout<<"Enter the width of Garage: ";
    cin>>number;
    cout<<endl;
    garage->setwidth(number);

    cout<<"Enter the length of Garden: ";
    cin>>number;
    cout<<endl;
    garden->setlength(number);
    cout<<"Enter the width of Garden: ";
    cin>>number;
    cout<<endl;
    garden->setwidth(number);

    // results
    area=kitchen->getarea() + room->getarea()+ dining->getarea()+garage->getarea()+garden->getarea()+washroom->getarea();
    cout<<endl;
    cout<<"Total Area of Dream House: "<<area<<"sqft"<<endl;
    cout<<endl;
    cout<<"Here the internal area of dream house..........."<<"sqft"<<endl;
    cout<<"Total Area of Kitchen: "<<kitchen->getarea()<<"sqft"<<endl;
    cout<<"Total Area of BedRoom: "<<room->getarea()<<"sqft"<<endl;
    cout<<"Total Area of Dining Hall: "<<dining->getarea()<<"sqft"<<endl;
    cout<<"Total Area of Garage: "<<garage->getarea()<<"sqft"<<endl;
    cout<<"Total Area of Garden: "<<garden->getarea()<<"sqft"<<endl;
    cout<<"Total Area of washroom: "<<washroom->getarea()<<"sqft"<<endl;

    // // deletion
    // delete kitchen;
    // delete washroom;
    // delete dining;
    // delete garage;
    // delete store;
    // delete garden;
    // delete room;
    // // nulling
    // kitchen = nullptr;
    // washroom = nullptr;
    // dining=nullptr;
    // garage=nullptr;
    // store=nullptr;
    // garden=nullptr;
    // room=nullptr;



    return 0;
}
