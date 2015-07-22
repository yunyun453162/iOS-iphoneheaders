/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class MBSCacheStmt;

@interface MBSFileChangeEnumerator : NSEnumerator {

	MBSCacheStmt* _stmt;
	id _objects[64];
	int _count;
	int _next;
	long long _lastRowID;
	BOOL _done;

}
+(id)enumeratorWithCache:(id)arg1 ;
-(id)_fileChangeFromStmt:(id)arg1 ;
-(void)_fetch;
-(id)initWithCache:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MB13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)nextObject;
@end
