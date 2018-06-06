/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:23:39 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/MCDCarDisplayServiceProvider.h>
#import <Music/MusicTabBarControllerDelegate.h>
#import <Music/NSUserActivityDelegate.h>
#import <Music/RUCreateStationViewControllerDelegate.h>
#import <Music/RUMiniPlayerCoordinatorDelegate.h>
#import <Music/RUNowPlayingViewControllerDelegate.h>
#import <Music/RURadioViewControllerDelegate.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MCDRootController, NSDate, MusicPlayerServerDelegate, MPUReportingPlaybackObserver, NSUserActivity, UIAlertController, MusicTabBarController, UIWindow, UINavigationController, NSString;

@interface MAAppDelegate : NSObject <MCDCarDisplayServiceProvider, MusicTabBarControllerDelegate, NSUserActivityDelegate, RUCreateStationViewControllerDelegate, RUMiniPlayerCoordinatorDelegate, RUNowPlayingViewControllerDelegate, RURadioViewControllerDelegate, UIApplicationTestingDelegate, UINavigationControllerDelegate> {

	MCDRootController* _carDisplayController;
	BOOL _hasFinishedLaunching;
	NSDate* _lastArchivedPlaybackQueueDate;
	MusicPlayerServerDelegate* _musicPlayerServerDelegate;
	MPUReportingPlaybackObserver* _reportingPlaybackObserver;
	NSUserActivity* _userActivity;
	UIAlertController* _userRemovedAlertController;
	MusicTabBarController* _tabBarController;
	UIWindow* _window;

}

@property (nonatomic,readonly) UINavigationController * radioNavigationController; 
@property (nonatomic,readonly) MusicTabBarController * tabBarController;                        //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                 //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) MCDRootController * carDisplayController;                        //@synthesize carDisplayController=_carDisplayController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_handleUserActivityContext:(id)arg1 ;
-(BOOL)_isOfflineForReporting;
-(unsigned long long)_storeAccountIdentifierForReporting;
-(id)_storeClientController;
-(void)_screenDidConnectNotification:(id)arg1 ;
-(void)_screenDidDisconnectNotification:(id)arg1 ;
-(void)_playerPlaybackErrorNotification:(id)arg1 ;
-(void)_setIAmTheIPod;
-(void)_attachToStarkScreen:(id)arg1 ;
-(BOOL)_MAApplication:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)_endDiscoveringMediaLibrariesIfNecessary;
-(void)_setUserActivityNeedsSaveAndBecomeCurrent;
-(void)_pushNowPlayingViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)makeRadioVisible;
-(void)_showAddSharedStationFailedAlertWithErrorCode:(long long)arg1 ;
-(void)_applyCurrentStateToUserActivity:(id)arg1 ;
-(void)presentAddStation;
-(MCDRootController *)carDisplayController;
-(id)_rootViewControllerIdentifierForUserActivityContainerItemType:(long long)arg1 ;
-(void)scrollViewList:(id)arg1 withOptions:(id)arg2 andIdentifier:(id)arg3 ;
-(void)switchViewTest:(id)arg1 withOptions:(id)arg2 andIdentifier:(id)arg3 ;
-(id)_controllerFromIdentifier:(id)arg1 ;
-(void)changeRepeatType:(unsigned long long)arg1 ;
-(void)changeShuffleType:(unsigned long long)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)userActivityWillSave:(id)arg1 ;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(void)application:(id)arg1 didDecodeRestorableStateWithCoder:(id)arg2 ;
-(MusicTabBarController *)tabBarController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(id)_userActivity;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)reloadPlayer:(id)arg1 radioStation:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)reloadPlayer:(id)arg1 mediaQuery:(id)arg2 options:(id)arg3 ;
-(void)reloadPlayer:(id)arg1 geniusMixPlaylist:(id)arg2 options:(id)arg3 ;
-(void)music_tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)music_tabBarControllerDidChangeOrderedViewControllerIdentifiers:(id)arg1 ;
-(UINavigationController *)radioNavigationController;
-(void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)completeAdditionOfStationWithContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)addStationWithDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)carDisplayViewControllerForRadioViewController:(id)arg1 ;
-(void)prepareToAddStation;
-(BOOL)radioViewControllerRequestsMakingRadioVisible:(id)arg1 ;
-(void)scrollStationToVisible:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)createStationViewController:(id)arg1 didSelectStation:(id)arg2 ;
-(void)createStationViewControllerDidFinish:(id)arg1 ;
-(void)navigationController:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(void)miniPlayerCoordinator:(id)arg1 completeAdditionOfStationWithContext:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)miniPlayerCoordinatorRequestsMakingRadioVisible:(id)arg1 ;
-(void)miniPlayerCoordinator:(id)arg1 scrollStationToVisible:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)prepareToAddStationForMiniPlayerCoordinator:(id)arg1 ;
-(void)miniPlayerCoordinatorRequestsPresentingAddStation:(id)arg1 ;
-(void)nowPlayingViewController:(id)arg1 completeAdditionOfStationWithContext:(id)arg2 animated:(BOOL)arg3 ;
-(id)radioNavigationControllerForNowPlayingViewController:(id)arg1 ;
-(BOOL)nowPlayingViewControllerRequestsMakingRadioVisible:(id)arg1 ;
-(void)prepareToAddStationForNowPlayingViewController:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end
