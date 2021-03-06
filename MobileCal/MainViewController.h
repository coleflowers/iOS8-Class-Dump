/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MainViewController <NSObject>
@property (assign,nonatomic) BOOL shouldPresentEventDetailsForSelectedOccurrence; 
@optional
-(void)updateBackButtonToDate:(id)arg1;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(double)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1;
-(id)bestDateForNewEvent;
-(BOOL)showEventDetailsWhenNewEventAdded;
-(id)toolBarTintColor;
-(int)supportedToggleMode;
-(id)navigationBarDisplayedDateString;
-(void)updateNavigationBarDisplayedDateString;
-(void)invalidateBackButtonDate;
-(BOOL)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1;
-(id)popoverSourceViewForEventDetails:(id)arg1;
-(CGRect*)popoverSourceRectForEventDetails:(id)arg1;
-(BOOL)shouldPresentEventDetailsForSelectedOccurrence;
-(void)setShouldPresentEventDetailsForSelectedOccurrence:(BOOL)arg1;
-(id)navigationBarTintColor;

@required
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(BOOL)arg2;

@end

