/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSArray, NSString;

@interface CalAlarmMetadata : NSObject <NSCoding> {

	NSArray* _attach;
	NSArray* _attendee;
	NSString* _description;
	NSString* _summary;

}

@property (retain) NSArray * attach;                    //@synthesize attach=_attach - In the implementation block
@property (retain) NSArray * attendee;                  //@synthesize attendee=_attendee - In the implementation block
@property (retain) NSString * description;              //@synthesize description=_description - In the implementation block
@property (retain) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
+(id)metadataWithData:(id)arg1 ;
-(id)attendee;
-(void)setAttendee:(id)arg1 ;
-(void)setAttach:(id)arg1 ;
-(id)initWithICSAlarm:(id)arg1 ;
-(void)applyToAlarm:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)attach;
-(void)setDescription:(id)arg1 ;
-(id)summary;
-(void)setSummary:(id)arg1 ;
-(id)dataRepresentation;
@end

