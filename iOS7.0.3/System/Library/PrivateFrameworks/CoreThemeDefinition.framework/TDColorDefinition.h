/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <CoreThemeDefinition/TDElementAttributes.h>

@class NSDate, NSNumber, NSManagedObject, TDThemeLook, TDColorName;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (nonatomic,@dynamic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,@dynamic,retain) NSNumber * physicalColor; 
@property (nonatomic,@dynamic,retain) NSManagedObject * colorStatus; 
@property (nonatomic,@dynamic,retain) TDThemeLook * look; 
@property (nonatomic,@dynamic,retain) TDColorName * name; 
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)colorAsString;
@end

