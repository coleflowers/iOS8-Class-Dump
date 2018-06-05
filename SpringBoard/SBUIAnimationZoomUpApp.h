/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, FBWindowContextHostManager, SBAppStatusBarTransitionInfo;

@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController {

	UIView* _contextHostView;
	BOOL _zoomHostView;
	FBWindowContextHostManager* _activatingContextHostManager;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	long long _animationTransition;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _animationFinished;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	UIView* _viewToAnimate;

}

@property (assign,nonatomic) long long animationTransition;              //@synthesize animationTransition=_animationTransition - In the implementation block
-(void)prepareZoom;
-(double)animationDelay;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(id)initWithActivatingApp:(id)arg1 ;
-(void)animateFakeStatusBarWithParameters:(id)arg1 ;
-(void)cleanupZoom;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_noteZoomDidFinish;
-(id)appStatusBarTransitionInfoWithStartStyleRequest:(id)arg1 startOrientation:(long long)arg2 ;
-(void)noteDependencyDidInvalidate;
-(BOOL)_shouldWaitForSiriDismissBeforeZooming;
-(long long)animationTransition;
-(void)setAnimationTransition:(long long)arg1 ;
-(void)_startAnimation;
-(void)dealloc;
-(double)animationDuration;
@end
