/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>
#import <Maps/SearchManagerObserver.h>
#import <Maps/MNNavigationModeControllerDelegate.h>

@protocol StarkDisplayControllerDelegate;
@class StarkWindow, StarkStackViewController, StarkChromeViewController, StarkMapBrowsingModeController, MNNavigationModeController, UIScreen, StarkSuggestionsProvider, StarkRouteGeniusLikelyRoutesProvider, UILongPressGestureRecognizer, UIActionSheet, UIViewController, NSString;

@interface StarkDisplayController : NSObject <DirectionsManagerObserver, SearchManagerObserver, MNNavigationModeControllerDelegate> {

	StarkWindow* _starkWindow;
	StarkStackViewController* _navStack;
	StarkChromeViewController* _chrome;
	StarkMapBrowsingModeController* _mainMode;
	BOOL _updating;
	BOOL _updateScheduled;
	MNNavigationModeController* _runningNavMode;
	UIScreen* _starkScreen;
	StarkSuggestionsProvider* _suggestionsProvider;
	StarkRouteGeniusLikelyRoutesProvider* _likelyRoutesProvider;
	UILongPressGestureRecognizer* _nightModeToggleGesture;
	BOOL _hasDisplayedRouteGenius;
	UIActionSheet* _simulationPrompt;
	id<StarkDisplayControllerDelegate> _delegate;
	UIViewController* _alertHostingViewController;

}

@property (assign,nonatomic,__weak) id<StarkDisplayControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDisplayingStark,nonatomic,readonly) BOOL displayingStark; 
@property (nonatomic,retain) UIScreen * starkScreen;                                           //@synthesize starkScreen=_starkScreen - In the implementation block
@property (nonatomic,readonly) StarkSuggestionsProvider * suggestionsProvider;                 //@synthesize suggestionsProvider=_suggestionsProvider - In the implementation block
@property (nonatomic,readonly) UIViewController * alertHostingViewController;                  //@synthesize alertHostingViewController=_alertHostingViewController - In the implementation block
@property (nonatomic,readonly) id visuallySelectedItem; 
@property (getter=isNavigationVisible,nonatomic,readonly) BOOL navigationVisible; 
@property (nonatomic,retain) StarkWindow * starkWindow;                                        //@synthesize starkWindow=_starkWindow - In the implementation block
@property (nonatomic,retain) MNNavigationModeController * runningNavMode;                      //@synthesize runningNavMode=_runningNavMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
+(BOOL)isAvailable;
-(void)searchManagerDidClearSearchResults:(id)arg1 ;
-(void)searchManager:(id)arg1 didReceiveResults:(id)arg2 scrollToResults:(BOOL)arg3 ;
-(StarkSuggestionsProvider *)suggestionsProvider;
-(BOOL)isNavigationVisible;
-(id)chrome;
-(id)visuallySelectedItem;
-(void)directionsManagerWillClear:(id)arg1 ;
-(void)directionsManagerWillReset:(id)arg1 ;
-(void)directionsManagerDidReset:(id)arg1 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManagerUpdatedTrafficIncidents:(id)arg1 ;
-(void)directionsManagerUpdatedMatchedLocation:(id)arg1 matchedLocation:(id)arg2 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManager:(id)arg1 needsPromptToSimulateForOptions:(long long)arg2 ;
-(void)directionsManagerWillPrepareNavigationSession:(id)arg1 ;
-(void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithNavigationOfType:(int)arg2 options:(long long)arg3 ;
-(void)directionsManager:(id)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(long long)arg2 ;
-(UIViewController *)alertHostingViewController;
-(BOOL)isDisplayingStark;
-(void)goToOverview;
-(void)navigationModeWillDismiss:(id)arg1 isNavigationEnding:(BOOL)arg2 ;
-(void)navigationModeDidFinish:(id)arg1 ;
-(void)navigationModeChoseEnd:(id)arg1 ;
-(void)navigationModeDidSwitchToNewRoute:(id)arg1 ;
-(void)navigationModeTransportTypeChanged:(id)arg1 transportType:(int)arg2 ;
-(void)attachScreen;
-(void)displayRouteGeniusAnimated:(BOOL)arg1 ;
-(void)displayRouteGeniusWithTracePlayer:(id)arg1 ;
-(id)_mapBrowsingMode;
-(void)simulateRouteGeniusToCurrentSuggestion;
-(void)_willSendEventToStarkWindow:(id)arg1 ;
-(void)_updateStarkNightModeToggle;
-(void)_updateEnabling;
-(void)_dismissKeyboard;
-(id)navigationStack;
-(void)_createSuggestionsProvider;
-(void)startRouteGenius;
-(void)_dismissKeyboardAnimated:(BOOL)arg1 ;
-(BOOL)_shouldSuppressVisibleChrome;
-(void)_updateExternalNavigationState;
-(void)stopRouteGeniusForNavigation:(BOOL)arg1 ;
-(void)_toggleNightMode:(id)arg1 ;
-(void)dismissRouteGeniusAnimated:(BOOL)arg1 forNavigation:(BOOL)arg2 ;
-(MNNavigationModeController *)runningNavMode;
-(void)_replaceTopSearchResultDisplaysWithItem:(id)arg1 ;
-(void)_showOverviewForNonStarkNavigationAnimated:(BOOL)arg1 ;
-(void)setRunningNavMode:(MNNavigationModeController *)arg1 ;
-(void)_becomeActive;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)_updateDisplay;
-(void)dealloc;
-(void)setDelegate:(id<StarkDisplayControllerDelegate>)arg1 ;
-(id)init;
-(id<StarkDisplayControllerDelegate>)delegate;
-(void)setStarkScreen:(UIScreen *)arg1 ;
-(void)setStarkWindow:(StarkWindow *)arg1 ;
-(UIScreen *)starkScreen;
-(StarkWindow *)starkWindow;
-(void)_setNeedsUpdate;
@end
