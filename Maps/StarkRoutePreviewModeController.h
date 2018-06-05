/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/DirectionsManagerObserver.h>
#import <Maps/StarkRoutePreviewOverlayDelegate.h>
#import <Maps/StarkRoutePreviewOverlayDataSource.h>
#import <Maps/StarkChromeModeController.h>

@class StarkRoutePreviewOverlaySign, UIBarButtonItem, UINavigationItem, StarkRouteLoadingLabel, StarkWaypointsController, UILabel, StarkFocusableButton, MapsChromeViewController, NSString, ChromeViewController;

@interface StarkRoutePreviewModeController : NSObject <MKMapViewDelegatePrivate, DirectionsManagerObserver, StarkRoutePreviewOverlayDelegate, StarkRoutePreviewOverlayDataSource, StarkChromeModeController> {

	StarkRoutePreviewOverlaySign* _sign;
	UIEdgeInsets _edgePadding;
	/*^block*/id _completionBlock;
	UIBarButtonItem* _startItem;
	UINavigationItem* _navigationItem;
	StarkRouteLoadingLabel* _routeLoading;
	StarkWaypointsController* _waypointsController;
	UILabel* _advisoryLabel;
	StarkFocusableButton* _zoomButton;
	unsigned long long _selectedRouteIndex;
	BOOL _zoomToDestination;
	MapsChromeViewController* _chromeViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) ChromeViewController * chromeViewController; 
+(void)pushRoutePreviewScreenForItem:(id)arg1 ;
-(id)searchPinsManager;
-(id)directionsAnnotationsManager;
-(id)initWithAddressBookAddress:(id)arg1 ;
-(ChromeViewController *)chromeViewController;
-(id)initWithSearchResults:(id)arg1 selectedIndex:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)visuallySelectedItem;
-(void)directionsManagerDidReset:(id)arg1 ;
-(void)directionsManagerDidFailToLoad:(id)arg1 withError:(id)arg2 ;
-(void)directionsManagerDidUpdateUserLocation:(id)arg1 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)routePreviewSignSelectedNext:(id)arg1 ;
-(void)routePreviewSignSelectedPrevious:(id)arg1 ;
-(void)routePreviewSign:(id)arg1 isShowingAlternates:(BOOL)arg2 ;
-(void)routePreviewSign:(id)arg1 selectedAlternateRouteAtIndex:(unsigned long long)arg2 ;
-(id)overlayItemsForState:(id)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)setChromeViewController:(ChromeViewController *)arg1 ;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(BOOL)arg2 state:(id)arg3 fromMode:(id)arg4 ;
-(void)resignCurrentModeAnimated:(BOOL)arg1 toMode:(id)arg2 ;
-(BOOL)starkTopBarModifiesInsets;
-(void)modeWasSelected;
-(id)directionsManager;
-(UIEdgeInsets)_mapViewInsets;
-(void)_observeDirections;
-(id)initWithAddressBookAddress:(id)arg1 overridingTitle:(id)arg2 ;
-(void)_updateZoomButton;
-(void)_showPinsAnimated:(BOOL)arg1 ;
-(void)_hideAdvisories;
-(void)_centerOnRouteOrPinsAnimated:(BOOL)arg1 ;
-(void)_toggleZoom:(id)arg1 ;
-(CGRect)_mapAreaBoundsWithOverlayInset;
-(void)_recenterOnRouteAnimated:(BOOL)arg1 ;
-(id)currentRoutesForPreviewSign:(id)arg1 ;
-(void)_disableZoomForRouteChangeRecenteringMap:(BOOL)arg1 ;
-(void)_updateRouteAdvisories;
-(void)_updateAnnotationsForLoadedRoute;
-(id)_currentRoute;
-(unsigned long long)selectedIndexForPreviewSign:(id)arg1 ;
-(unsigned long long)numberOfResultsForPreviewSign:(id)arg1 ;
-(unsigned long long)selectedRouteIndexForPreviewSign:(id)arg1 ;
-(id)titleForPreviewSign:(id)arg1 ;
-(id)subtitleForPreviewSign:(id)arg1 ;
-(id)initWithExistingRouteLoading;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(void)_updateLoading;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)dealloc;
-(id)navigationItem;
-(void)_start;
-(id)initWithDestination:(id)arg1 ;
@end

