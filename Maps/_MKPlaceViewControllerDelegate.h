/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKPlaceViewControllerDelegate <NSObject>
@optional
-(void)placeViewController:(id)arg1 didSelectRerouteFromAddressWithIdentifier:(int)arg2;
-(void)placeViewController:(id)arg1 didBecomeContact:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectAddressWithIdentifier:(int)arg2;
-(void)placeViewControllerDidDismiss:(id)arg1;
-(void)placeViewControllerDidSelectFlyoverTour:(id)arg1;
-(void)placeViewController:(id)arg1 didSelectActivityOfType:(id)arg2 completed:(BOOL)arg3;
-(void)placeViewControllerDidSelectShareLocation:(id)arg1;
-(id)activityViewControllerForPlaceViewController:(id)arg1;
-(void)placeViewControllerDidSelectReportAProblem:(id)arg1;
-(void)placeViewControllerDidSelectRemovePin:(id)arg1;
-(void)placeViewControllerDidSelectDisplayedAddress:(id)arg1;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2;
-(void)placeViewController:(id)arg1 didSelectDirectionsToAddressWithIdentifier:(int)arg2;
-(void)placeViewController:(id)arg1 didSelectDirectionsFromAddressWithIdentifier:(int)arg2;

@end

