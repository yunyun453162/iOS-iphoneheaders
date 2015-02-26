/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUSearchDataSourceDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUSearchViewControllerDelegate;
@class SKUICircleProgressIndicator, RadioSearchStationResult, RUSearchDataSource, SSMetricsPageEvent, NSError, UILabel, RUMetricsController, NSMutableArray, NSString, UITableView, UIView;

@interface RUSearchViewController : UIViewController <RUSearchDataSourceDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate> {

	SKUICircleProgressIndicator* _activityIndicatorView;
	RadioSearchStationResult* _addingStationResult;
	RUSearchDataSource* _dataSource;
	SSMetricsPageEvent* _lastPageEvent;
	NSError* _lastSearchError;
	UILabel* _loadingLabel;
	CGRect _keyboardFrame;
	RUMetricsController* _metricsController;
	UILabel* _noResultsLabel;
	NSMutableArray* _queuedMetricsOperations;
	NSMutableArray* _resultCategories;
	NSString* _searchTerm;
	long long _seeingMoreCategoryType;
	BOOL _displaysCoreSeedName;
	BOOL _excludeFeaturedStations;
	BOOL _showsAddingIndicator;
	id<RUSearchViewControllerDelegate> _delegate;
	UITableView* _tableView;
	UIView* _tableViewBackgroundView;

}

@property (assign,nonatomic,__weak) id<RUSearchViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displaysCoreSeedName;                                       //@synthesize displaysCoreSeedName=_displaysCoreSeedName - In the implementation block
@property (assign,nonatomic) BOOL excludeFeaturedStations;                                    //@synthesize excludeFeaturedStations=_excludeFeaturedStations - In the implementation block
@property (assign,nonatomic) BOOL showsAddingIndicator;                                       //@synthesize showsAddingIndicator=_showsAddingIndicator - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * tableViewBackgroundView;                                //@synthesize tableViewBackgroundView=_tableViewBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUSearchViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<RUSearchViewControllerDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(UITableView *)tableView;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2 ;
-(void)searchDisplayControllerDidBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)_addMetricsControllerOperationBlock:(/*^block*/id)arg1 ;
-(void)removeAddingIndicator;
-(void)_updateViewForHorizontalSizeClassChange;
-(void)setDisplaysCoreSeedName:(BOOL)arg1 ;
-(void)setExcludeFeaturedStations:(BOOL)arg1 ;
-(void)setShowsAddingIndicator:(BOOL)arg1 ;
-(void)searchDataSource:(id)arg1 willStartSearchRequest:(id)arg2 ;
-(void)searchDataSource:(id)arg1 didFinishUpdatingResult:(id)arg2 forRequest:(id)arg3 withError:(id)arg4 ;
-(void)setTableViewBackgroundView:(UIView *)arg1 ;
-(id)_createPageEventForCurrentState;
-(void)_configureSeeMoreCell:(id)arg1 forResultCategory:(id)arg2 ;
-(void)_configureSectionHeader:(id)arg1 forResultCategory:(id)arg2 ;
-(id)_statusLabelFont;
-(void)_layoutSearchSubviews;
-(void)_setShowingLoading:(BOOL)arg1 ;
-(void)_updateVisibleHeadersState;
-(id)_currentVisibleStationDictionaries;
-(id)_impressionsWithStationDictionaries:(id)arg1 fieldsMap:(id)arg2 ;
-(void)_reloadForSearchTerm:(id)arg1 canUpdateDataSourceResults:(BOOL)arg2 ;
-(id)_parentPageDescription;
-(id)_parentPageType;
-(id)_sectionHeaderTitleFontWithEmphasis:(BOOL)arg1 ;
-(id)_firstValueForKeyInImpressionsMap:(id)arg1 withStationDictionary:(id)arg2 ;
-(void)updateResultsForSearchTerm:(id)arg1 ;
-(BOOL)displaysCoreSeedName;
-(BOOL)excludeFeaturedStations;
-(BOOL)showsAddingIndicator;
-(UIView *)tableViewBackgroundView;
-(void)_clearButtonAction:(id)arg1 ;
@end
