/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol GKGameProfileCollectionViewControllerServiceDelegate;
@class GKGameRecord, GKGameRecommendationInternal, NSString, GKSegmentedSectionDataSource, GKAchievementsDataSource, GKChallengesDataSource, GKCollectionViewDataSource, UICollectionReusableView, GKSupplementaryViewMetrics, GKLeaderboardScoresDataSource, GKLeaderboardHeaderView, GKCollectionViewAggregateDataSource, GKFriendPlayersDataSource, GKGameRecentPlayersDataSource, NSArray, UIActivityViewController;

@interface GKGameProfileCollectionViewController : GKCollectionViewController <UIViewControllerRestoration> {

	BOOL _purchasableGame;
	BOOL _shouldHideHeader;
	BOOL _shouldHideSegment;
	BOOL _shouldUpdateShowcaseRowInUpdateMetrics;
	BOOL _firstAppearance;
	id<GKGameProfileCollectionViewControllerServiceDelegate> _serviceDelegateWeak;
	GKGameRecord* _game;
	GKGameRecommendationInternal* _recommendation;
	long long _viewState;
	NSString* _leaderboardIdentifier;
	long long _leaderboardTimeScope;
	GKSegmentedSectionDataSource* _segmentedDataSource;
	GKAchievementsDataSource* _achievementsDataSource;
	GKChallengesDataSource* _challengesDataSource;
	GKCollectionViewDataSource* _leaderboardDataSource;
	UICollectionReusableView* _headerView;
	GKSupplementaryViewMetrics* _segmentedControlMetrics;
	GKLeaderboardScoresDataSource* _globalLeaderboardDataSource;
	GKLeaderboardScoresDataSource* _friendsLeaderboardDataSource;
	GKLeaderboardHeaderView* _leaderboardHeader;
	GKCollectionViewAggregateDataSource* _playersDataSource;
	GKFriendPlayersDataSource* _friendPlayersDataSource;
	GKGameRecentPlayersDataSource* _recentPlayersDataSource;
	NSArray* _actionSheetActions;
	long long _numberOfLeaderboardColumnsPortrait;
	long long _numberOfLeaderboardColumnsLandscape;
	UIActivityViewController* _currentActivityViewController;
	id _globalLeaderboardKVOToken;

}

