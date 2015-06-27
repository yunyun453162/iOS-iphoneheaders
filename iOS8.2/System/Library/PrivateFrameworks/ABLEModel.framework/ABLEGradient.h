/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ABLEBONDrain;

@interface ABLEGradient : NSObject {

	float _minDecay;
	float _maxDecay;
	ABLEBONDrain* _drainMap;

}

@property (readonly) float minDecay;                       //@synthesize minDecay=_minDecay - In the implementation block
@property (readonly) float maxDecay;                       //@synthesize maxDecay=_maxDecay - In the implementation block
@property (readonly) ABLEBONDrain * drainMap;              //@synthesize drainMap=_drainMap - In the implementation block
-(id)initWithCurveAndMinDecay:(float)arg1 andMaxDecay:(float)arg2 ;
-(id)initWithCurve:(id)arg1 minDecay:(float)arg2 maxDecay:(float)arg3 ;
-(float)calculateHourlyDecayRate:(id)arg1 ;
-(unsigned)calculateBONfromDrainRate:(float)arg1 ;
-(float)calculateHourlyDecayRateFromTable:(id)arg1 ;
-(unsigned)calculateLinearBONfromDrainRate:(float)arg1 ;
-(id)initWithMinDecay:(float)arg1 andMaxDecay:(float)arg2 ;
-(unsigned)calculateBON:(id)arg1 ;
-(unsigned)calculateBONfromTable:(id)arg1 ;
-(float)minDecay;
-(float)maxDecay;
-(ABLEBONDrain *)drainMap;
@end
