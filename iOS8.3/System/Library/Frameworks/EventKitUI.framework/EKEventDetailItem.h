/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;
@class EKEventStore, EKEvent, UIViewController, EKUIRecurrenceAlertController, NSString;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	EKEvent* _event;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	char _allowsEditing;
	char _shouldIndent;
	id<EKEventDetailItemDelegate> _delegate;
	int _cellPosition;

}

@property (assign,nonatomic,__weak) id<EKEventDetailItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                         //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) int cellPosition;                                           //@synthesize cellPosition=_cellPosition - In the implementation block
@property (assign,nonatomic) char shouldIndent;                                          //@synthesize shouldIndent=_shouldIndent - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) char requiresLayoutForSubitemCount; 
@property (nonatomic,readonly) unsigned maximumNumberOfSubItems; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned)arg2 ;
-(void)layoutCellsForWidth:(float)arg1 position:(int)arg2 ;
-(void)setCellPosition:(int)arg1 ;
-(int)cellPosition;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)hasDetailViewControllerAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(char)requiresLayoutForSubitemCount;
-(unsigned)maximumNumberOfSubItems;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)notifySubitemDidCommit:(unsigned)arg1 ;
-(char)saveAndDismissWithForce:(char)arg1 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(char)editItemViewControllerShouldShowDetachAlert;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned)arg2 ;
-(void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned)arg2 ;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned)arg2 ;
-(char)shouldIndent;
-(void)setShouldIndent:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EKEventDetailItemDelegate>)arg1 ;
-(id<EKEventDetailItemDelegate>)delegate;
-(void)reset;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
@end
