/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSMutableArray, NSArray;

@interface BKBookDebugMenuController : UITableViewController {

	NSMutableArray* _mutableEntries;

}

@property (nonatomic,readonly) NSArray * entries; 
@property (nonatomic,retain) NSMutableArray * mutableEntries;              //@synthesize mutableEntries=_mutableEntries - In the implementation block
-(id)_entryWithName:(id)arg1 ;
-(NSMutableArray *)mutableEntries;
-(void)addEntryWithName:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)setMutableEntries:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(NSArray *)entries;
-(void)removeEntryWithName:(id)arg1 ;
-(void)_reload;
@end
