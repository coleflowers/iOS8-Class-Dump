/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>
#import <Maps/MKLocationManagerObserver.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSTimer, NSIndexPath, NSArray, NSString;

@interface StarkSearchTableViewController : StarkTableViewController <MKLocationManagerObserver, UITableViewDelegate, UITableViewDataSource> {

	BOOL _displaysDistanceInMetric;
	BOOL _displaysYardsForShortDistances;
	NSTimer* _timer;
	BOOL _timeToUpdate;
	NSIndexPath* _selectedIndexPath;
	NSArray* _cachedSearchResults;

}

@property (nonatomic,retain) NSArray * cachedSearchResults;              //@synthesize cachedSearchResults=_cachedSearchResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modeWillPop;
-(void)updateArrows;
-(void)toggleRateLimitedUpdate;
-(void)updateArrowInCell:(id)arg1 animated:(BOOL)arg2 ;
-(double)poiHeadingForLocation:(id)arg1 currentLocation:(id)arg2 currentHeading:(double)arg3 ;
-(id)visuallySelectedItem;
-(NSArray *)cachedSearchResults;
-(void)setCachedSearchResults:(NSArray *)arg1 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(void)_handleLocaleChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

