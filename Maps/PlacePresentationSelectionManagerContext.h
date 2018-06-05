/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PlacePresentationControllerDelegate.h>

@protocol MainChromeModeController;
@class MKMapView, PlacePresentationController, TrafficIncidentsViewController, UINavigationController, AdaptivePresenter, PlacePresentationSelectionManager, GEOMapServiceTraits, NSString;

@interface PlacePresentationSelectionManagerContext : NSObject <PlacePresentationControllerDelegate> {

	id<MainChromeModeController> _mode;
	MKMapView* _mapView;
	PlacePresentationController* _placePresentationController;
	TrafficIncidentsViewController* _trafficIncidentsViewController;
	UINavigationController* _trafficIncidentsNavigationController;
	BOOL _dismissingPlaceCard;
	AdaptivePresenter* _reportAProblemPresenter;
	PlacePresentationSelectionManager* _placePresentationSelectionManager;
	GEOMapServiceTraits* _traits;

}

@property (assign,nonatomic,__weak) id<MainChromeModeController> mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                                       //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) PlacePresentationController * placePresentationController;                                 //@synthesize placePresentationController=_placePresentationController - In the implementation block
@property (nonatomic,readonly) TrafficIncidentsViewController * trafficIncidentsViewController;                         //@synthesize trafficIncidentsViewController=_trafficIncidentsViewController - In the implementation block
@property (assign,nonatomic,__weak) PlacePresentationSelectionManager * placePresentationSelectionManager;              //@synthesize placePresentationSelectionManager=_placePresentationSelectionManager - In the implementation block
@property (nonatomic,retain) GEOMapServiceTraits * traits;                                                              //@synthesize traits=_traits - In the implementation block
@property (readonly) UINavigationController * trafficIncidentsNavigationController;                                     //@synthesize trafficIncidentsNavigationController=_trafficIncidentsNavigationController - In the implementation block
@property (assign) BOOL dismissingPlaceCard;                                                                            //@synthesize dismissingPlaceCard=_dismissingPlaceCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PlacePresentationSelectionManager *)placePresentationSelectionManager;
-(PlacePresentationController *)placePresentationController;
-(TrafficIncidentsViewController *)trafficIncidentsViewController;
-(id)initWithPlacePresentationSelectionManager:(id)arg1 ;
-(void)presentationController:(id)arg1 showDirctionsToSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showDirectionsFromSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 showFlyoverTourForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 removeCustomSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 addBookmarkForSearchResult:(id)arg2 title:(id)arg3 ;
-(void)presentationController:(id)arg1 searchForAddress:(id)arg2 ;
-(BOOL)presentationController:(id)arg1 shouldShowDirectionsForSearchResult:(id)arg2 ;
-(BOOL)presentationController:(id)arg1 shouldShowReportAProblemForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 completedActivityOfType:(id)arg2 forSearchResult:(id)arg3 ;
-(void)presentationController:(id)arg1 oldSearchResult:(id)arg2 becameNewSearchResult:(id)arg3 ;
-(BOOL)presentationController:(id)arg1 shouldShowReroutingForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 wasDismissedForSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 rerouteFromSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 handleReportAProblemWithSearchResult:(id)arg2 ;
-(void)presentationController:(id)arg1 didSelectDisplayedAddressForSearchResult:(id)arg2 ;
-(void)setPlacePresentationSelectionManager:(PlacePresentationSelectionManager *)arg1 ;
-(BOOL)dismissingPlaceCard;
-(void)setDismissingPlaceCard:(BOOL)arg1 ;
-(UINavigationController *)trafficIncidentsNavigationController;
-(void)setPlacePresentationController:(PlacePresentationController *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setMode:(id<MainChromeModeController>)arg1 ;
-(id<MainChromeModeController>)mode;
-(GEOMapServiceTraits *)traits;
-(void)setTraits:(GEOMapServiceTraits *)arg1 ;
@end
