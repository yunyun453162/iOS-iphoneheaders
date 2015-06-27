/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRunningCurve : NSObject {

	SCD_Struct_VK371 _p0;
	double _t0;
	SCD_Struct_VK371 _p1;
	double _t1;
	SCD_Struct_VK371 _pu;
	double _tu;
	SCD_Struct_VK372 _mb;
	char _mbValid;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(SCD_Struct_VK373)stateAtTime:(double)arg1 ;
-(char)hasStateAtTime:(double)arg1 ;
-(void)appendPosition:(VKPoint)arg1 atTime:(double)arg2 ;
@end
