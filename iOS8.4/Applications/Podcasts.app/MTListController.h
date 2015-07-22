/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTToolbarHeaderViewController.h>
#import <Podcasts/MTTableViewDataSource.h>

@class NSMutableDictionary, MTContentUnavailableView, MTButtonBar, UIActionSheet, UIButton, UIBarButtonItem, UIImageView, UIView, NSString, MTTableView;

@interface MTListController : MTToolbarHeaderViewController <MTTableViewDataSource> {

	NSMutableDictionary* _resultsChangedBlocks;
	MTContentUnavailableView* _emptyOverlay;
	MTButtonBar* _headerView;
	UIActionSheet* _moreActionsSheet;
	UIActionSheet* _markActionSheet;
	char _moreActionsSheetVisibleBeforeRotation;
	char _markSheetVisibleBeforeRotation;
	UIButton* _editButton;
	UIButton* _doneButton;
	UIButton* _actionsButton;
	UIButton* _deleteButton;
	UIButton* _markButton;
	UIButton* _downloadButton;
	UIBarButtonItem* _doneButtonItem;
	UIBarButtonItem* _actionsButtonItem;
	UIBarButtonItem* _removeButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIImageView* _defaultFooterView;
	char _hidesFooterWhenEmpty;
	char _showMarkButtonInsteadOfRemoveButton;
	int _state;
	UIView* _footerView;
	NSString* _emptyListMessage;

}

@property (nonatomic,retain) MTTableView * tableView; 
@property (nonatomic,readonly) int state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                   //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSString * emptyListMessage;                             //@synthesize emptyListMessage=_emptyListMessage - In the implementation block
@property (assign,nonatomic) char hidesFooterWhenEmpty;                             //@synthesize hidesFooterWhenEmpty=_hidesFooterWhenEmpty - In the implementation block
@property (assign,nonatomic) char showMarkButtonInsteadOfRemoveButton;              //@synthesize showMarkButtonInsteadOfRemoveButton=_showMarkButtonInsteadOfRemoveButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateMarkButtons;
-(void)finishEditing:(id)arg1 ;
-(void)initializeFrc;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(char)arg2 ;
-(void)refetchWithPredicate:(id)arg1 ;
-(void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(char)arg3 ;
-(void)setEmptyListMessage:(NSString *)arg1 ;
-(void)transitionToState:(int)arg1 animated:(char)arg2 ;
-(void)refreshBarButtons;
-(id)actionsButton;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(char)usesBaseButtons;
-(id)editingToolbarButtons;
-(void)markSelectedItems:(char)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)toolbarButtons;
-(id)emptyOverlay;
-(void)setShowMarkButtonInsteadOfRemoveButton:(char)arg1 ;
-(void)updateListStateAnimated:(char)arg1 ;
-(char)hasItems;
-(id)markButton;
-(NSString *)emptyListMessage;
-(id)leftButtonItems;
-(id)actionsButtonItem;
-(id)removeButtonItem;
-(id)downloadButton;
-(id)leftEditingItems;
-(id)rightEditingItems;
-(void)downloadAll:(id)arg1 ;
-(id)rightButtonItems;
-(void)moreActionsTapped:(id)arg1 ;
-(void)markButtonTapped:(id)arg1 ;
-(void)transitionControlsForEditing:(char)arg1 animated:(char)arg2 ;
-(char)hidesFooterWhenEmpty;
-(char)showMarkButtonInsteadOfRemoveButton;
-(id)markAsPlayedTitleForCount:(int)arg1 ;
-(id)markAsUnplayedTitleForCount:(int)arg1 ;
-(char)isSelectedMediaTypeVideo;
-(void)removeSelectedItems:(id)arg1 ;
-(id)addResultsChangedBlock:(/*^block*/id)arg1 ;
-(void)removeResultsChangedBlock:(id)arg1 ;
-(void)setHidesFooterWhenEmpty:(char)arg1 ;
-(id)markButtonItem;
-(id)_footerView;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)state;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)headerView;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)deleteButton;
-(id)doneButton;
-(id)editButton;
-(id)doneButtonItem;
@end
