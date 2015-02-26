/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionGroup.h>

@class AVAsset, NSDictionary, NSArray, AVMediaSelectionOption;

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {

	AVAsset* _asset;
	NSDictionary* _dictionary;
	NSArray* _options;
	AVMediaSelectionOption* _defaultOption;
	BOOL _isStreamingGroup;

}
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(BOOL)_isStreamingGroup;
-(id)defaultOption;
-(id)initWithAsset:(id)arg1 dictionary:(id)arg2 ;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
-(id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(BOOL)arg4 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
-(id)options;
-(id)asset;
@end
