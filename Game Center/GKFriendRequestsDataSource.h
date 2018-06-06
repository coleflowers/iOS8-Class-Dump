/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@interface GKFriendRequestsDataSource : GKBasicCollectionViewDataSource
+(id)sortedArrayOfFriendRequests:(id)arg1 ;
-(void)removeRequestWithoutDeclineFromPlayer:(id)arg1 ;
-(void)declineRequestFromPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptRequestFromPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)sectionTitle;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

