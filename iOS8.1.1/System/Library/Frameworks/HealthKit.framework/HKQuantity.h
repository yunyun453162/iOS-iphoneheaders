/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/NSSecureCoding.h>
#import <HealthKit/NSCopying.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {

	double _value;
	HKUnit* _unit;

}

@property (getter=_unit,nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(id)_unit;
-(double)doubleValueForUnit:(id)arg1 ;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
@end

