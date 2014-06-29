/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@interface UIAccessibilityElementKBEmoji : UIAccessibilityElement {

	id _emoji;
	unsigned long long _emojiIndex;
	id _emojiPage;

}

@property (nonatomic,retain) id emoji;                                   //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) unsigned long long emojiIndex;              //@synthesize emojiIndex=_emojiIndex - In the implementation block
@property (nonatomic,retain) id emojiPage;                               //@synthesize emojiPage=_emojiPage - In the implementation block
-(void)setEmojiPage:(id)arg1 ;
-(unsigned long long)emojiIndex;
-(void)setEmojiIndex:(unsigned long long)arg1 ;
-(id)emojiPage;
-(void)dealloc;
-(id)accessibilityLabel;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(id)emoji;
-(void)setEmoji:(id)arg1 ;
@end
