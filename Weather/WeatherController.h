/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 5:31:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/TabControllerDelegate.h>
#import <Weather/WeatherUpdaterDelegate.h>

@class NSTimer, TabController, NSString;

@interface WeatherController : NSObject <TabControllerDelegate, WeatherUpdaterDelegate> {

	NSTimer* _updateTimer;
	TabController* _tabController;

}

@property (assign,nonatomic) TabController * tabController;              //@synthesize tabController=_tabController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveStateToDisk;
-(void)_updateWeatherData;
-(void)refreshForLocaleChange;
-(void)tabControllerWillScroll:(id)arg1 ;
-(TabController *)tabController;
-(void)setTabController:(TabController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)didUpdateWeather;
-(void)failedUpdate:(id)arg1 ;
@end

