/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewController.h>
#import <Game Center/GKTurnBasedInviteViewControllerDelegate.h>
#import <Game Center/GKTurnBasedMatchDetailViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIStateRestoring.h>
#import <UIKit/UIViewControllerRestoration.h>

@protocol GKTurnBasedMatchesViewControllerDelegate;
@class GKGame, GKMatchRequest, GKCollectionViewController, GKTurnBasedMatchesDataSource, NSString, UIPopoverController;

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIViewControllerRestoration> {

	BOOL _showExistingMatches;
	id<GKTurnBasedMatchesViewControllerDelegate> _delegateWeak;
	GKGame* _game;
	GKMatchRequest* _matchRequest;
	GKCollectionViewController* _masterViewController;
	GKTurnBasedMatchesDataSource* _matchesDataSource;
	long long _maxMatchesSeen;
	NSString* _matchIDWaitingForTurnEvent;
	UIPopoverController* _detailPopover;

}

@property (nonatomic,retain) GKGame * game;                                                      //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) GKMatchRequest * matchRequest;                                      //@synthesize matchRequest=_matchRequest - In the implementation block
@property (assign,nonatomic) GKCollectionViewController * masterViewController;                  //@synthesize masterViewController=_masterViewController - In the implementation block
@property (assign,nonatomic) id<GKTurnBasedMatchesViewControllerDelegate> delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (assign,nonatomic) BOOL showExistingMatches;                                           //@synthesize showExistingMatches=_showExistingMatches - In the implementation block
@property (nonatomic,retain) GKTurnBasedMatchesDataSource * matchesDataSource;                   //@synthesize matchesDataSource=_matchesDataSource - In the implementation block
@property (assign,nonatomic) long long maxMatchesSeen;                                           //@synthesize maxMatchesSeen=_maxMatchesSeen - In the implementation block
@property (nonatomic,retain) NSString * matchIDWaitingForTurnEvent;                              //@synthesize matchIDWaitingForTurnEvent=_matchIDWaitingForTurnEvent - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailPopover;                                //@synthesize detailPopover=_detailPopover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)setDetailPopover:(UIPopoverController *)arg1 ;
-(UIPopoverController *)detailPopover;
-(void)setMatchesDataSource:(GKTurnBasedMatchesDataSource *)arg1 ;
-(void)configureHeader:(id)arg1 indexPath:(id)arg2 ;
-(GKTurnBasedMatchesDataSource *)matchesDataSource;
-(BOOL)isInGame;
-(void)handleTurnBasedEvent:(id)arg1 ;
-(void)cancelButtonPressed;
-(void)addPressed;
-(void)detailPressedForMatch:(id)arg1 ;
-(void)showInviteControllerAnimated:(BOOL)arg1 ;
-(void)refreshMaster;
-(void)acceptInviteForMatch:(id)arg1 ;
-(void)showMatchID:(id)arg1 ;
-(void)showDetailForMatch:(id)arg1 ;
-(void)dismissDetailViewControllerAnimated:(BOOL)arg1 ;
-(void)launchGameAndShowMatchID:(id)arg1 ;
-(void)notifyGameWithMatch:(id)arg1 orError:(id)arg2 ;
-(void)dismissDetailViewControllerInPopover:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setMatchIDWaitingForTurnEvent:(NSString *)arg1 ;
-(void)turnBasedInviteViewControllerWasCancelled:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg1 didCreateMatchID:(id)arg2 ;
-(void)turnBasedInviteViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg1 ;
-(void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg1 ;
-(void)setMasterViewController:(GKCollectionViewController *)arg1 ;
-(long long)maxMatchesSeen;
-(void)setMaxMatchesSeen:(long long)arg1 ;
-(NSString *)matchIDWaitingForTurnEvent;
-(void)dealloc;
-(void)setDelegate:(id<GKTurnBasedMatchesViewControllerDelegate>)arg1 ;
-(id)init;
-(id<GKTurnBasedMatchesViewControllerDelegate>)delegate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(GKCollectionViewController *)masterViewController;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(GKMatchRequest *)matchRequest;
-(void)setMatchRequest:(GKMatchRequest *)arg1 ;
-(void)configureDataSource;
-(void)configureViewFactories;
-(void)loadDataWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)didEnterNoContentState;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)setShowExistingMatches:(BOOL)arg1 ;
-(id)initWithMatchRequest:(id)arg1 ;
-(BOOL)showExistingMatches;
-(void)applicationDidEnterBackground;
@end

