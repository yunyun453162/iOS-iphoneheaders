/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventEditItem.h>

@class UITableViewCell;

@interface EKEventDeleteButtonEditItem : EKEventEditItem {

	UITableViewCell* _cell;
	id _deleteButtonTarget;
	SEL _deleteButtonAction;

}
-(bool)shouldAppearWithVisibility:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3 ;
-(void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(void).cxx_destruct;
@end

