/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKActivityViewController.h>
#import <Maps/MKPlaceActivityProviderDelegate.h>
#import <Maps/MKRouteActivityProviderDelegate.h>
#import <Maps/MKActivityViewControllerDelegate.h>

@protocol MapsActivityViewControllerDelegate;
@class SearchResult, MNRoute, NSString;

@interface MapsActivityViewController : MKActivityViewController <MKPlaceActivityProviderDelegate, MKRouteActivityProviderDelegate, MKActivityViewControllerDelegate> {

	id<MapsActivityViewControllerDelegate> _mapsActivityDelegate;
	SearchResult* _searchResult;
	MNRoute* _route;

}

@property (assign,nonatomic,__weak) id<MapsActivityViewControllerDelegate> mapsActivityDelegate;              //@synthesize mapsActivityDelegate=_mapsActivityDelegate - In the implementation block
@property (nonatomic,retain) SearchResult * searchResult;                                                     //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,retain) MNRoute * route;                                                                 //@synthesize route=_route - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSearchResult:(id)arg1 ;
-(id)initWithSearchResult:(id)arg1 contact:(id)arg2 print:(BOOL)arg3 ;
-(id<MapsActivityViewControllerDelegate>)mapsActivityDelegate;
-(void)setMapsActivityDelegate:(id<MapsActivityViewControllerDelegate>)arg1 ;
-(void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(BOOL)arg3 ;
-(id)titleForMapActivity:(id)arg1 ;
-(id)urlForMapActivity:(id)arg1 ;
-(id)annotationViewForMapActivity:(id)arg1 ;
-(id)airdropURLJSONForMapActivity:(id)arg1 ;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(SearchResult *)searchResult;
-(id)initWithRoute:(id)arg1 ;
-(void)setRoute:(MNRoute *)arg1 ;
-(MNRoute *)route;
@end

