/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>
#import <Weather/CLLocationManagerDelegate.h>
#import <Weather/SynchronizedDefaultsDelegate.h>
#import <Weather/WeatherApplicationProgressDelegate.h>

@class UIWindow, WeatherController, NSString;

@interface Application : UIApplication <UIApplicationDelegate, CLLocationManagerDelegate, SynchronizedDefaultsDelegate, WeatherApplicationProgressDelegate> {

	WeatherController* _controller;
	NSString* _testName;
	int _testIterationCount;
	UIWindow* _window;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)widgetContentRect;
-(void)userTextSizeDidChange;
-(void)setLocationTrackingEnabled:(BOOL)arg1 ;
-(void)weatherPrefsDidGetUpdated:(id)arg1 ;
-(void)reduceMotionSettingChanged;
-(id)_keyValueDictionaryForURL:(id)arg1 ;
-(void)pptTest_toggleCity;
-(void)pptTest_flipWidget;
-(void)pptTest_liveIcons;
-(void)pptTest_openMultiCityView;
-(void)pptTest_openLiveMultiCityView;
-(void)defaultSelectedCityDidGetUpdated:(id)arg1 ;
-(BOOL)isTallDevice;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResumeForEventsOnly;
-(void)userDefaultsDidChange:(id)arg1 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)significantTimeChange;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(id)controller;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)resetLocale;
-(BOOL)showProgressIndicator;
-(void)ubiquitousDefaultsDidChange:(id)arg1 ;
@end
