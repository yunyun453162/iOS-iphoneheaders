/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class UIRemoveControl, UIControl, UIView;

@interface _UITableViewCellOldEditingData : NSObject {

	UIRemoveControl* _removeControl;
	UIControl* _grabber;
	UIView* _separator;

}

@property (nonatomic,retain) UIControl * reorderControl;              //@synthesize grabber=_grabber - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                  //@synthesize separator=_separator - In the implementation block
-(void)dealloc;
-(BOOL)dataRequired;
-(id)reorderControl;
-(void)setReorderControl:(id)arg1 ;
-(id)separatorView;
-(void)setSeparatorView:(id)arg1 ;
@end

