/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarFoundation/NSSecureCoding.h>

@class CalLocation, NSString;

@interface CalRoute : NSObject <NSSecureCoding> {

	CalLocation* _start;
	CalLocation* _end;
	double _duration;
	NSString* _route;

}

@property (retain) CalLocation * start;              //@synthesize start=_start - In the implementation block
@property (retain) CalLocation * end;                //@synthesize end=_end - In the implementation block
@property (assign) double duration;                  //@synthesize duration=_duration - In the implementation block
@property (copy) NSString * route;                   //@synthesize route=_route - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CalLocation *)start;
-(CalLocation *)end;
-(void)setStart:(CalLocation *)arg1 ;
-(void)setEnd:(CalLocation *)arg1 ;
-(void)setRoute:(NSString *)arg1 ;
-(NSString *)route;
@end

