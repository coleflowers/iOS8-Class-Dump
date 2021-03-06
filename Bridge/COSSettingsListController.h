/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSPreferencesListController.h>

@class NSDictionary, UIViewController, NSMutableDictionary;

@interface COSSettingsListController : COSPreferencesListController {

	NSDictionary* _inheritedWhiteList;
	UIViewController* _nothingSelectedController;
	NSMutableDictionary* _sockPuppetAppMapping;

}

@property (nonatomic,retain) NSDictionary * inheritedWhiteList;                         //@synthesize inheritedWhiteList=_inheritedWhiteList - In the implementation block
@property (nonatomic,retain) UIViewController * nothingSelectedController;              //@synthesize nothingSelectedController=_nothingSelectedController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sockPuppetAppMapping;                //@synthesize sockPuppetAppMapping=_sockPuppetAppMapping - In the implementation block
+(id)sharedTopLevelIconsLazyLoadingQueue;
-(BOOL)reloadsWhenBecomingActive;
-(id)settingsFileName;
-(id)localizedPrefsStringForString:(id)arg1 ;
-(id)hardcodedSpecifiers;
-(id)additionalSpecifiers;
-(long long)indexOfGeneralController;
-(id)sockPuppetAppValue:(id)arg1 ;
-(id)sockPuppetApps;
-(id)generalViewController;
-(NSDictionary *)inheritedWhiteList;
-(void)setInheritedWhiteList:(NSDictionary *)arg1 ;
-(UIViewController *)nothingSelectedController;
-(void)setNothingSelectedController:(UIViewController *)arg1 ;
-(NSMutableDictionary *)sockPuppetAppMapping;
-(void)setSockPuppetAppMapping:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
@end

