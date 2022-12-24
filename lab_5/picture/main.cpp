#include <iostream>
#include "header.h"
using namespace std;
/*
int main()
{
    //how to graphic
    Picture pic1; //object pic1 from picture class
    Circle carr[3]={Circle(50,50,50),Circle(200,100,100),Circle(420,50,30)};
    Rect rarr[2]={Rect(30,40,170,100),Rect(420,50,500,300)};
    Line larr[2]={Line(420,50,300,300),Line(40,500,500,400)};

    pic1.setCircle(3,carr);
        pic1.setrect(2,rarr);
            pic1.setline(2,larr);


//            pic1.paint();
    return 0;
}
*/
//-----------------------------------------------------------


/*
int main()
{ Picture pic1;
//example on dynamic allocation, using temporary objects (on the fly)
Line * larr ;
Rect * rarr ;
Circle * carr ;
larr = new Line[2] ;
larr[0] = Line(420,50,300,300) ;
larr[1] = Line(40,500,500,400) ;
pic1.setCircle(3,carr) ;
pic1.setrect(2,rarr) ;
pic1.setline(2,larr) ;
//myPic.print() ;
delete[] larr ;
}


*/
//==================================================================================================

int main()
{ Picture myPic;
//example on static allocation
Circle carr[3]={Circle(50,50,50), Circle(200,100,100),
Circle(420,50,30)};
//example on static allocation, using temporary objects (on the fly)
Rect rArr[2] ;
rArr[0] = Rect(30,40,170,100) ;
Point myP1(420,50) ;
Point myP2(500,300) ;
rArr[1] = Rect(myP1, myP2) ;


