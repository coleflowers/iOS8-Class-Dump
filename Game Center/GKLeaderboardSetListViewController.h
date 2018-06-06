/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBasicCollectionViewController.h>

@class GKLeaderboardSet, GKGameRecord, GKPlayer, UIPopoverController;

@interface GKLeaderboardSetListViewController : GKBasicCollectionViewController {

	GKLeaderboardSet* _leaderboardSet;
	GKGameRecord* _game;
	GKPlayer* _player;
	UIPopoverController* _detailPopover;

}

@property (nonatomic,retain) GKLeaderboardSet * leaderboardSet;                //@synthesize leaderboardSet=_leaderboardSet - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailPopover;              //@synthesize detailPopover=_detailPopover - In the implementation block
-(id)initWithGame:(id)arg1 player:(id)arg2 ;
-(GKLeaderboardSet *)leaderboardSet;
-(void)setLeaderboardSet:(GKLeaderboardSet *)arg1 ;
-(void)setDetailPopover:(UIPopoverController *)arg1 ;
-(UIPopoverController *)detailPopover;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(GKGameRecord *)game;
-(void)setGame:(GKGameRecord *)arg1 ;
-(void)configureDataSource;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
@end

