/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@class GKTurnBasedMatch;

@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource {

	GKTurnBasedMatch* _match;

}

@property (nonatomic,retain) GKTurnBasedMatch * match;              //@synthesize match=_match - In the implementation block
-(id)sectionTitle;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(GKTurnBasedMatch *)match;
-(void)setMatch:(GKTurnBasedMatch *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
@end

