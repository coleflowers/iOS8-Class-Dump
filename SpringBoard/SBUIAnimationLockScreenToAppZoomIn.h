/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, UIView, SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	UIView* _viewToAnimate;
	UIView* _contextHostView;
	UIView* _fakeStatusBarViewContainer;
	long long _launchingOrientation;
	BOOL _requiresHostView;
	BOOL _activateBeforeHosting;
	BOOL _fromAssistant;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;

}
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_doAnimation;
-(void)_showFakeStatusBarIfNecessary;
-(void)_finishedZooming;
-(void)_removeFakeStatusBarIfNecessary;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2 ;
-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_startAnimation;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
@end
