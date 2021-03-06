/*================================================================================
*
* File Name: b2WheelJointDef.h
* Created on: Mon May 7 22:46:26 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2WHEELJOINTDEF_H_
#define BOX2DANE_C_B2WHEELJOINTDEF_H_

//Convenience functions for generating a new AS3 class instance of b2WheelJointDef
FREResult FRENewObjectFromb2WheelJointDef(b2WheelJointDef* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2WheelJointDef";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WheelJointDef object in function FRENewObjectFromb2WheelJointDef");
	}

	return objInitResult;
}

FREResult FRENewb2WheelJointDef(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.dynamics.joints.b2WheelJointDef";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2WheelJointDef object in function FRENewb2WheelJointDef");
	}

	return objInitResult;
}
//

FREObject ane_b2WheelJointDef_constructor_b2WheelJointDef(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->b2WheelJointDef(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_callback_Initialize(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->Initialize(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->localAnchorA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_localAnchorA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->localAnchorA;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->localAnchorB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_localAnchorB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->localAnchorB;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_localAxisA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->localAxisA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_localAxisA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->localAxisA;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_enableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->enableMotor= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_enableMotor(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->enableMotor;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_maxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->maxMotorTorque= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_maxMotorTorque(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->maxMotorTorque;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_motorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->motorSpeed= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_motorSpeed(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->motorSpeed;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->frequencyHz= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_frequencyHz(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->frequencyHz;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_setter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
//	b2WheelJointDef_instance->dampingRatio= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2WheelJointDef_getter_dampingRatio(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2WheelJointDef* b2WheelJointDef_instance = (b2WheelJointDef*)(nativeData);
	//return b2WheelJointDef_instance->dampingRatio;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2WHEELJOINTDEF_H_ */
