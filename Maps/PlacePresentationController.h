/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsActivityViewControllerDelegate.h>
#import <Maps/_MKPlaceViewControllerDelegate.h>

@protocol PlacePresentationControllerDelegate;
@class SearchResult, _MKPlaceViewController, NSString;

@interface PlacePresentationController : NSObject <MapsActivityViewControllerDelegate, _MKPlaceViewControllerDelegate> {

	SearchResult* _searchResult;
	id<PlacePresentationControllerDelegate> _presentationDelegate;
	_MKPlaceViewController* _placeViewController;

}

@property (assign,nonatomic,__weak) id<PlacePresentationControllerDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) _MKPlaceViewController * placeViewController;                                     //@synthesize placeViewController=_placeViewController - In the implementation block
@property (nonatomic,copy) SearchResult * searchResult;                                                        //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapsActivityViewController:(id)arg1 addBookmarkWithSearchResult:(id)arg2 title:(id)arg3 ;
-(_MKPlaceViewController *)placeViewController;
-(void)updatePlaceWithSearchResult:(id)arg1 ;
-(BOOL)shouldShowReportAProblemForSearchResult:(id)arg1 ;
-(void)_setupPlaceViewController:(id)arg1 ;
-(id)_placeViewControllerWithSearchResult:(id)arg1 ;
-(void)setPlaceViewController:(_MKPlaceViewController *)arg1 ;
-(void)placeViewController:(id)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2 ;
-(void)prepareToPresentNewSearchResult:(id)arg1 ;
-(void)dismissPresentedPlaceAnimated:(BOOL)arg1 ;
-(id<PlacePresentationControllerDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<PlacePresentationControllerDelegate>)arg1 ;
-(void)placeViewControllerDidDismiss:(id)arg1 ;
-(void)placeViewControllerDidSelectFlyoverTour:(id)arg1 ;
-(id)activityViewControllerForPlaceViewController:(id)arg1 ;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1 ;
-(void)placeViewControllerDidSelectRemovePin:(id)arg1 ;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsToAddressWithIdentifier:(int)arg2 ;
-(void)placeViewController:(id)arg1 didSelectDirectionsFromAddressWithIdentifier:(int)arg2 ;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(SearchResult *)searchResult;
@end

