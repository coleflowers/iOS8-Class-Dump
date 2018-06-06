/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBubbleDetailViewController.h>
#import <Game Center/GKFriendRequestComposeViewControllerDelegate.h>

@protocol GKScoreDetailDelegate;
@class UIImageView, GKLabel, UIView, GKHorizontalBubbleControlsView, GKTextBubbleControl, GKLeaderboard, GKScore, NSArray;

@interface GKScoreDetailViewController : GKBubbleDetailViewController <GKFriendRequestComposeViewControllerDelegate> {

	BOOL _alreadySetUpConstraints;
	BOOL _didFloatInBubbles;
	BOOL _didTransition;
	id<GKScoreDetailDelegate> _delegate;
	UIImageView* _iconView;
	GKLabel* _titleLabel;
	GKLabel* _descriptionLabel;
	GKLabel* _earnedOnLabel;
	UIView* _verticallyCenteredContainerView;
	GKHorizontalBubbleControlsView* _bubblesView;
	GKTextBubbleControl* _shareBubble;
	GKTextBubbleControl* _challengeBubble;
	GKTextBubbleControl* _requestBubble;
	GKLabel* _infoLabel;
	GKLeaderboard* _leaderboard;
	GKScore* _score;
	NSArray* _verticallyCompactConstraints;
	NSArray* _verticallyRegularConstraints;
	long long _lastKnownSizeClass;

}

@property (assign) id<GKScoreDetailDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKLabel * descriptionLabel;                                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) GKLabel * earnedOnLabel;                                   //@synthesize earnedOnLabel=_earnedOnLabel - In the implementation block
@property (nonatomic,retain) UIView * verticallyCenteredContainerView;                  //@synthesize verticallyCenteredContainerView=_verticallyCenteredContainerView - In the implementation block
@property (nonatomic,retain) GKHorizontalBubbleControlsView * bubblesView;              //@synthesize bubblesView=_bubblesView - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * shareBubble;                         //@synthesize shareBubble=_shareBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * challengeBubble;                     //@synthesize challengeBubble=_challengeBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * requestBubble;                       //@synthesize requestBubble=_requestBubble - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                                       //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) GKLeaderboard * leaderboard;                               //@synthesize leaderboard=_leaderboard - In the implementation block
@property (nonatomic,retain) GKScore * score;                                           //@synthesize score=_score - In the implementation block
@property (nonatomic,retain) NSArray * verticallyCompactConstraints;                    //@synthesize verticallyCompactConstraints=_verticallyCompactConstraints - In the implementation block
@property (nonatomic,retain) NSArray * verticallyRegularConstraints;                    //@synthesize verticallyRegularConstraints=_verticallyRegularConstraints - In the implementation block
@property (assign,nonatomic) long long lastKnownSizeClass;                              //@synthesize lastKnownSizeClass=_lastKnownSizeClass - In the implementation block
@property (assign,nonatomic) BOOL didFloatInBubbles;                                    //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
@property (assign,nonatomic) BOOL didTransition;                                        //@synthesize didTransition=_didTransition - In the implementation block
+(id)scoreDetailWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(id)initWithScore:(id)arg1 leaderboard:(id)arg2 ;
-(void)didTouchShareBubble;
-(void)pushRightBubble;
-(void)didTouchChallengeBubble;
-(void)pushLeftBubble;
-(void)didTouchRequestBubble;
-(void)configureForScoreAndLeaderboard;
-(void)floatInBubbles;
-(void)setLastKnownSizeClass:(long long)arg1 ;
-(void)setVerticallyCompactConstraints:(NSArray *)arg1 ;
-(void)setVerticallyRegularConstraints:(NSArray *)arg1 ;
-(BOOL)shouldUseVerticallyCompactConstraints;
-(long long)lastKnownSizeClass;
-(NSArray *)verticallyRegularConstraints;
-(NSArray *)verticallyCompactConstraints;
-(void)setupForReappear;
-(void)hideBubbles;
-(GKHorizontalBubbleControlsView *)bubblesView;
-(void)animateOutBubbleWithFocus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(GKLabel *)earnedOnLabel;
-(void)setEarnedOnLabel:(GKLabel *)arg1 ;
-(UIView *)verticallyCenteredContainerView;
-(void)setVerticallyCenteredContainerView:(UIView *)arg1 ;
-(void)setBubblesView:(GKHorizontalBubbleControlsView *)arg1 ;
-(GKTextBubbleControl *)shareBubble;
-(void)setShareBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)challengeBubble;
-(void)setChallengeBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)requestBubble;
-(void)setRequestBubble:(GKTextBubbleControl *)arg1 ;
-(BOOL)didFloatInBubbles;
-(void)setDidFloatInBubbles:(BOOL)arg1 ;
-(BOOL)didTransition;
-(void)setDidTransition:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GKScoreDetailDelegate>)arg1 ;
-(id<GKScoreDetailDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(GKLabel *)titleLabel;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTitleLabel:(GKLabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(GKLeaderboard *)leaderboard;
-(void)setLeaderboard:(GKLeaderboard *)arg1 ;
-(void)setInfoLabel:(GKLabel *)arg1 ;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)friendRequestComposeViewControllerDidFinish:(id)arg1 ;
-(GKLabel *)descriptionLabel;
-(void)setDescriptionLabel:(GKLabel *)arg1 ;
-(GKScore *)score;
-(void)setScore:(GKScore *)arg1 ;
-(GKLabel *)infoLabel;
-(id)player;
@end

