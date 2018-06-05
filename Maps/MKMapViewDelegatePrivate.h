/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapViewDelegatePrivate
@optional
-(void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
-(BOOL)mapView:(id)arg1 shouldReceiveTouch:(id)arg2;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4;
-(void)mapViewDidStartUserInteraction:(id)arg1;
-(void)mapViewDidStopUserInteraction:(id)arg1;
-(id)mapViewCurrentRouteMatch:(id)arg1;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
-(void)mapViewDidFinishInitialUserTrackingModeAnimation:(id)arg1;
-(void)mapViewWillStartFlyoverTour:(id)arg1;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(BOOL)arg3;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(BOOL)arg4;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1;
-(void)mapViewWillAnimateInAnnotationViews:(id)arg1;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
-(void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
-(void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2;
-(void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;

@end

