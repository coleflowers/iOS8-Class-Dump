/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNGuidanceDisplay.h>

@protocol MNGuidanceSignsDisplayDelegate;
@class NSString;

@interface MNGuidanceSignsDisplay : NSObject <MNGuidanceDisplay> {

	BOOL _compact;
	BOOL _showsDimmedSigns;
	id<MNGuidanceSignsDisplayDelegate> _delegate;
	UIEdgeInsets _minimumEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MNGuidanceSignsDisplayDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDimmedSigns;                                           //@synthesize showsDimmedSigns=_showsDimmedSigns - In the implementation block
@property (assign,nonatomic) BOOL compact;                                                    //@synthesize compact=_compact - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets minimumEdgeInsets;                                //@synthesize minimumEdgeInsets=_minimumEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isGuidanceEnabled,nonatomic) BOOL guidanceEnabled; 
+(void)getImage:(out id*)arg1 center:(out CGPoint*)arg2 ofSize:(long long)arg3 scale:(double)arg4 fromShieldType:(int)arg5 text:(id)arg6 idiom:(long long)arg7 ;
+(id)signsDisplayWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
+(long long)mainScreenPrimaryManeuverShieldSize;
+(long long)mainScreenSecondaryManeuverShieldSize;
-(void)setInitialSelection;
-(void)removeFromContainingViewController;
-(void)setShowsDimmedSigns:(BOOL)arg1 ;
-(id)initWithContainingChromeViewController:(id)arg1 mode:(id)arg2 inView:(id)arg3 ;
-(void)setShowsDimmedSigns:(BOOL)arg1 animation:(id)arg2 ;
-(void)layoutForUnobscuredBoundsChange;
-(void)showNoGuidance;
-(void)showAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)hideAuxiliaryChromeWithAnimation:(id)arg1 ;
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)showArrived;
-(void)showRecalculating;
-(void)showProceedingToRouteDistance:(double)arg1 displayString:(id)arg2 ;
-(void)setTotalRemainingTime:(double)arg1 remainingDistance:(double)arg2 destinationTimezone:(id)arg3 ;
-(void)showNewManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7 ;
-(void)showManeuverAlertForAnnouncementStage:(unsigned long long)arg1 ;
-(void)setTimeToManeuver:(double)arg1 distanceToManeuver:(double)arg2 ;
-(void)showSecondaryManeuver:(int)arg1 junction:(id)arg2 instructions:(id)arg3 shorterAlternativeInstructions:(id)arg4 shieldType:(int)arg5 shieldText:(id)arg6 drivingSide:(int)arg7 ;
-(void)hideSecondaryManeuver;
-(UIEdgeInsets)minimumEdgeInsets;
-(void)setMinimumEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)willAnimateRotationToInterface:(long long)arg1 duration:(double)arg2 ;
-(BOOL)showsDimmedSigns;
-(void)setDelegate:(id<MNGuidanceSignsDisplayDelegate>)arg1 ;
-(id<MNGuidanceSignsDisplayDelegate>)delegate;
-(id)navigationItem;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)compact;
-(void)setCompact:(BOOL)arg1 ;
@end

