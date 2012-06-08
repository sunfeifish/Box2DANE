/*================================================================================
*
* File Name: b2AABB.as
* Created on: Mon May 7 22:46:25 GMT-0400 2012
* Copyright (©) 2012 Jesse Nicholson. All Rights Reserved. 
* 
*
*                       ***** BEGIN LICENSE BLOCK *****
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this file,
* You can obtain one at http://mozilla.org/MPL/2.0/.
*                       ***** END  LICENSE  BLOCK *****
*===============================================================================*/

package ca.digitalarchitect.box2dane.collision
{
	import ca.digitalarchitect.box2dane.BaseNativeClass;
	import ca.digitalarchitect.box2dane.common.b2Vec2;
	
	public class b2AABB extends BaseNativeClass
	{

		private var _lowerBound:b2Vec2;
		private var _upperBound:b2Vec2;

		public function b2AABB(nativeMemoryAddress:String = null)
		{
			initializeContext(this, nativeMemoryAddress);
		}

		public function IsValid():Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_IsValid") as Boolean;
		}

		public function GetCenter():b2Vec2
		{
			return nativeContext.call("ane_b2AABB_callback_GetCenter") as b2Vec2;
		}

		public function GetExtents():b2Vec2
		{
			return nativeContext.call("ane_b2AABB_callback_GetExtents") as b2Vec2;
		}

		public function GetPerimeter():Number
		{
			return nativeContext.call("ane_b2AABB_callback_GetPerimeter") as Number;
		}

		public function Combine(aabb:b2AABB):void
		{
			nativeContext.call("ane_b2AABB_callback_Combine", aabb);
		}

		public function Contains(aabb:b2AABB):Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_Contains", aabb) as Boolean;
		}

		public function RayCast(output:b2RayCastOutput, input:b2RayCastInput):Boolean
		{
			return nativeContext.call("ane_b2AABB_callback_RayCast", output, input) as Boolean;
		}

		public function set lowerBound(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_lowerBound = val;
			nativeContext.call("ane_b2AABB_setter_lowerBound", _lowerBound);
		}

		public function get lowerBound():b2Vec2
		{
			/* In this getter, we don't want to be creating a new b2Vec2 on the stack every single
			 * time we want to read the lowerBound variable. So, if we have already created one, we'll
			 * simply pass it as a parameter to this getter and adjust it's values to match the values
			 * of the b2aabb_instance.lowerBound vector.
			 */
			if (_lowerBound != null) {
				nativeContext.call("ane_b2AABB_getter_lowerBound", _lowerBound);
			}else {
				_lowerBound = nativeContext.call("ane_b2AABB_getter_lowerBound") as b2Vec2;
			}
			
			return _lowerBound;
		}

		public function set upperBound(val:b2Vec2):void
		{
			if(_readOnly == true){
				return;
			}
			_upperBound = val;
			nativeContext.call("ane_b2AABB_setter_upperBound", _upperBound);
		}

		public function get upperBound():b2Vec2
		{
			if (_upperBound != null) {
				nativeContext.call("ane_b2AABB_getter_upperBound", _upperBound);
			}else {
				_upperBound = nativeContext.call("ane_b2AABB_getter_upperBound") as b2Vec2;
			}
			
			return _upperBound;
		}

	}
}