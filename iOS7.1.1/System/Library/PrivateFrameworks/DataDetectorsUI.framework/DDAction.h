/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSDictionary, NSURL;

@interface DDAction : NSObject <NSCoding, NSSecureCoding> {

	_DDResult* _result;
	_DDResult* _coalescedResult;
	CFArrayRef _associatedResults;
	NSDictionary* _context;
	NSURL* _url;
	bool _cachedCoalescedResult;
	bool _cachedAssociatedResults;
	bool _isDefaultAction;
	id _delegate;

}

@property (assign) bool isDefaultAction;              //@synthesize isDefaultAction=_isDefaultAction - In the implementation block
@property (assign) id delegate;                       //@synthesize delegate=_delegate - In the implementation block
+(bool)supportsSecureCoding;
+(id)actionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
+(id)defaultActionWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)context;
-(id)viewController;
-(id)localizedName;
-(int)interactionType;
-(id)url;
-(void)perform;
-(void)addToRecents;
-(void)setIsDefaultAction:(bool)arg1 ;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(_DDResult*)coalescedResult;
-(CFArrayRef)associatedResults;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(void)_copyURL:(id)arg1 andString:(id)arg2 ;
-(void)_copyURL:(id)arg1 ;
-(bool)isDefaultAction;
-(_DDResult*)result;
@end
