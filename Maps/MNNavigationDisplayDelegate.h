/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationDisplayDelegate <NSObject>
@required
-(void)navigationDisplay:(id)arg1 didChangeUserTrackingMode:(long long)arg2;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;

@end
