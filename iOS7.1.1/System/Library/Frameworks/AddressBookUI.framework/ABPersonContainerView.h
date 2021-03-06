/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>
#import <AddressBookUI/ABPersonTabsLayoutManager.h>

@class UISegmentedControl, UIView, ABPersonTableView, ABPersonTableViewDataSource, ABPersonOverlayingContainerView, UIImageView;

@interface ABPersonContainerView : UIView <ABPersonTabsLayoutManager> {

	UISegmentedControl* _contentSwitchingTabs;
	bool _hidesContentSwitchingTabs;
	UIView* _nonScrollableHeaderView;
	ABPersonTableView* _tableView;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonOverlayingContainerView* _overlayingContainerView;
	UIImageView* _contentSwitchingTabsPocketShadow;
	UIImageView* _contentSwitchingTabsBorder;

}

@property (nonatomic,retain) ABPersonOverlayingContainerView * overlayingContainerView;               //@synthesize overlayingContainerView=_overlayingContainerView - In the implementation block
@property (nonatomic,retain) UISegmentedControl * contentSwitchingTabs;                               //@synthesize contentSwitchingTabs=_contentSwitchingTabs - In the implementation block
@property (nonatomic,retain) UIImageView * contentSwitchingTabsPocketShadow;                          //@synthesize contentSwitchingTabsPocketShadow=_contentSwitchingTabsPocketShadow - In the implementation block
@property (nonatomic,retain) UIImageView * contentSwitchingTabsBorder;                                //@synthesize contentSwitchingTabsBorder=_contentSwitchingTabsBorder - In the implementation block
@property (assign,nonatomic) bool hidesContentSwitchingTabs;                                          //@synthesize hidesContentSwitchingTabs=_hidesContentSwitchingTabs - In the implementation block
@property (nonatomic,retain) ABPersonTableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * nonScrollableHeaderView;                                        //@synthesize nonScrollableHeaderView=_nonScrollableHeaderView - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) UIScrollView<ABPersonTabsScrollView> * currentScrollView; 
-(void)didChangeContentOffset:(CGPoint)arg1 inScrollView:(id)arg2 ;
-(void)moveContentSwitchingTabsAboveView:(id)arg1 inScrollView:(id)arg2 ;
-(void)repositionContentSwitchingTabs;
-(double)heightForHeaderAndContentSwitchingTabs;
-(id)currentScrollView;
-(id)viewContainingHeaderView;
-(id)contentSwitchingTabs;
-(bool)hidesContentSwitchingTabs;
-(double)heightNeededForContentSwitchingTabs;
-(id)overlayingContainerView;
-(void)setContentSwitchingTabs:(id)arg1 ;
-(void)setContentSwitchingTabsPocketShadow:(id)arg1 ;
-(void)setContentSwitchingTabsBorder:(id)arg1 ;
-(void)setHidesContentSwitchingTabs:(bool)arg1 ;
-(void)setOverlayingContainerView:(id)arg1 ;
-(void)setNonScrollableHeaderView:(id)arg1 ;
-(id)prepareToRestoreTabsPosition;
-(void)restoreTabsPosition:(id)arg1 ;
-(id)nonScrollableHeaderView;
-(id)contentSwitchingTabsPocketShadow;
-(id)contentSwitchingTabsBorder;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)dataSource;
-(void)setTableView:(id)arg1 ;
-(id)tableView;
@end

