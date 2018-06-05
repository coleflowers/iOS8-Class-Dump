/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTraceDelegate, OS_dispatch_queue, OS_dispatch_group;
#import <Maps/Maps-Structs.h>
@class NSString, NSObject, NSArray;

@interface MNTrace : NSObject {

	id<MNTraceDelegate> _traceDelegate;
	NSString* _path;
	sqlite3Ref _db;
	int _dbResult;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSObject*<OS_dispatch_group> _writeGroup;
	NSArray* _bookmarks;

}

@property (assign,nonatomic,__weak) id<MNTraceDelegate> traceDelegate;              //@synthesize traceDelegate=_traceDelegate - In the implementation block
@property (nonatomic,retain) NSString * path;                                       //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) sqlite3Ref db;                                         //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;               //@synthesize writeQueue=_writeQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> writeGroup;               //@synthesize writeGroup=_writeGroup - In the implementation block
@property (nonatomic,retain) NSArray * bookmarks;                                   //@synthesize bookmarks=_bookmarks - In the implementation block
-(void)setBookmarks:(NSArray *)arg1 ;
-(BOOL)closeTrace;
-(void)_logSqliteErrorWithFile:(const char*)arg1 line:(int)arg2 ;
-(NSObject*<OS_dispatch_group>)writeGroup;
-(BOOL)openTraceReadOnly:(BOOL)arg1 ;
-(unsigned long long)recordBookmarkAtTime:(double)arg1 ;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWriteGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id<MNTraceDelegate>)traceDelegate;
-(void)setTraceDelegate:(id<MNTraceDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(NSArray *)bookmarks;
-(NSObject*<OS_dispatch_queue>)writeQueue;
@end
