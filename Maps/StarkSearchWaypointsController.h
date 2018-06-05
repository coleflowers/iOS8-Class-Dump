/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/StarkWaypointsController.h>

@class NSArray;

@interface StarkSearchWaypointsController : StarkWaypointsController {

	NSArray* _results;
	unsigned long long _selectedIndex;

}
-(void)nextPlaceWithTraits:(id)arg1 ;
-(void)previousPlaceWithTraits:(id)arg1 ;
-(id)destinationSearchResultIfAvailable;
-(id)titleForCurrentDestination;
-(id)subtitleForCurrentDestination;
-(unsigned long long)indexOfCurrentDestination;
-(unsigned long long)totalDestinations;
-(id)visuallySelectedItem;
-(id)initWithSearchResults:(id)arg1 selectedIndex:(unsigned long long)arg2 ;
-(id)destinationWaypoint;
@end

