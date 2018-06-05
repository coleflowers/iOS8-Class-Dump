/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <SpringBoard/_UISettingsKeyObserver.h>

@protocol SBTestRecipe;
@class SBRootSettings, UIWindow, PTSettingsController, NSArray, NSString;

@interface SBPrototypeController : NSObject <SBVolumePressBandit, _UISettingsKeyObserver> {

	SBRootSettings* _rootSettings;
	UIWindow* _settingsWindow;
	PTSettingsController* _settingsController;
	NSArray* _testRecipeClassNames;
	id<SBTestRecipe> _activeTestRecipe;
	BOOL _showingSettings;
	BOOL _hasPreviousSettings;

}

@property (nonatomic,retain) id<SBTestRecipe> activeTestRecipe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)migrateSettings;
+(void)reloadDefaults;
+(id)sharedInstance;
-(BOOL)isPrototypingEnabled;
-(id<SBTestRecipe>)activeTestRecipe;
-(void)showOrHide;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_configureForDefaults;
-(void)_hideSettings;
-(void)_showSettings;
-(void)_updatePreventingLockover;
-(void)_changeActiveTestRecipeIfNecessary;
-(CGRect)_offscreenFrame;
-(void)setActiveTestRecipe:(id<SBTestRecipe>)arg1 ;
-(void)_tearDownSettingsWindow;
-(BOOL)isShowingSettingsUI;
-(BOOL)_hasPreviousSettings;
-(BOOL)_restorePreviousSettings;
-(id)_testRecipeClassNames;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(id)rootSettings;
@end

