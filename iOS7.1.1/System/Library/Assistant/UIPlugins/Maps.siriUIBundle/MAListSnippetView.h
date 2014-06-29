/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Maps/MAResultViewDelegate.h>

@protocol MAListSnippetViewDelegate;
@class NSArray, UITableView, NSMutableArray, CLLocation, MAAttributionView, NSMutableSet;

@interface MAListSnippetView : UIView <UITableViewDataSource, UITableViewDelegate, MAResultViewDelegate> {

	NSArray* _mapsItems;
	UITableView* _tableView;
	NSMutableArray* _attributions;
	CLLocation* _userLocation;
	bool _itemsCanPunchOut;
	MAAttributionView* _attributionView;
	NSMutableSet* _cellSet;
	NSArray* _mapItems;
	<MAListSnippetViewDelegate>* delegate;

}

@property (nonatomic,readonly) MAAttributionView * attributionView;                      //@synthesize attributionView=_attributionView - In the implementation block
@property (assign,nonatomic,__weak) <MAListSnippetViewDelegate> * delegate; 
@property (nonatomic,readonly) NSArray * mapItems;                                       //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,retain) CLLocation * userLocation; 
@property (assign,nonatomic) bool itemsCanPunchOut;                                      //@synthesize itemsCanPunchOut=_itemsCanPunchOut - In the implementation block
-(id)initWithFrame:(CGRect)arg1 mapItems:(id)arg2 ;
-(void)_reviewsCellButtonTapped;
-(void)setItemsCanPunchOut:(bool)arg1 ;
-(id)attributionView;
-(void)didTaponMapsForMapItem:(id)arg1 ;
-(void)didTapOnReviewsForMapItem:(id)arg1 ;
-(bool)itemsCanPunchOut;
-(double)desiredHeight;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)setUserLocation:(id)arg1 ;
-(id)mapItems;
-(id)userLocation;
@end
