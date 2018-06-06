/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:47 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMMediaItem;
#import <Podcasts/Podcasts-Structs.h>
@class NSOperationQueue, NSManagedObjectModel, MTManagedObjectContext;

@interface MTLibrary : NSObject {

	NSOperationQueue* _updateQueue;
	BOOL _iTunesMatchEnabled;
	id _cloudClient;
	BOOL _subscriptionSyncEnabled;
	BOOL _updateInProgress;
	id<IMMediaItem> _currentPlayingItem;
	NSManagedObjectModel* _managedObjectModel;
	MTManagedObjectContext* _mainQueueContext;
	MTManagedObjectContext* _privateQueueContext;

}

@property (getter=isSubscriptionSyncEnabled,nonatomic,readonly) BOOL subscriptionSyncEnabled;              //@synthesize subscriptionSyncEnabled=_subscriptionSyncEnabled - In the implementation block
@property (getter=isUpdateInProgress,nonatomic,readonly) BOOL updateInProgress;                            //@synthesize updateInProgress=_updateInProgress - In the implementation block
@property (nonatomic,retain) id<IMMediaItem> currentPlayingItem;                                           //@synthesize currentPlayingItem=_currentPlayingItem - In the implementation block
@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                                    //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * mainQueueContext;                                    //@synthesize mainQueueContext=_mainQueueContext - In the implementation block
@property (nonatomic,retain) MTManagedObjectContext * privateQueueContext;                                 //@synthesize privateQueueContext=_privateQueueContext - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * updateQueue; 
+(BOOL)isSupportedUrlString:(id)arg1 ;
+(id)applicationDocumentsDirectory;
+(id)libraryPath;
+(unsigned long long)freeSpace;
+(id)currentPodcastSortDescriptors;
+(id)_applicationCachesDirectory;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
+(id)managedObjectModel;
-(void)endLibraryUpdate;
-(void)startLibraryUpdate;
-(void)setCurrentPlayingItem:(id<IMMediaItem>)arg1 ;
-(MTManagedObjectContext *)mainQueueContext;
-(void)removeDownloadAssetsForEpisodeUuids:(id)arg1 ;
-(void)startObservingLibraryChanges;
-(void)_deleteHiddenPodcasts;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ctx:(id)arg3 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 setSyncDirty:(BOOL)arg2 ctx:(id)arg3 ;
-(BOOL)isSubscribedToPodcastWithUuid:(id)arg1 ;
-(void)_deletePodcastWithUuid:(id)arg1 forced:(BOOL)arg2 ctx:(id)arg3 ;
-(void)_removeDownloadAssetsForEpisodes:(id)arg1 forced:(BOOL)arg2 ;
-(void)_deletePodcastWithId:(id)arg1 ctx:(id)arg2 ;
-(void)_deletePodcast:(id)arg1 ctx:(id)arg2 ;
-(void)_deleteEpisodeUuids:(id)arg1 forced:(BOOL)arg2 ;
-(BOOL)canDeleteEpisode:(id)arg1 ;
-(MTManagedObjectContext *)privateQueueContext;
-(id)_createPersistentStoreCoordinator;
-(void)mergeFromContextDidSave:(id)arg1 ;
-(BOOL)iTunesMatchEnabled;
-(void)updateAllFeedsWithCompletion:(/*^block*/id)arg1 ;
-(id)lastUpdatedDateString;
-(void)finishPlayingEpisodeUuid:(id)arg1 ;
-(void)enableSubscriptionOnPodcastUuid:(id)arg1 ;
-(void)disableSubscriptionOnPodcastUuid:(id)arg1 ;
-(void)markPlaylistsForUpdateForPodcastUuids:(id)arg1 ;
-(BOOL)isSubscribedToPodcastWithFeedUrl:(id)arg1 ;
-(void)deletePodcastWithUuid:(id)arg1 ;
-(void)deleteFromSyncPodcastsWithUuids:(id)arg1 ;
-(void)deleteHiddenPodcasts;
-(void)deleteEpisodeUuids:(id)arg1 ;
-(void)markAsSaved:(BOOL)arg1 forEpisodeUuids:(id)arg2 ;
-(void)removeEpisodeFromOnTheGoPlaylist:(id)arg1 ;
-(void)addEpisodeToOnTheGoPlaylist:(id)arg1 ;
-(id)persistentStoreUuid;
-(void)stopObservingLibraryChanges;
-(void)resetPersistentStore;
-(BOOL)isSubscriptionSyncEnabled;
-(id<IMMediaItem>)currentPlayingItem;
-(void)setMainQueueContext:(MTManagedObjectContext *)arg1 ;
-(void)setPrivateQueueContext:(MTManagedObjectContext *)arg1 ;
-(BOOL)isUpdateInProgress;
-(id)init;
-(id)copy;
-(id)context;
-(NSManagedObjectModel *)managedObjectModel;
-(NSOperationQueue *)updateQueue;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
@end
