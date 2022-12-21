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

    string dash_for_indents = "-------------------------------------";

    int paints;

    Point(){
    
    }

    Point(int valuex, int valuey, Colours paint)
    {
        paints = paint;
        x = valuex;
        y = valuey;
    }
 
    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }

    int function_for_finding_the_perimeter()
    {
        int perimeter = 2 * (x + y);
        return perimeter;
    }

    double function_for_finding_the_diagonal()
    {
        double diagonal = sqrt(pow(x, 2) + pow(y, 2));
        return diagonal;
    }

    void Print()
    {
        cout << "X = " << x << "\t" << "Y = " << y << "\t";

        cout << "Perimeter = " << function_for_finding_the_perimeter() << "\t" << "Diagonal = " << function_for_finding_the_diagonal() << endl;
    }

    void Painting() {
        cout << endl << dash_for_indents << endl;
        int** array_for_drawing_a_quadrilateral = new int* [y];

        for (int i = 0; i < y; i++)
        {
            array_for_drawing_a_quadrilateral[i] = new int[x];
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                array_for_drawing_a_quadrilateral[i][j] = paints;
            }
        }

        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < x; j++)
            {
                cout << array_for_drawing_a_quadrilateral[i][j] << "  ";
            }
            cout << endl;
        }

        for (int i = 0; i < y; i++)
        {
            delete[] array_for_drawing_a_quadrilateral[i];
        }
        delete[] array_for_drawing_a_quadrilateral;
        cout << dash_for_indents << endl;
    }

    ~Point()
    {

    }
};



class Polynom
{
public:

    Polynom(){
    
    }

    int number_of_maximum_elements_for_sorting_points = 99;

    int element_for_an_additional_array_for_sorting_points = 1;

    Point* array_of_points = new Point[number_of_maximum_elements_for_sorting_points];

    Point* array_sorted = new Point[element_for_an_additional_array_for_sorting_points];

    int number_of_elements = 0;

    void AddArray(Point point) {
        array_of_points[number_of_elements] = point;
        number_of_elements++;
    }

    void AllPointsByX() {
        for (int i = 0; i < number_of_elements; i++) {
            for (int j = 0; j < number_of_elements; j++)
                if (array_of_points[j].x < array_of_points[j + 1].x) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }

        }
        for (int n = 0; n < number_of_elements; n++) {
            array_of_points[n].Print();
        }
    }

    void AllPointsByY() {
        for (int i = 0; i < number_of_elements; i++) {
            for (int j = 0; j < number_of_elements; j++) {
                if (array_of_points[j].y < array_of_points[j + 1].y) {
                    array_sorted[0] = array_of_points[j+1];
                    array_of_points[j+1] = array_of_points[j];
                    array_of_points[j] = array_sorted[0];
                }
            }
        }
        for (int n = 0; n < number_of_elements; n++) {
            array_of_points[n].Print();
        }
    }
    ~Polynom(){
        delete[] array_of_points;
        delete[] array_sorted;
    }
};
