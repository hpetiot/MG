#include <rotations.hpp>

Rotations::Rotations(const Vector& rotVectorDegs): UnOp{ROT}{
        double cosX = cos(-Math::DegreeToRadian(rotVectorDegs[0]));
        double cosY = cos(-Math::DegreeToRadian(rotVectorDegs[1]));
        double cosZ = cos(-Math::DegreeToRadian(rotVectorDegs[2]));

        double sinX = sin(-Math::DegreeToRadian(rotVectorDegs[0]));
        double sinY = sin(-Math::DegreeToRadian(rotVectorDegs[1]));
        double sinZ = sin(-Math::DegreeToRadian(rotVectorDegs[2]));
        m[0][0] = cosZ*cosY;
        m[0][1] = cosZ*sinY*sinX-sinZ*cosX;
        m[0][2] = cosZ*sinY*cosX + sinZ*sinX;
        
        m[1][0] = sinZ*cosY;
        m[1][1] = sinZ*sinY*sinX + cosZ*cosX;
        m[1][2] = sinZ*sinY*cosX - cosZ*sinX;

        m[2][0] = -sinY;
        m[2][1] = cosY*sinX;
        m[2][2] = cosY*cosX;
}

double Rotations::Value(const Vector& candidate) const{
    double x = candidate[0]*m[0][0] + candidate[1]*m[0][1] + candidate[2] * m[0][2];
    double y = candidate[0]*m[1][0] + candidate[1]*m[1][1] + candidate[2] * m[1][2];
    double z = candidate[0]*m[2][0] + candidate[1]*m[2][1] + candidate[2] * m[2][2];

    return sons.at(0)->Value(Vector(x, y, z));
}

Box Rotations::autoBox()const{
    Box sonsBox = sons.at(0)->autoBox();
    Vector b = sonsBox[1];
    Vector a = sonsBox[0];
    double A_x = a[0]*m[0][0] + a[1]*m[0][1] + a[2]* m[0][2];
    double A_y = a[0]*m[1][0] + a[1]*m[1][1] + a[2] * m[1][2];
    double A_z = a[0]*m[2][0] + a[1]*m[2][1] + a[2] * m[2][2];

    double B_x = b[0]*m[0][0] + b[1]*m[0][1] + b[2]* m[0][2];
    double B_y = b[0]*m[1][0] + b[1]*m[1][1] + b[2] * m[1][2];
    double B_z = b[0]*m[2][0] + b[1]*m[2][1] + b[2] * m[2][2];

    return(Box(Vector(B_x, B_y, B_z), Vector(A_x, A_y, A_z)));
    //TMP
}


