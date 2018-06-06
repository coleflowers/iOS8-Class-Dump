/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewDataSource.h>

@class GKPlayer, GKGame, NSDictionary;

@interface GKScoreChallengeSuggestionDataSource : GKBasicCollectionViewDataSource {

	GKPlayer* _friend;
	GKGame* _game;
	NSDictionary* _leaderboardIdentifierToLeaderboard;

}

@property (nonatomic,retain) GKPlayer * friend;                                              //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardIdentifierToLeaderboard;              //@synthesize leaderboardIdentifierToLeaderboard=_leaderboardIdentifierToLeaderboard - In the implementation block
+(id)suggestionDataSourceForFriend:(id)arg1 game:(id)arg2 ;
-(id)initWithFriend:(id)arg1 game:(id)arg2 ;
-(void)setLeaderboardIdentifierToLeaderboard:(NSDictionary *)arg1 ;
-(NSDictionary *)leaderboardIdentifierToLeaderboard;
-(id)sectionTitle;
-(void)dealloc;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(GKPlayer *)friend;
-(void)setFriend:(GKPlayer *)arg1 ;
@end

