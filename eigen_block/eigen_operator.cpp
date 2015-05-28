//
// Created by gabe on 5/28/15.
//

#include <Eigen/Geometry>

Eigen::Matrix<double, 4, 3> demoOperatorBug() {
    // BUG: incorrectly shows "binary operator << cannot be applied to the expressions of type 'double' and 'double'
    const Eigen::Matrix<double, 4, 3> matrix = (Eigen::MatrixXd(4, 3) << 0.15, 0.15, 0.15,
            0.20, 0.20, 0.20,
            0.30, 0.30, 0.30,
            0.4, 0.4, 0.4).finished();
    return matrix;
}

void demoConstBug() {
    const Eigen::Matrix<double, 4, 3> matrix = demoOperatorBug();

    //BUG: incorrectly shows "non-const function 'row' is called on the const object
    Eigen::Vector3d vec = matrix.row(0).transpose();
}