/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>
#import <RemoteUI/RUITableViewRowDelegate.h>
#import <RemoteUI/RUITableViewSectionDelegate.h>

@protocol RUITableViewDelegate;
@class NSMutableArray, UITableView, UIPickerView, UIDatePicker, RUIPhotoPicker, _UIBackdropView, NSIndexPath, RUITableViewRow, RUIBarButtonItem, NSDate, RUIObjectModel, RUITableHeaderView, NSDictionary, NSString;

@interface RUITableView : RUIElement <UITableViewDataSource, UITableViewDelegate, UIWebViewDelegate, RUITableViewRowDelegate, RUITableViewSectionDelegate> {

	NSMutableArray* _sections;
	UITableView* _tableView;
	UIPickerView* _selectPicker;
	BOOL _showSelectPicker;
	UIDatePicker* _datePicker;
	RUIPhotoPicker* _photoPicker;
	BOOL _showDatePicker;
	_UIBackdropView* _pickerBackdrop;
	NSIndexPath* _pickerRowIndexPath;
	NSIndexPath* _embeddedPickerRowIndexPath;
	RUITableViewRow* _defaultFirstResponderRow;
	BOOL _registeredForNotifications;
	float _lastLayoutWidth;
	float _fullscreenCellHeight;
	BOOL _showingPickerNavBarButtons;
	RUIBarButtonItem* _oldLeftBarButtonItemForPicker;
	RUIBarButtonItem* _oldRightBarButtonItemForPicker;
	NSDate* _oldPickerDate;
	RUIObjectModel*<RUITableViewDelegate> _objectModel;
	RUITableHeaderView* _headerView;
	NSDictionary* _headerViewAttributes;
	NSDictionary* _footerViewAttributes;

}

@property (getter=isShowingPicker,nonatomic,readonly) BOOL showingPicker; 
@property (nonatomic,readonly) NSMutableArray * sections;                                           //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) RUITableViewRow * defaultFirstResponderRow;                            //@synthesize defaultFirstResponderRow=_defaultFirstResponderRow - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel*<RUITableViewDelegate> objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,readonly) RUITableHeaderView * headerView;                                     //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSDictionary * headerViewAttributes;                                   //@synthesize headerViewAttributes=_headerViewAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerViewAttributes;                                   //@synthesize footerViewAttributes=_footerViewAttributes - In the implementation block
@property (nonatomic,retain) NSString * headerTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sourceURL;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(RUITableHeaderView *)headerView;
-(id)tableView;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSMutableArray *)sections;
-(void)setAttributes:(id)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(BOOL)isShowingPicker;
-(void)setSelectedRadioGroupRow:(id)arg1 ;
-(RUIObjectModel*<RUITableViewDelegate>)objectModel;
-(id)subElementsWithName:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel*<RUITableViewDelegate>)arg1 ;
-(void)viewDidLayout;
-(id)objectModelRowForIndexPath:(id)arg1 ;
-(void)setHeaderViewAttributes:(NSDictionary *)arg1 ;
-(void)setFooterViewAttributes:(NSDictionary *)arg1 ;
-(Class)tableCellClassForTableViewRow:(id)arg1 ;
-(void)textFieldStartedEditing:(id)arg1 ;
-(void)rowIsFirstResponder:(id)arg1 ;
-(void)rowDidChange:(id)arg1 ;
-(void)rowDidEndEditing:(id)arg1 ;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)sourceURLForRUITableViewRow;
-(void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sectionActivatedLink:(id)arg1 attributes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sourceURLForRUITableViewSection;
-(void)automaticKeyboardDidShow:(id)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg1 ;
-(void)_registerForNotifications:(BOOL)arg1 ;
-(id)_objectModelIndexPathForIndexPath:(id)arg1 ;
-(RUITableViewRow *)defaultFirstResponderRow;
-(id)indexPathForRow:(id)arg1 ;
-(void)activateRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDefaultFirstResponderRow:(RUITableViewRow *)arg1 ;
-(void)_clearPickers;
-(void)_datePickerRevert;
-(void)hidePickerViewAnimated:(BOOL)arg1 ;
-(void)_handleLinkPress:(id)arg1 attributes:(id)arg2 ;
-(void)datePickerCancel:(id)arg1 ;
-(void)datePickerDone:(id)arg1 ;
-(void)_hideDatePickerNavBarButtonsIfNeeded;
-(CGRect)_selectPickerFrame;
-(void)_showDatePickerNavBarButtonsIfNeededForRow:(id)arg1 ;
-(void)showPickerViewForRow:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_becomeFirstResponderAtIndexPath:(id)arg1 ;
-(void)_setBottomInset:(float)arg1 ;
-(void)rowActivatedLink:(id)arg1 attributes:(id)arg2 ;
-(NSDictionary *)headerViewAttributes;
-(NSDictionary *)footerViewAttributes;
-(void)_textChanged:(id)arg1 ;
@end
