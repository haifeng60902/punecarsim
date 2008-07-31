
#ifndef CAR_H
#define CAR_H

#include <osg/MatrixTransform>

class Car {

		public:
				osg::Vec3d center; // location of the car object
				double velocity;	// velocity

				Car(osg::Vec3d center);
				osg::ref_ptr<osg::MatrixTransform> draw(void);
};

#endif
