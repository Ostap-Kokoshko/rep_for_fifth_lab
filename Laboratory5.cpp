#include <iostream>
using namespace std;
#include <math.h>
#include <string.h>
#include "Header5.h"

int main()
{   
    cout << "-----------------------------------------Points-----------------------------------------" << endl;
    Point Picture1(6, 8, RED);
    Picture1.Print();
    
    Point Picture2(12, 16, PINK);
    Picture2.Print();
    
    Point Picture3(7, 2, BROWN);
    Picture3.Print();
    
    Point Picture4(10, 10, BLACK);
    Picture4.Print();
   

    Polynom Sorted; 
 
    Sorted.AddArray(Picture1);

    Sorted.AddArray(Picture2);

    Sorted.AddArray(Picture3);

    Sorted.AddArray(Picture4);

    cout << "--------------------------------------Sorted  by x--------------------------------------" << endl;
      
    Sorted.AllPointsByX();
    
    cout << "--------------------------------------Sorted  by y--------------------------------------" << endl;
    
    Sorted.AllPointsByY();

    cout << "----------------------------------------------------------------------------------------" << endl;

    cout << endl << "Pictures of quadrilaterals formed by points " << endl;
    
    Picture1.Painting();

    Picture2.Painting();

    Picture3.Painting();

    Picture4.Painting();

    return 0;
}
