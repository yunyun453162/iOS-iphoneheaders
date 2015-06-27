/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:04:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <Maps/MAListSnippetViewDelegate.h>
#import <Maps/MAMapSnippetViewDelegate.h>
#import <Maps/CLLocationManagerDelegate.h>

@protocol SiriUISnippetViewControllerDelegate;
@class CLLocationManager, SALocation, SALocalSearchMapItemSnippet, NSString;

@interface MAMapsSnippetController : SiriUISnippetViewController <MAListSnippetViewDelegate, MAMapSnippetViewDelegate, CLLocationManagerDelegate> {

	CLLocationManager* _locManager;
	char _appearing;
	SALocation* _searchRegionCenter;
	double _fallbackDistance;
	char _hasEverStartedLoading;
	id<SiriUISnippetViewControllerDelegate> _delegate;
	SALocalSearchMapItemSnippet* _snippet;

}

@property (nonatomic,retain) SALocalSearchMapItemSnippet * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)headerLocationForSearchCenter:(id)arg1 location:(SCD_Struct_MA0)arg2 forMapItem:(id)arg3 ;
-(id)nearCityString:(id)arg1 ;
-(void)updateTitleAndSubtitleWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)listView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(void)mapView:(id)arg1 didChooseMapItem:(id)arg2 ;
-(void)mapViewDidChooseMapAttribution:(id)arg1 ;
-(id)titleForList:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setSnippet:(SALocalSearchMapItemSnippet *)arg1 ;
-(SALocalSearchMapItemSnippet *)snippet;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)initWithSnippet:(id)arg1 ;
-(void)_cleanUp;
@end
