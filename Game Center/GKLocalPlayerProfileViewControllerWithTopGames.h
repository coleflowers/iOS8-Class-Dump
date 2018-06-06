/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/GKLocalPlayerProfileViewController.h>

@class GKGamesViewController, _GKCollectionViewWrapperAdaptorView;

@interface GKLocalPlayerProfileViewControllerWithTopGames : GKLocalPlayerProfileViewController {

	BOOL _didSetConstraints;
	GKGamesViewController* _topGamesViewController;
	_GKCollectionViewWrapperAdaptorView* _topGamesViewWrapperView;

}

@property (nonatomic,retain) GKGamesViewController * topGamesViewController;                             //@synthesize topGamesViewController=_topGamesViewController - In the implementation block
@property (nonatomic,retain) _GKCollectionViewWrapperAdaptorView * topGamesViewWrapperView;              //@synthesize topGamesViewWrapperView=_topGamesViewWrapperView - In the implementation block
@property (assign,nonatomic) BOOL didSetConstraints;                                                     //@synthesize didSetConstraints=_didSetConstraints - In the implementation block
-(void)adjustConstraintsForOrientation:(long long)arg1 ;
-(_GKCollectionViewWrapperAdaptorView *)topGamesViewWrapperView;
-(GKGamesViewController *)topGamesViewController;
-(void)setTopGamesViewController:(GKGamesViewController *)arg1 ;
-(void)setTopGamesViewWrapperView:(_GKCollectionViewWrapperAdaptorView *)arg1 ;
-(BOOL)didSetConstraints;
-(void)setDidSetConstraints:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)didUpdateModel;
-(BOOL)automaticallyForwardAppearanceMethods;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
@end
