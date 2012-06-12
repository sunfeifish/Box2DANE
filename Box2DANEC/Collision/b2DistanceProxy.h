/*================================================================================
*
* File Name: b2DistanceProxy.h
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (�) 2012 Jesse Nicholson. All Rights Reserved.
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

#ifndef BOX2DANE_C_B2DISTANCEPROXY_H_
#define BOX2DANE_C_B2DISTANCEPROXY_H_

//Convenience functions for generating a new AS3 class instance of b2DistanceProxy
FREResult FRENewObjectFromb2DistanceProxy(b2DistanceProxy* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceProxy";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceProxy object in function FRENewObjectFromb2DistanceProxy");
	}

	return objInitResult;
}

FREResult FRENewb2DistanceProxy(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2DistanceProxy";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2DistanceProxy object in function FRENewb2DistanceProxy");
	}

	return objInitResult;
}
//

FREObject ane_b2DistanceProxy_constructor_b2DistanceProxy(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->b2DistanceProxy(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_Set(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->Set(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetSupport(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetSupport(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetSupportVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetSupportVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetVertexCount(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetVertexCount(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_callback_GetVertex(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->GetVertex(...);
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_setter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->m_count= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_getter_m_count(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
	//return b2DistanceProxy_instance->m_count;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_setter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
//	b2DistanceProxy_instance->m_radius= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2DistanceProxy_getter_m_radius(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2DistanceProxy* b2DistanceProxy_instance = (b2DistanceProxy*)(nativeData);
	//return b2DistanceProxy_instance->m_radius;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2DISTANCEPROXY_H_ */
