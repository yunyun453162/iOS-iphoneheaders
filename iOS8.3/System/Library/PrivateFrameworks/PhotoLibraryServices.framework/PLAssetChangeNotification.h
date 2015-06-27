/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:07 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification {

	NSSet* _updatedAssets;

}

@property (nonatomic,copy) NSSet * updatedAssets;              //@synthesize updatedAssets=_updatedAssets - In the implementation block
+(id)notificationWithChangedAssets:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)_init;
-(id)userInfo;
-(id)object;
-(NSSet *)updatedAssets;
-(id)_initWithChangedObjects:(id)arg1 ;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
@end
