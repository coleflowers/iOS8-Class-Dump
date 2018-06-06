/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface COSPreferencesListController : PSListController {

	BOOL _suppressControllerAnimationForExpiry;
	BOOL _didFirstLoad;

}

@property (nonatomic,readonly) UIViewController*<PSController> categoryController; 
-(BOOL)reloadsWhenBecomingActive;
-(void)becomeActive:(id)arg1 ;
-(id)settingsFileName;
-(id)localizedPrefsStringForString:(id)arg1 ;
-(id)hardcodedSpecifiers;
-(id)additionalSpecifiers;
-(void)_showControllerFromSpecifier:(id)arg1 ;
-(void)selectGeneralCategoryForced:(BOOL)arg1 showController:(BOOL)arg2 ;
-(long long)indexOfGeneralController;
-(void)suppressControllerAnimationForExpiry;
-(id)settingsBundleDirectory;
-(id)specifierForBundle:(id)arg1 ;
-(UIViewController*<PSController>)categoryController;
-(void)launchBridgeSetup:(id)arg1 ;
-(void)selectGeneralCategory;
-(void)selectGeneralCategoryForced:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)title;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
