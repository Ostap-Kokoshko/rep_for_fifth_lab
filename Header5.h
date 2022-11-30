enum Colours
{
    RED,
    GREEN,
    BLUE,
    GRAY,
    WHITE,
    BROWN,
    ORANGE,
    PURPLE,
    PINK,
    BLACK
};

class Point
{  
public:
    int x; //Abscissa

    int y; //Ordinate

    int paints;

    Point(){}

    Point(int valuex, int valuey, Colours paint)
    {
        paints = paint;
        x = valuex;
        y = valuey;

    }
 
    int GetX()
    {
        return x;
    }

    int GetY()
    {
        return y;
    }

    int func1()
    {
        int Perumetr = 2 * (x + y);
        return Perumetr;
    }

    double func2()
    {
        double diagonal = sqrt(pow(x, 2) + pow(y, 2));
        return diagonal;
    }

    void Print()
    {
        cout << "X = " << x << "\t" << "Y = " << y << "\t";

        cout << "Perumetr = " << func1() << "\t" << "Diagonal = " << func2() << endl;
    }

    void Painting() {
        cout << endl << "-------------------------------------" << endl;
        int** array = new int* [y];

        for (int i = 0; i < y; i++)
        {
            array[i] = new int[x];
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                array[i][j] = paints;
            }
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cout << array[i][j] << "  ";
            }
            cout << endl;
        }

        for (int i = 0; i < y; i++)
        {
            delete[] array[i];
        }
        delete[] array;
        cout << "-------------------------------------" << endl;
    }

    ~Point()
    {

    }
};



class Polynom
{
public:

    Polynom(){}

    Point array_of_points[99];
    Point array_sorted[1];
    int numberelements = 0;

    void AddArray(Point point) {
        array_of_points[numberelements] = point;
        numberelements++;
    }

    void AllPointsByX() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++)
                if (array_of_points[j].x < array_of_points[j + 1].x) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }

        }
        for (int n = 0; n < numberelements; n++) {
            array_of_points[n].Print();
        }
    }

    void AllPointsByY() {
        for (int i = 0; i < numberelements; i++) {
            for (int j = 0; j < numberelements; j++) {
                if (array_of_points[j].y < array_of_points[j + 1].y) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }
            }
        }
        for (int n = 0; n < numberelements; n++) {
            array_of_points[n].Print();
        }
    }
    ~Polynom(){}
};