/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTSettingsControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UITapGestureRecognizer, MTSettingsController, NSString;

@interface MTGenericSettingsViewController : UITableViewController <MTSettingsControllerDelegate, UITextFieldDelegate> {

	UITextField* _activeTextField;
	UITapGestureRecognizer* _tap;
	MTSettingsController* _settingsController;

}

@property (nonatomic,retain) MTSettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)selectedColor;
+(id)footerFont;
+(id)settingFont;
+(id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
+(id)cellIdentifierForSettingType:(int)arg1 ;
+(double)rowHeight;
-(void)updateRowHeight;
-(id)newFooterView;
-(void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2 ;
-(void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(long long)arg3 ;
-(void)settingsController:(id)arg1 removedGroupAtIndex:(long long)arg2 ;
-(void)settingsController:(id)arg1 removedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)settingsController:(id)arg1 updatedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)switchSettingChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)textSettingChanged:(id)arg1 value:(id)arg2 ;
-(id)settingAtIndexPath:(id)arg1 ;
-(id)newCellForDescriptionType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(void)optionSettingChanged:(id)arg1 value:(unsigned long long)arg2 ;
-(id)indexPathForSetting:(id)arg1 ;
-(void)setCell:(id)arg1 enabled:(BOOL)arg2 withDescription:(id)arg3 ;
-(void)dismissKeyboard:(id)arg1 ;
-(void)setSettingsController:(MTSettingsController *)arg1 ;
-(MTSettingsController *)settingsController;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

