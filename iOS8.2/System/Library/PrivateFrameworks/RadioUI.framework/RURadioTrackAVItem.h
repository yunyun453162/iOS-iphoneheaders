/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVItem.h>

@class NSString;

@interface RURadioTrackAVItem : RURadioAVItem {

	NSString* _assetFlavor;

}
-(void)loadAssetAndPlayerItem;
-(void)setIsBanned:(char)arg1 ;
-(void)setIsLiked:(char)arg1 ;
-(char)supportsRadioTrackActions;
-(id)_bestRadioTrackAssetWithAvailableAssets:(id)arg1 ;
-(void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2 ;
-(id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1 ;
-(void)_sendLikeOrBanRequestWithStatus:(int)arg1 ;
-(id)assetFlavor;
@end
