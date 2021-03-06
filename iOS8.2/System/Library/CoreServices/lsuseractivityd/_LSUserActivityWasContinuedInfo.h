/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/lsuseractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSError;

@interface _LSUserActivityWasContinuedInfo : NSObject {

	char _submitted;
	char _fromPairedDevice;
	char _browserFallback;
	char _cancelled;
	NSString* _bundleIdentifier;
	NSString* _activityType;
	unsigned _payloadSize;
	NSError* _error;
	int _interactionType;
	double _transferSpeed;
	double _transferDuration;

}

@property (copy) NSString * bundleIdentifier;                             //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSString * activityType;                                 //@synthesize activityType=_activityType - In the implementation block
@property (getter=isFromPairedDevice) char fromPairedDevice;              //@synthesize fromPairedDevice=_fromPairedDevice - In the implementation block
@property (getter=isBrowserFallback) char browserFallback;                //@synthesize browserFallback=_browserFallback - In the implementation block
@property (assign) unsigned payloadSize;                                  //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign) double transferSpeed;                                  //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign) double transferDuration;                               //@synthesize transferDuration=_transferDuration - In the implementation block
@property (copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (getter=isCancelled) char cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (assign) int interactionType;                                   //@synthesize interactionType=_interactionType - In the implementation block
-(double)transferSpeed;
-(char)isBrowserFallback;
-(void)submitWasSuggestedInfo;
-(char)isFromPairedDevice;
-(void)setFromPairedDevice:(char)arg1 ;
-(void)setBrowserFallback:(char)arg1 ;
-(void)setTransferSpeed:(double)arg1 ;
-(void)setTransferDuration:(double)arg1 ;
-(double)transferDuration;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)setCancelled:(char)arg1 ;
-(char)isCancelled;
-(int)interactionType;
-(void)setInteractionType:(int)arg1 ;
-(NSString *)activityType;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)submit;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setPayloadSize:(unsigned)arg1 ;
-(unsigned)payloadSize;
@end

