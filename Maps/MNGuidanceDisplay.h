/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGuidanceDisplay <NSObject>
@property (assign,getter=isGuidanceEnabled,nonatomic) BOOL guidanceEnabled; 
@optional
-(void)setGuidanceEnabled:(BOOL)arg1;
-(void)setCurrentRoadDescriptionIsUnreliable:(BOOL)arg1;
-(void)showRecalculationFailed;
-(void)willStartNavigation;
-(void)willPauseNavigation;
-(void)willResumeNavigation;
-(void)willEndNavigation;
-(void)setGuidanceEnabled:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isGuidanceEnabled;
-(void)hideRecalculating;

@required
-(void)showNoGuidance;
-(void)setDestinationDisplayName:(id)arg1;
-(void)showArrived;
-(void)showRecalculating;
-(void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2;
-(void)setTotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 destinationTimezone:(id)arg3;
-(void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
-(void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
-(void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2;
-(void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7;
-(void)hideSecondaryManeuver;

@end