@property (nonatomic,retain) GKGameRecord * game;                                                                   //@synthesize game=_game - In the implementation block
@property (getter=isPurchasableGame) BOOL purchasableGame;                                                          //@synthesize purchasableGame=_purchasableGame - In the implementation block
@property (nonatomic,retain) GKGameRecommendationInternal * recommendation;                                         //@synthesize recommendation=_recommendation - In the implementation block
@property (assign,nonatomic) long long viewState;                                                                   //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,retain) NSString * leaderboardIdentifier;                                                      //@synthesize leaderboardIdentifier=_leaderboardIdentifier - In the implementation block
@property (assign,nonatomic) long long leaderboardTimeScope;                                                        //@synthesize leaderboardTimeScope=_leaderboardTimeScope - In the implementation block
@property (assign,nonatomic) id<GKGameProfileCollectionViewControllerServiceDelegate> serviceDelegate;              //@synthesize serviceDelegateWeak=_serviceDelegateWeak - In the implementation block
@property (nonatomic,retain) GKSegmentedSectionDataSource * segmentedDataSource;                                    //@synthesize segmentedDataSource=_segmentedDataSource - In the implementation block
@property (nonatomic,retain) GKAchievementsDataSource * achievementsDataSource;                                     //@synthesize achievementsDataSource=_achievementsDataSource - In the implementation block
@property (nonatomic,retain) GKChallengesDataSource * challengesDataSource;                                         //@synthesize challengesDataSource=_challengesDataSource - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * leaderboardDataSource;                                    //@synthesize leaderboardDataSource=_leaderboardDataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldHideHeader;                                                                 //@synthesize shouldHideHeader=_shouldHideHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldHideSegment;                                                                //@synthesize shouldHideSegment=_shouldHideSegment - In the implementation block
@property (nonatomic,retain) UICollectionReusableView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateShowcaseRowInUpdateMetrics;                                           //@synthesize shouldUpdateShowcaseRowInUpdateMetrics=_shouldUpdateShowcaseRowInUpdateMetrics - In the implementation block
@property (nonatomic,retain) GKSupplementaryViewMetrics * segmentedControlMetrics;                                  //@synthesize segmentedControlMetrics=_segmentedControlMetrics - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * globalLeaderboardDataSource;                           //@synthesize globalLeaderboardDataSource=_globalLeaderboardDataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboardScoresDataSource * friendsLeaderboardDataSource;                          //@synthesize friendsLeaderboardDataSource=_friendsLeaderboardDataSource - In the implementation block
@property (nonatomic,retain) GKLeaderboardHeaderView * leaderboardHeader;                                           //@synthesize leaderboardHeader=_leaderboardHeader - In the implementation block
@property (nonatomic,retain) GKCollectionViewAggregateDataSource * playersDataSource;                               //@synthesize playersDataSource=_playersDataSource - In the implementation block
@property (nonatomic,retain) GKFriendPlayersDataSource * friendPlayersDataSource;                                   //@synthesize friendPlayersDataSource=_friendPlayersDataSource - In the implementation block
@property (nonatomic,retain) GKGameRecentPlayersDataSource * recentPlayersDataSource;                               //@synthesize recentPlayersDataSource=_recentPlayersDataSource - In the implementation block
@property (nonatomic,retain) NSArray * actionSheetActions;                                                          //@synthesize actionSheetActions=_actionSheetActions - In the implementation block
@property (assign,nonatomic) long long numberOfLeaderboardColumnsPortrait;                                          //@synthesize numberOfLeaderboardColumnsPortrait=_numberOfLeaderboardColumnsPortrait - In the implementation block
@property (assign,nonatomic) long long numberOfLeaderboardColumnsLandscape;                                         //@synthesize numberOfLeaderboardColumnsLandscape=_numberOfLeaderboardColumnsLandscape - In the implementation block
@property (assign,nonatomic) BOOL firstAppearance;                                                                  //@synthesize firstAppearance=_firstAppearance - In the implementation block
@property (nonatomic,retain) UIActivityViewController * currentActivityViewController;                              //@synthesize currentActivityViewController=_currentActivityViewController - In the implementation block
@property (nonatomic,retain) id globalLeaderboardKVOToken;                                                          //@synthesize globalLeaderboardKVOToken=_globalLeaderboardKVOToken - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)showLeaderboard:(id)arg1 ;
-(void)didTouchShowcaseFriends:(id)arg1 ;
-(void)didTouchShowMoreFriends:(id)arg1 ;
-(void)addShowcaseCellToMetrics:(id)arg1 ;
-(void)didTouchShowcaseGlobal:(id)arg1 ;
-(void)didTouchShowMoreGlobal:(id)arg1 ;
-(void)playGame;
-(id)initWithGame:(id)arg1 purchasableGame:(BOOL)arg2 ;
-(void)showAchievementDetails:(id)arg1 fromIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)showScore:(id)arg1 fromCell:(id)arg2 leaderboard:(id)arg3 animated:(BOOL)arg4 ;
-(void)headerViewDidLoad;
-(id)initWithGame:(id)arg1 viewState:(long long)arg2 purchasableGame:(BOOL)arg3 ;
-(GKSegmentedSectionDataSource *)segmentedDataSource;
-(void)setSegmentedDataSource:(GKSegmentedSectionDataSource *)arg1 ;
-(GKSupplementaryViewMetrics *)segmentedControlMetrics;
-(void)setSegmentedControlMetrics:(GKSupplementaryViewMetrics *)arg1 ;
-(void)buyGame;
-(void)setRecommendation:(GKGameRecommendationInternal *)arg1 ;
-(GKChallengesDataSource *)challengesDataSource;
-(void)showActions:(id)arg1 ;
-(void)shareGame;
-(void)updateHeaderHeightForViewSize:(CGSize)arg1 ;
-(void)applyViewState;
-(void)setupSegmentedPlaceholderView;
-(GKLeaderboardScoresDataSource *)friendsLeaderboardDataSource;
-(GKLeaderboardScoresDataSource *)globalLeaderboardDataSource;
-(GKLeaderboardHeaderView *)leaderboardHeader;
-(id<GKGameProfileCollectionViewControllerServiceDelegate>)serviceDelegate;
-(void)setNumberOfLeaderboardColumnsPortrait:(long long)arg1 ;
-(void)setNumberOfLeaderboardColumnsLandscape:(long long)arg1 ;
-(void)setFriendsLeaderboardDataSource:(GKLeaderboardScoresDataSource *)arg1 ;
-(void)setGlobalLeaderboardDataSource:(GKLeaderboardScoresDataSource *)arg1 ;
-(void)setGlobalLeaderboardKVOToken:(id)arg1 ;
-(id)configureLeaderboardDataSource;
-(id)segmentedDataSourceForGame:(id)arg1 ;
-(double)headerHeightForViewSize:(CGSize)arg1 ;
-(Class)cellClassForLeaderboardDataSource;
-(void)setLeaderboardHeader:(GKLeaderboardHeaderView *)arg1 ;
-(BOOL)isPurchasableGame;
-(void)configureGameDetailHeaderView:(id)arg1 ;
-(void)configureChallengesSectionHeader:(id)arg1 ;
-(void)configureFriendPlayersSectionHeader:(id)arg1 ;
-(void)configureRecentPlayersSectionHeader:(id)arg1 ;
-(void)configureLeaderboardCategoriesSectionHeader:(id)arg1 ;
-(void)configureLeaderboardSetsSectionHeader:(id)arg1 ;
-(void)configureAchievementsSectionHeader:(id)arg1 ;
-(void)configureLeaderboardHeader:(id)arg1 ;
-(void)updateShowcaseRowVisibility;
-(void)updateRightBarButtonItem;
-(void)setCurrentActivityViewController:(UIActivityViewController *)arg1 ;
-(GKGameRecommendationInternal *)recommendation;
-(void)uninstallGame;
-(GKAchievementsDataSource *)achievementsDataSource;
-(void)presentPopoverForViewController:(id)arg1 fromCell:(id)arg2 subview:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 ;
-(void)showScore:(id)arg1 fromIndexPath:(id)arg2 ;
-(void)showChallenge:(id)arg1 fromIndexPath:(id)arg2 ;
-(void)showLeaderboardSet:(id)arg1 ;
-(void)showPlayer:(id)arg1 fromIndexPath:(id)arg2 ;
-(void)setServiceDelegate:(id<GKGameProfileCollectionViewControllerServiceDelegate>)arg1 ;
-(void)selectDataSource:(id)arg1 ;
-(void)removeGame;
-(void)setPurchasableGame:(BOOL)arg1 ;
-(void)setAchievementsDataSource:(GKAchievementsDataSource *)arg1 ;
-(void)setChallengesDataSource:(GKChallengesDataSource *)arg1 ;
-(GKCollectionViewDataSource *)leaderboardDataSource;
-(void)setLeaderboardDataSource:(GKCollectionViewDataSource *)arg1 ;
-(BOOL)shouldHideHeader;
-(void)setShouldHideHeader:(BOOL)arg1 ;
-(BOOL)shouldUpdateShowcaseRowInUpdateMetrics;
-(void)setShouldUpdateShowcaseRowInUpdateMetrics:(BOOL)arg1 ;
-(GKCollectionViewAggregateDataSource *)playersDataSource;
-(void)setPlayersDataSource:(GKCollectionViewAggregateDataSource *)arg1 ;
-(GKFriendPlayersDataSource *)friendPlayersDataSource;
-(void)setFriendPlayersDataSource:(GKFriendPlayersDataSource *)arg1 ;
-(NSArray *)actionSheetActions;
-(void)setActionSheetActions:(NSArray *)arg1 ;
-(long long)numberOfLeaderboardColumnsPortrait;
-(long long)numberOfLeaderboardColumnsLandscape;
-(BOOL)firstAppearance;
-(void)setFirstAppearance:(BOOL)arg1 ;
-(UIActivityViewController *)currentActivityViewController;
-(id)globalLeaderboardKVOToken;
-(void)dismissPopovers;
-(void)dealloc;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UICollectionReusableView *)headerView;
-(void)setHeaderView:(UICollectionReusableView *)arg1 ;
-(GKGameRecord *)game;
-(void)setGame:(GKGameRecord *)arg1 ;
-(NSString *)leaderboardIdentifier;
-(void)setTimeScope:(long long)arg1 ;
-(void)setLeaderboardIdentifier:(NSString *)arg1 ;
-(void)setLeaderboard:(id)arg1 ;
-(void)configureDataSource;
-(void)configureViewFactories;
-(void)didEnterNoContentState;
-(void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3 ;
-(void)updateMetrics;
-(void)didExitRefreshingState;
-(void)leaderboardPressed:(id)arg1 ;
-(void)timeScopePressed:(id)arg1 ;
-(void)setShouldHideSegment:(BOOL)arg1 ;
-(BOOL)shouldHideSegment;
-(GKGameRecentPlayersDataSource *)recentPlayersDataSource;
-(void)setRecentPlayersDataSource:(GKGameRecentPlayersDataSource *)arg1 ;
-(void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setViewState:(long long)arg1 ;
-(long long)viewState;
-(long long)leaderboardTimeScope;
-(void)setLeaderboardTimeScope:(long long)arg1 ;
@end
