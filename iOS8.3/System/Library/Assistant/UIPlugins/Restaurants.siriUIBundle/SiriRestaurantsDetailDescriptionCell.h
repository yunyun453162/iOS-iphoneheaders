/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:07:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, SiriRestaurantsThumbnailsView;

@interface SiriRestaurantsDetailDescriptionCell : SiriUIContentCollectionViewCell {

	UILabel* _openCloseStatusLabel;
	UILabel* _openHoursLabel;
	UILabel* _priceLabel;
	UILabel* _categoriesLabel;
	SiriRestaurantsThumbnailsView* _thumbsView;

}
+(void)_displayStringsForOperationHours:(id)arg1 width:(float)arg2 outStatusString:(id*)arg3 outHoursString:(id*)arg4 outStatusWithHoursString:(id*)arg5 ;
+(float)heightForParsedOpenHoursInfo:(id)arg1 hasCategories:(char)arg2 hasPriceRange:(char)arg3 hasPhoto:(char)arg4 forWidth:(float)arg5 ;
-(void)_setPriceInfoWithRestaurant:(id)arg1 ;
-(void)_setPhotos:(id)arg1 ;
-(void)_layoutView:(id)arg1 withX:(float)arg2 Y:(float)arg3 maxWidth:(float)arg4 ;
-(void)_setInfoTextWithRestaurant:(id)arg1 operationHours:(id)arg2 ;
-(void)_setCategoriesInfoWithRestaurant:(id)arg1 ;
-(void)configureWithRestaurant:(id)arg1 operationHours:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

