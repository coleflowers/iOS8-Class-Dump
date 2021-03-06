/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAppSwitcherController, UIView, FBWindowContextHostManager, SBAppSwitcherPageView, SBDisplayLayout;

@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController {

	SBAppSwitcherController* _switcherController;
	UIView* _appContextHostView;
	FBWindowContextHostManager* _contextHostManager;
	SBAppSwitcherPageView* _animatingPageView;
	SBDisplayLayout* _activatingDisplayLayout;
	BOOL _finishedSwitcherAnimation;
	BOOL _finishedCrossfadingToHostView;

}
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(id)initWithActivatingApp:(id)arg1 activatingDisplayLayout:(id)arg2 deactivatingApp:(id)arg3 ;
-(BOOL)_isActivatingFromContinuityApp;
-(void)_noteSwitcherAnimationFinished;
-(void)_evaluateDependenciesForCrossfadeStart;
-(void)_crossfadeApp;
-(void)_noteCrossfadeDidFinish;
-(void)_reportAnimationFinishedIfNecessary;
-(void)_startAnimation;
-(void)dealloc;
@end

