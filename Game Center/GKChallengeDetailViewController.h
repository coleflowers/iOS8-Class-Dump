/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKBubbleDetailViewController.h>

@protocol GKChallengeDetailDelegate;
@class GKChallenge, UIImageView, GKLabel, GKPlayerWithSpeechBalloonView, GKHorizontalBubbleControlsView, GKTextBubbleControl, NSArray;

@interface GKChallengeDetailViewController : GKBubbleDetailViewController {

	BOOL _didTransition;
	BOOL _didFloatInBubbles;
	GKChallenge* _challenge;
	id<GKChallengeDetailDelegate> _delegate;
	UIImageView* _iconView;
	GKLabel* _goalLabel;
	GKLabel* _fromLabel;
	GKPlayerWithSpeechBalloonView* _playerWithMessageView;
	GKHorizontalBubbleControlsView* _bubblesView;
	GKTextBubbleControl* _declineBubble;
	GKTextBubbleControl* _playBubble;
	GKLabel* _infoLabel;
	NSArray* _portraitConstraints;
	NSArray* _portraitMasterDetailExtraConstraints;
	NSArray* _portraitNonMasterDetailExtraConstraints;
	NSArray* _landscapeConstraints;
	NSArray* _activeConstraints;

}

@property (nonatomic,retain) GKChallenge * challenge;                                            //@synthesize challenge=_challenge - In the implementation block
@property (assign,nonatomic) BOOL didTransition;                                                 //@synthesize didTransition=_didTransition - In the implementation block
@property (assign) id<GKChallengeDetailDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                             //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * goalLabel;                                                //@synthesize goalLabel=_goalLabel - In the implementation block
@property (nonatomic,retain) GKLabel * fromLabel;                                                //@synthesize fromLabel=_fromLabel - In the implementation block
@property (nonatomic,retain) GKPlayerWithSpeechBalloonView * playerWithMessageView;              //@synthesize playerWithMessageView=_playerWithMessageView - In the implementation block
@property (nonatomic,retain) GKHorizontalBubbleControlsView * bubblesView;                       //@synthesize bubblesView=_bubblesView - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * declineBubble;                                //@synthesize declineBubble=_declineBubble - In the implementation block
@property (nonatomic,retain) GKTextBubbleControl * playBubble;                                   //@synthesize playBubble=_playBubble - In the implementation block
@property (nonatomic,retain) GKLabel * infoLabel;                                                //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                                      //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * portraitMasterDetailExtraConstraints;                     //@synthesize portraitMasterDetailExtraConstraints=_portraitMasterDetailExtraConstraints - In the implementation block
@property (nonatomic,retain) NSArray * portraitNonMasterDetailExtraConstraints;                  //@synthesize portraitNonMasterDetailExtraConstraints=_portraitNonMasterDetailExtraConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                                     //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                        //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (assign,nonatomic) BOOL didFloatInBubbles;                                             //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
+(id)challengeDetailWithChallenge:(id)arg1 ;
-(void)pushLeftBubble;
-(void)floatInBubbles;
-(void)hideBubbles;
-(GKHorizontalBubbleControlsView *)bubblesView;
-(void)animateOutBubbleWithFocus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBubblesView:(GKHorizontalBubbleControlsView *)arg1 ;
-(BOOL)didFloatInBubbles;
-(void)setDidFloatInBubbles:(BOOL)arg1 ;
-(BOOL)didTransition;
-(void)setDidTransition:(BOOL)arg1 ;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(NSArray *)portraitConstraints;
-(NSArray *)landscapeConstraints;
-(GKLabel *)goalLabel;
-(void)setGoalLabel:(GKLabel *)arg1 ;
-(void)buyButtonPressed:(id)arg1 ;
-(void)didTouchDeclineBubble;
-(void)pushRightBubble:(id)arg1 ;
-(void)configurePlayBubble;
-(void)setPortraitMasterDetailExtraConstraints:(NSArray *)arg1 ;
-(void)setPortraitNonMasterDetailExtraConstraints:(NSArray *)arg1 ;
-(void)activateAppropriateConstraints;
-(void)registerForAppSwitching;
-(void)prepareViewsForAppear;
-(void)prepareViewsForDisappear;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(void)didTouchPlayBubbleInstalled;
-(GKTextBubbleControl *)declineBubble;
-(GKLabel *)fromLabel;
-(void)setFromLabel:(GKLabel *)arg1 ;
-(GKPlayerWithSpeechBalloonView *)playerWithMessageView;
-(void)setPlayerWithMessageView:(GKPlayerWithSpeechBalloonView *)arg1 ;
-(void)setDeclineBubble:(GKTextBubbleControl *)arg1 ;
-(GKTextBubbleControl *)playBubble;
-(void)setPlayBubble:(GKTextBubbleControl *)arg1 ;
-(NSArray *)portraitMasterDetailExtraConstraints;
-(NSArray *)portraitNonMasterDetailExtraConstraints;
-(NSArray *)activeConstraints;
-(void)dealloc;
-(void)setDelegate:(id<GKChallengeDetailDelegate>)arg1 ;
-(id<GKChallengeDetailDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(void)setInfoLabel:(GKLabel *)arg1 ;
-(void)willAnimateAppearingWithBubbleFlow;
-(id)initWithChallenge:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(GKLabel *)infoLabel;
-(GKChallenge *)challenge;
-(void)setChallenge:(GKChallenge *)arg1 ;
@end

