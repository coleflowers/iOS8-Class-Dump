/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKCollectionViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/UICollectionViewDelegate.h>

@class GKGamesRecommendationsDataSource, GKPlayer, GKGamesDataSource, NSString;

@interface GKGamesViewController : GKCollectionViewController <UIViewControllerRestoration, UICollectionViewDelegate> {

	BOOL _shouldShowPlaceholder;
	BOOL _shouldSupportSearch;
	unsigned long long _controllerMode;
	GKGamesRecommendationsDataSource* _recommendationsDataSource;
	GKPlayer* _player;
	GKGamesDataSource* _gamesDataSource;
	long long _dataSourceType;

}

@property (assign,nonatomic) BOOL shouldShowPlaceholder;                                                //@synthesize shouldShowPlaceholder=_shouldShowPlaceholder - In the implementation block
@property (assign,nonatomic) unsigned long long controllerMode;                                         //@synthesize controllerMode=_controllerMode - In the implementation block
@property (nonatomic,retain) GKGamesRecommendationsDataSource * recommendationsDataSource;              //@synthesize recommendationsDataSource=_recommendationsDataSource - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                                                         //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGamesDataSource * gamesDataSource;                                       //@synthesize gamesDataSource=_gamesDataSource - In the implementation block
@property (assign,nonatomic) long long dataSourceType;                                                  //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (assign,nonatomic) BOOL shouldSupportSearch;                                                  //@synthesize shouldSupportSearch=_shouldSupportSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gamesControllerForComparingPointsWithPlayer:(id)arg1 ;
+(id)gamesControllerForTopGames;
+(id)gamesControllerForPlayersGames:(id)arg1 ;
+(id)gamesControllerForPlayersSharedGames:(id)arg1 ;
+(id)gamesControllerForLocalPlayer;
+(id)gamesControllerForRecommendations;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(unsigned long long)controllerMode;
-(void)setControllerMode:(unsigned long long)arg1 ;
-(void)didTouchShowAll:(long long)arg1 ;
-(void)configureSectionHeader:(id)arg1 ;
-(void)showGameRecommendations;
-(void)setGamesDataSource:(GKGamesDataSource *)arg1 ;
-(void)setDataSourceType:(long long)arg1 ;
-(void)setShouldSupportSearch:(BOOL)arg1 ;
-(void)setShouldShowPlaceholder:(BOOL)arg1 ;
-(void)setRecommendationsDataSource:(GKGamesRecommendationsDataSource *)arg1 ;
-(void)updateRecommendationsPaddingForOrientation:(long long)arg1 ;
-(void)showGameDetails:(id)arg1 viewState:(long long)arg2 purchasable:(BOOL)arg3 ;
-(void)showRecommendedGameDetails:(id)arg1 ;
-(long long)dataSourceType;
-(void)showGameDetails:(id)arg1 ;
-(void)showPurchasableGameDetails:(id)arg1 ;
-(GKGamesDataSource *)gamesDataSource;
-(BOOL)shouldShowPlaceholder;
-(GKGamesRecommendationsDataSource *)recommendationsDataSource;
-(BOOL)shouldSupportSearch;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)configureDataSource;
-(void)configureViewFactories;
-(void)didEnterNoContentState;
-(void)didEnterErrorState;
-(void)updateMetrics;
-(id)sectionMetrics;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
@end

