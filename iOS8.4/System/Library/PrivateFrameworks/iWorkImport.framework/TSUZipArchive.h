/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface TSUZipArchive : NSObject {

	unsigned long long _options;
	NSMutableDictionary* _entriesMap;
	NSMutableSet* _entries;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) unsigned long long archiveLength; 
-(id)tsp_dataForEntry:(id)arg1 ;
-(void)collapseCommonRootDirectory;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)readFilenameFromBuffer:(const void*)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readExtraFieldsFromBuffer:(const void*)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readFileCommentFromBuffer:(const void*)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5 ;
-(BOOL)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4 ;
-(void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(BOOL)arg2 ;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readChannelForEntry:(id)arg1 ;
-(id)streamReadChannelForEntry:(id)arg1 ;
-(id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)entryForName:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)debugDescription;
-(BOOL)isValid;
-(void)addEntry:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end
