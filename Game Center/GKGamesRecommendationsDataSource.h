/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@interface GKGamesRecommendationsDataSource : GKBasicCollectionViewDataSource {

	long long _maxItemCount;

}

@property (assign,nonatomic) long long maxItemCount;              //@synthesize maxItemCount=_maxItemCount - In the implementation block
-(void)loadGamesWithHandler:(/*^block*/id)arg1 ;
-(id)sectionTitle;
-(void)dealloc;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)maxItemCount;
-(void)setMaxItemCount:(long long)arg1 ;
-(SEL)showAllAction;
@end
