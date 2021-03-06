/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentObject.h>
#import <EventKit/NSCopying.h>

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * emailAddress; 
@property (nonatomic,copy) NSURL * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * comment; 
+(id)defaultPropertiesToLoad;
-(NSURL *)address;
-(id)init;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)UUID;
-(NSString *)displayName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)owner;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setAddress:(NSURL *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end

