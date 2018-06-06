/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewDataSource.h>

@class GKScoreLeaderboard, GKPlayer, GKGameRecord, NSMutableIndexSet, GKShowMoreView;

@interface GKLeaderboardScoresDataSource : GKCollectionViewDataSource {

	GKScoreLeaderboard* _leaderboard;
	GKPlayer* _player;
	SEL _showcaseSelector;
	SEL _showMoreSelector;
	SEL _timeScopeSelector;
	unsigned long long _pageSize;
	GKGameRecord* _game;
	NSMutableIndexSet* _loadedPages;
	unsigned long long _loadedAndReadyScores;
	GKShowMoreView* _showMoreView;
	NSRange _preloadedRange;

}

@property (assign,nonatomic) long long timeScope; 
@property (assign,nonatomic) long long playerScope; 
@property (nonatomic,retain) GKScoreLeaderboard * leaderboard;                     //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                    //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) SEL showcaseSelector;                                 //@synthesize showcaseSelector=_showcaseSelector - In the implementation block
@property (assign,nonatomic) SEL showMoreSelector;                                 //@synthesize showMoreSelector=_showMoreSelector - In the implementation block
@property (assign,nonatomic) SEL timeScopeSelector;                                //@synthesize timeScopeSelector=_timeScopeSelector - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                          //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) NSRange preloadedRange;                               //@synthesize preloadedRange=_preloadedRange - In the implementation block
@property (nonatomic,retain) GKGameRecord * game;                                  //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * loadedPages;                      //@synthesize loadedPages=_loadedPages - In the implementation block
@property (assign,nonatomic) unsigned long long loadedAndReadyScores;              //@synthesize loadedAndReadyScores=_loadedAndReadyScores - In the implementation block
@property (nonatomic,retain) GKShowMoreView * showMoreView;                        //@synthesize showMoreView=_showMoreView - In the implementation block
-(id)initWithLeaderboard:(id)arg1 game:(id)arg2 player:(id)arg3 ;
-(BOOL)needShowcaseCell:(long long)arg1 withMaxRank:(unsigned long long)arg2 ;
-(BOOL)needCompareShowcaseCell:(long long)arg1 withMaxRank:(unsigned long long)arg2 ;
-(void)setTimeScopeSelector:(SEL)arg1 ;
-(void)setShowcaseSelector:(SEL)arg1 ;
-(void)setShowMoreSelector:(SEL)arg1 ;
-(void)loadNextPageWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)pageForItemIndex:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)loadedPages;
-(void)setLoadedPages:(NSMutableIndexSet *)arg1 ;
-(unsigned long long)initialPageCount;
-(id)bottomShowcaseScore;
-(id)topShowcaseScore;
-(void)preloadImagesStartingAtIndex:(unsigned long long)arg1 ;
-(void)notifyWithLeaderboardUpdate:(id)arg1 error:(id)arg2 updateNotifier:(id)arg3 ;
-(void)loadScoresForPages:(NSRange)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)markCell:(id)arg1 ;
-(/*function pointer*/void*)sectionTitleFormatter;
-(id)showcaseCellForScore:(id)arg1 inView:(id)arg2 ;
-(SEL)showcaseSelector;
-(SEL)showMoreSelector;
-(void)setShowMoreView:(GKShowMoreView *)arg1 ;
-(void)replaceLeaderboard:(id)arg1 ;
-(BOOL)needShowcaseCell:(long long)arg1 ;
-(BOOL)needCompareShowcaseCell:(long long)arg1 ;
-(void)configureCell:(id)arg1 withScoreAtIndex:(unsigned long long)arg2 ;
-(SEL)timeScopeSelector;
-(unsigned long long)loadedAndReadyScores;
-(void)setLoadedAndReadyScores:(unsigned long long)arg1 ;
-(GKShowMoreView *)showMoreView;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(GKGameRecord *)game;
-(void)setGame:(GKGameRecord *)arg1 ;
-(long long)timeScope;
-(long long)playerScope;
-(void)setTimeScope:(long long)arg1 ;
-(void)setPlayerScope:(long long)arg1 ;
-(GKScoreLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKScoreLeaderboard *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(id)indexPathsForItem:(id)arg1 ;
-(void)timeScopePressed:(id)arg1 ;
-(void)setPageSize:(unsigned long long)arg1 ;
-(void)setPreloadedRange:(NSRange)arg1 ;
-(NSRange)preloadedRange;
-(unsigned long long)pageSize;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
@end

