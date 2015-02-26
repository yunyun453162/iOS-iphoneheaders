/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol RUTrackActioning <NSObject>
@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) long long cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<RUTrackActionsDelegate> trackActionsDelegate; 
@property (assign,nonatomic) long long enabledActions; 
@property (assign,nonatomic) long long onActions; 
@property (nonatomic,copy) NSString * songText; 
@required
+(CGSize*)artworkSize;
-(CGSize)contentSize;
-(void)setArtworkImage:(id)arg1;
-(void)setArtistText:(id)arg1;
-(NSString *)artistText;
-(void)setTrackActionsDelegate:(id)arg1;
-(void)setSongText:(id)arg1;
-(void)setEnabledActions:(long long)arg1;
-(void)setOnActions:(long long)arg1;
-(UIImage *)artworkImage;
-(long long)actionForButtonIndex:(long long)arg1;
-(long long)cancelIndex;
-(long long)enabledActions;
-(long long)onActions;
-(NSString *)songText;
-(id<RUTrackActionsDelegate>)trackActionsDelegate;

@end
