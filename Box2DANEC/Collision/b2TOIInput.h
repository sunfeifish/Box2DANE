/*================================================================================
*
* File Name: b2TOIInput.h
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

#ifndef BOX2DANE_C_B2TOIINPUT_H_
#define BOX2DANE_C_B2TOIINPUT_H_

//Convenience functions for generating a new AS3 class instance of b2TOIInput
FREResult FRENewObjectFromb2TOIInput(b2TOIInput* obj, FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[1];
	FREGetPointerAsString((void*)obj, &memAddress);
	constructorArguments[0] = memAddress;
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TOIInput";

	FREResult objInitResult = FRENewObject(className, 1, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TOIInput object in function FRENewObjectFromb2TOIInput");
	}

	return objInitResult;
}

FREResult FRENewb2TOIInput(FREObject as3Object) {

	//Constructor args
	FREObject memAddress, initException;
	FREObject constructorArguments[0];
	//

	const uint8_t* className = (const uint8_t*)"ca.digitalarchitect.box2dane.collision.b2TOIInput";

	FREResult objInitResult = FRENewObject(className, 0, constructorArguments, &as3Object, &initException);

	if(objInitResult != FRE_OK) {
		FREError("Error creating b2TOIInput object in function FRENewb2TOIInput");
	}

	return objInitResult;
}
//

FREObject ane_b2TOIInput_setter_proxyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
//	b2TOIInput_instance->proxyA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_getter_proxyA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
	//return b2TOIInput_instance->proxyA;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_setter_proxyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
//	b2TOIInput_instance->proxyB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_getter_proxyB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
	//return b2TOIInput_instance->proxyB;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_setter_sweepA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
//	b2TOIInput_instance->sweepA= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_getter_sweepA(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
	//return b2TOIInput_instance->sweepA;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_setter_sweepB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
//	b2TOIInput_instance->sweepB= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_getter_sweepB(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
	//return b2TOIInput_instance->sweepB;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_setter_tMax(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
//	b2TOIInput_instance->tMax= ...;
	FREObject result;
	return result;
}

 
FREObject ane_b2TOIInput_getter_tMax(FREContext ctx, void* functionData, uint32_t argc, FREObject argv[]) {
	void* nativeData;
	FREGetContextNativeData(ctx, &nativeData);
	b2TOIInput* b2TOIInput_instance = (b2TOIInput*)(nativeData);
	//return b2TOIInput_instance->tMax;
	FREObject result;
	return result;
}

 
#endif /* BOX2DANE_C_B2TOIINPUT_H_ */
