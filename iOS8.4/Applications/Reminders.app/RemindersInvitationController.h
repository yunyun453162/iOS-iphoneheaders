/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Reminders/RemindersCardContentController.h>

@protocol RemindersInvitationControllerDelegate;
@class RemindersCardController, RemindersListHeaderView, UIView, UILabel, UIButton, NSLayoutConstraint, EKCalendar, NSString;

@interface RemindersInvitationController : UIViewController <RemindersCardContentController> {

	RemindersListHeaderView* _headerView;
	UIView* _dividerLine;
	UILabel* _joinLabel;
	UILabel* _detailLabel;
	UIButton* _declineButton;
	UIButton* _acceptButton;
	UILabel* _loadingLabel;
	NSLayoutConstraint* _labelPaddingConstraint;
	NSLayoutConstraint* _buttonPaddingConstraint;
	RemindersCardController* _containingCardController;
	EKCalendar* _calendar;
	id<RemindersInvitationControllerDelegate> _delegate;

}

@property (nonatomic,retain) EKCalendar * calendar;                                           //@synthesize calendar=_calendar - In the implementation block
@property (retain) id<RemindersInvitationControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) RemindersCardController * containingCardController;              //@synthesize containingCardController=_containingCardController - In the implementation block
-(void)fontSizeChanged;
-(void)configureHeaderView:(id)arg1 ;
-(void)setupConstraints;
-(id)displayedCalendar;
-(void)setBeingDisplayed:(char)arg1 ;
-(RemindersCardController *)containingCardController;
-(void)setContainingCardController:(RemindersCardController *)arg1 ;
-(char)isScheduled;
-(void)setDelegate:(id<RemindersInvitationControllerDelegate>)arg1 ;
-(id)init;
-(id<RemindersInvitationControllerDelegate>)delegate;
-(void)loadView;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(void)decline;
-(void)accept;
@end
