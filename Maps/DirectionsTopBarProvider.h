/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/OverviewTopBarDelegate.h>
#import <Maps/DirectionsInfoBarDelegate.h>
#import <Maps/MainChromeTopBarContentProvider.h>
#import <Maps/DirectionsInfoDisplay.h>

@protocol DirectionsTopBarProviderDelegate;
@class DirectionsInfoBar, OverviewTopBarContent, SteppingOverviewTopBarContent, MainChromeViewController, NSString;

@interface DirectionsTopBarProvider : NSObject <OverviewTopBarDelegate, DirectionsInfoBarDelegate, MainChromeTopBarContentProvider, DirectionsInfoDisplay> {

	DirectionsInfoBar* _legacyDirections;
	OverviewTopBarContent* _overviewContent;
	SteppingOverviewTopBarContent* _steppingOverviewContent;
	long long _directionsInfoBarMode;
	MainChromeViewController* _chromeViewController;
	id<DirectionsTopBarProviderDelegate> _delegate;

}

@property (assign,nonatomic) long long directionsInfoBarMode;                                   //@synthesize directionsInfoBarMode=_directionsInfoBarMode - In the implementation block
@property (assign,nonatomic,__weak) id<DirectionsTopBarProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController;                   //@synthesize chromeViewController=_chromeViewController - In the implementation block
-(MainChromeViewController *)chromeViewController;
-(id)presentationSourceForShareSheet;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(void)directionsInfoBarChoseEndInOverview:(id)arg1 ;
-(void)setShowsDimmedDisplay:(BOOL)arg1 animation:(id)arg2 ;
-(long long)directionsInfoBarMode;
-(void)setDirectionsInfoBarMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setAlternateRoutesCount:(unsigned long long)arg1 ;
-(void)setSelectedRoute:(id)arg1 withIndex:(unsigned long long)arg2 destinationName:(id)arg3 ;
-(void)refreshRouteInfoView;
-(void)setTimeEstimate:(double)arg1 andDistanceEstimate:(double)arg2 ;
-(void)directionsInfoBarDidClearDirections:(id)arg1 ;
-(void)directionsInfoBarDidCancelDirections:(id)arg1 ;
-(void)directionsInfoBarDidStartDirections:(id)arg1 ;
-(void)directionsInfoBarChoseResumeInOverview:(id)arg1 ;
-(void)directionsInfoBarDidSwitchToNewMode:(id)arg1 ;
-(void)setBackdropLightness:(long long)arg1 animation:(id)arg2 ;
-(id)topBarContentForVariant:(long long)arg1 ;
-(void)setDirectionsInfoBarMode:(long long)arg1 ;
-(id)_childDisplays;
-(void)overviewBarChoseEnd:(id)arg1 ;
-(void)overviewBarChoseResume:(id)arg1 ;
-(void)setDestinationName:(id)arg1 ;
-(void)setDelegate:(id<DirectionsTopBarProviderDelegate>)arg1 ;
-(id)init;
-(id<DirectionsTopBarProviderDelegate>)delegate;
@end
