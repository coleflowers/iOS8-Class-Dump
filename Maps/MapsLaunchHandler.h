/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKLocationManagerOperation;
@class MapsMainModeController, StarkDisplayController, UILongPressGestureRecognizer, NSString;

@interface MapsLaunchHandler : NSObject <UIGestureRecognizerDelegate> {

	MapsMainModeController* _mapController;
	StarkDisplayController* _starkMapController;
	id<MKLocationManagerOperation> _singleLocationUpdater;
	UILongPressGestureRecognizer* _locateOnLaunchMapGestureRecognizer;
	BOOL _userHasInteractedWithMapSinceStartup;
	BOOL _shouldLaunchIntoNav;
	BOOL _didLaunchWithExplicitIntent;

}

@property (assign,nonatomic,__weak) MapsMainModeController * mapController;                   //@synthesize mapController=_mapController - In the implementation block
@property (assign,nonatomic,__weak) StarkDisplayController * starkMapController;              //@synthesize starkMapController=_starkMapController - In the implementation block
@property (assign,nonatomic) BOOL shouldLaunchIntoNav;                                        //@synthesize shouldLaunchIntoNav=_shouldLaunchIntoNav - In the implementation block
@property (assign,nonatomic) BOOL didLaunchWithExplicitIntent;                                //@synthesize didLaunchWithExplicitIntent=_didLaunchWithExplicitIntent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)perform:(/*^block*/id)arg1 afterWaitingForLocationFix:(BOOL)arg2 ;
-(void)setDidLaunchWithExplicitIntent:(BOOL)arg1 ;
-(BOOL)launchWithSyncedBookmark:(id)arg1 withPrompt:(BOOL)arg2 ;
-(BOOL)launchWithProblemResolutionNotification:(id)arg1 withPrompt:(BOOL)arg2 ;
-(BOOL)launchWithOptions:(id)arg1 ;
-(BOOL)launchIntoDirectionsWithMapItems:(id)arg1 options:(id)arg2 ;
-(BOOL)launchIntoPlaceCardWithMapItem:(id)arg1 options:(id)arg2 ;
-(BOOL)launchIntoRAPForMapItem:(id)arg1 options:(id)arg2 ;
-(BOOL)launchIntoSearchWithMapItems:(id)arg1 options:(id)arg2 ;
-(void)_willHandleLaunch;
-(SCD_Struct_RA1)regionForLaunchOptions:(id)arg1 andSearchResults:(id)arg2 ;
-(BOOL)launchIntoSearchWithSearchResults:(id)arg1 options:(id)arg2 ;
-(void)launchToCurrentLocationWithOptions:(id)arg1 ;
-(BOOL)launchIntoDirectionsWithSearchResults:(id)arg1 options:(id)arg2 ;
-(void)_enterTrackingModeForOffscreenLocation:(id)arg1 ;
-(BOOL)_determineValueForKey:(id)arg1 ;
-(void)_cancelLocateOnLaunch;
-(void)_enterTrackingModeIfDistanceTraveledForLocation:(id)arg1 ;
-(BOOL)launchWithAnnouncement:(id)arg1 withPrompt:(BOOL)arg2 ;
-(StarkDisplayController *)starkMapController;
-(void)setStarkMapController:(StarkDisplayController *)arg1 ;
-(BOOL)shouldLaunchIntoNav;
-(void)setShouldLaunchIntoNav:(BOOL)arg1 ;
-(BOOL)didLaunchWithExplicitIntent;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(MapsMainModeController *)mapController;
-(void)setMapController:(MapsMainModeController *)arg1 ;
@end

