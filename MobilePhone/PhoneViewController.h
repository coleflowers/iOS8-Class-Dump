/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobilePhone/PhoneTabViewController.h>

@class NSString;

@interface PhoneViewController : UIViewController <PhoneTabViewController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeIconAndTitle:(id)arg1 ;
+(id)tabBarIconName;
+(int)tabViewType;
+(void)cacheFinishedTabBarIconImage:(id)arg1 finishedSelectedTabBarIconImage:(id)arg2 withTabBarItemName:(id)arg3 ;
+(BOOL)tabBarIconImageFinished:(id*)arg1 selectedImage:(id*)arg2 forTabBarItemName:(id)arg3 ;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)savePreferences;
-(void)_saveOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_loadOffsetDefaultForKey:(id)arg1 withScrollView:(id)arg2 ;
-(void)_prepareForLoadView;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillUnload;
-(void)handleURL:(id)arg1 ;
@end

