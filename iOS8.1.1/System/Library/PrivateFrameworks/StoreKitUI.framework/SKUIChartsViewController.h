/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUICategoryControllerDelegate.h>
#import <StoreKitUI/SKUIMetricsViewController.h>
#import <StoreKitUI/SKUIViewControllerTesting.h>

@class SKUICategoryController, SKUIStorePageViewController, NSURL, NSString;

@interface SKUIChartsViewController : SKUIViewController <SKUICategoryControllerDelegate, SKUIMetricsViewController, SKUIViewControllerTesting> {

	SKUICategoryController* _categoryController;
	BOOL _hasCategoryButton;
	SKUIStorePageViewController* _storePageViewController;
	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_defaultURL;
-(void)dealloc;
-(void)reloadData;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_storePageViewController;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(id)activeMetricsController;
-(void)_reloadNavigationItem;
-(void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(id)_categoryController;
-(void)categoryController:(id)arg1 didSelectCategory:(id)arg2 ;
-(void)_loadStorePage;
-(void)_loadCategoriesWithURL:(id)arg1 ;
@end
