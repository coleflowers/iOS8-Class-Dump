/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class WDControllerManager, HKHealthStore, HKBloodTypeObject, HKBiologicalSexObject, NSDate, UIDatePicker, UIPickerView, UIBarButtonItem, WDMeDataTableViewCell, NSString;

@interface WDMeDataTableViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate, UIViewControllerRestoration> {

	WDControllerManager* _controllerManager;
	HKHealthStore* _healthStore;
	HKBloodTypeObject* _bloodTypeObject;
	long long _bloodTypeDisplayValue;
	HKBiologicalSexObject* _biologicalSexObject;
	long long _biologicalSexDisplayValue;
	NSDate* _birthdate;
	NSDate* _birthdateDisplayValue;
	UIDatePicker* _birthdatePicker;
	UIPickerView* _bloodTypePicker;
	UIPickerView* _biologicalSexPicker;
	UIBarButtonItem* _cancelButtonItem;
	WDMeDataTableViewCell* _birthdateCell;
	WDMeDataTableViewCell* _biologicalSexCell;
	WDMeDataTableViewCell* _bloodTypeCell;
	WDMeDataTableViewCell* _selectedCell;
	BOOL _isCancelling;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithControllerManager:(id)arg1 ;
-(void)birthdateChanged:(id)arg1 ;
-(void)_updatePickersWithDisplayValues;
-(void)_resetSelectedCell;
-(id)_displayStringForBirthDate:(id)arg1 ;
-(id)_displayStringForBiologicalSex:(long long)arg1 ;
-(id)_displayStringForBloodType:(long long)arg1 ;
-(void)_updateBirthdateCellDisplayValue;
-(id)_dateAsAge:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
