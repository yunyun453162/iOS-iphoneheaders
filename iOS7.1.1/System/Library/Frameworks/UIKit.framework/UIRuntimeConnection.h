/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:54 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface UIRuntimeConnection : NSObject <NSCoding> {

	id source;
	id destination;
	NSString* label;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)connectForSimulator;
-(void)connect;
-(id)source;
-(void)setSource:(id)arg1 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
@end
