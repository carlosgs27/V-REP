/*
 *    Copyright (C)2019 by YOUR NAME HERE
 *
 *    This file is part of RoboComp
 *
 *    RoboComp is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    RoboComp is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with RoboComp.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "specificworker.h"

/**
* \brief Default constructor
*/
SpecificWorker::SpecificWorker(TuplePrx tprx) : GenericWorker(tprx)
{

}

/**
* \brief Default destructor
*/
SpecificWorker::~SpecificWorker()
{
	std::cout << "Destroying SpecificWorker" << std::endl;
}

bool SpecificWorker::setParams(RoboCompCommonBehavior::ParameterList params)
{
//       THE FOLLOWING IS JUST AN EXAMPLE
//	To use innerModelPath parameter you should uncomment specificmonitor.cpp readConfig method content
//	try
//	{
//		RoboCompCommonBehavior::Parameter par = params.at("InnerModelPath");
//		std::string innermodel_path = par.value;
//		innerModel = new InnerModel(innermodel_path);
//	}
//	catch(std::exception e) { qFatal("Error reading config params"); }




	


	return true;
}

void SpecificWorker::initialize(int period)
{
	std::cout << "Initialize worker" << std::endl;
	this->Period = period;
	timer.start(Period);
}

void SpecificWorker::compute()
{
	//computeCODE
//	QMutexLocker locker(mutex); 
// 	try
// 	{
// 		camera_proxy->getYImage(0,img, cState, bState);
// 		memcpy(image_gray.data, &img[0], m_width*m_height*sizeof(uchar));
// 		searchTags(image_gray);
// 	}
// 	catch(const Ice::Exception &e)
// 	{
// 		std::cout << "Error reading from Camera" << e << std::endl;
// 	}
}


void SpecificWorker::DifferentialRobot_correctOdometer(int x, int z, float alpha)
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_getBasePose(int &x, int &z, float &alpha)
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_resetOdometer()
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_setOdometer(RoboCompGenericBase::TBaseState state)
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_getBaseState(RoboCompGenericBase::TBaseState &state)
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_setOdometerPose(int x, int z, float alpha)
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_stopBase()
{
//implementCODE

}

void SpecificWorker::DifferentialRobot_setSpeedBase(float adv, float rot)
{
//implementCODE

}


