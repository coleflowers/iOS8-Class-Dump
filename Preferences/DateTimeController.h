/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSIndexPath, NSTimer, PSSpecifier, PSWallClockMinuteTimer, NSString;

@interface DateTimeController : PSListController <UIPopoverControllerDelegate> {

	UIPopoverController* _setDateAndTimePopoverController;
	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	BOOL _localeForces24HourTime;
	BOOL _setDateAndTimePopoverShouldRePresent;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;
	PSWallClockMinuteTimer* _minuteTimer;

}

@property (retain) PSSpecifier * timeZoneSpecifier;                             //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;                           //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;                          //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
@property (nonatomic,retain) PSWallClockMinuteTimer * minuteTimer;              //@synthesize minuteTimer=_minuteTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(id)makeTimePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(void)reloadTimezone;
-(PSWallClockMinuteTimer *)minuteTimer;
-(void)setMinuteTimer:(PSWallClockMinuteTimer *)arg1 ;
-(void)setTimeZoneSpecifier:(PSSpecifier *)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(void)_createDateTimeFormatters;
-(void)_updateCurrentTime;
-(PSSpecifier *)timeZoneSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2 ;
-(id)makeCurrentTimeSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)is24HourTime:(id)arg1 ;
-(id)currentTimeString;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)datePickerChanged:(id)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(PSSpecifier *)currentTimeSpecifier;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(void)newCarrierNotification;
-(void)significantTimeChange:(id)arg1 ;
-(id)specifiers;
@end
