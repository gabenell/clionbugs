#include <Eigen/Dense>
#include <iostream>

using namespace std;
using namespace Eigen;

int main()
{
    Array22f m;
    m << 1,2,
            3,4;
    Array44f a = Array44f::Constant(0.6);
    cout << "Here is the array a:" << endl << a << endl << endl;

    a.block<2,2>(1,1) = m; // CLION BUG: This line displays a build error, but compiles fine
                           // NOTE: on my machine it takes almost a minute for CLION to parse
                           // and show the error (!). Seems like template-libraries such as Eigen
                           // are tough for CLION to parse.
    cout << "Here is now a with m copied into its central 2x2 block:" << endl << a << endl << endl;
    a.block(0,0,2,3) = a.block(2,1,2,3);
    cout << "Here is now a with bottom-right 2x3 block copied into top-left 2x2 block:" << endl << a << endl << endl;
}