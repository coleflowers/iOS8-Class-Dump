/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MZKeyValueStoreTransactionProcessing.h>

@class NSMutableSet, MTLibrary, NSString;

@interface MTPlaylistSyncProcessor : NSObject <MZKeyValueStoreTransactionProcessing> {

	NSMutableSet* _addedPlaylists;
	MTLibrary* _library;

}

@property (nonatomic,retain) MTLibrary * library;                   //@synthesize library=_library - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2 ;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3 ;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 domainVersion:(id)arg4 version:(id)arg5 mismatch:(BOOL)arg6 finishedBlock:(/*^block*/id)arg7 ;
-(void)transaction:(id)arg1 willProcessResponseWithDomainVersion:(id)arg2 ;
-(void)transaction:(id)arg1 didProcessResponseWithDomainVersion:(id)arg2 ;
-(void)_mergeSetting:(id)arg1 syncObj:(id)arg2 ;
-(void)_addSetting:(id)arg1 syncObj:(id)arg2 playlist:(id)arg3 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
@end

