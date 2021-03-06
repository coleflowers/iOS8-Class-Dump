/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHStarkRootContainerViewController, UIWindow, PHStarkHardwareControlsBroadcaster, UINavigationController;

@interface PHStarkManager : NSObject {

	PHStarkRootContainerViewController* _containerViewController;
	UIWindow* _starkWindow;
	PHStarkHardwareControlsBroadcaster* _hardwareControlsBroadcaster;
	PHStarkRootContainerViewController* _rootContainerViewController;

}

@property (retain) PHStarkRootContainerViewController * containerViewController;                  //@synthesize containerViewController=_containerViewController - In the implementation block
@property (retain) UIWindow * starkWindow;                                                        //@synthesize starkWindow=_starkWindow - In the implementation block
@property (readonly) UINavigationController * starkNavigationController; 
@property (readonly) BOOL activeInterfaceMechanismIsHardware; 
@property (retain) PHStarkHardwareControlsBroadcaster * hardwareControlsBroadcaster;              //@synthesize hardwareControlsBroadcaster=_hardwareControlsBroadcaster - In the implementation block
@property (retain) PHStarkRootContainerViewController * rootContainerViewController;              //@synthesize rootContainerViewController=_rootContainerViewController - In the implementation block
+(id)sharedStarkManager;
+(id)starkScreen;
-(void)setHardwareControlsBroadcaster:(PHStarkHardwareControlsBroadcaster *)arg1 ;
-(void)setRootContainerViewController:(PHStarkRootContainerViewController *)arg1 ;
-(PHStarkRootContainerViewController *)rootContainerViewController;
-(void)screenshotStarkScreen;
-(UINavigationController *)starkNavigationController;
-(PHStarkRootContainerViewController *)containerViewController;
-(void)setContainerViewController:(PHStarkRootContainerViewController *)arg1 ;
-(PHStarkHardwareControlsBroadcaster *)hardwareControlsBroadcaster;
-(BOOL)activeInterfaceMechanismIsHardware;
-(void)dealloc;
-(id)init;
-(void)attachStarkToScreen:(id)arg1 ;
-(void)screenDidConnectNotification:(id)arg1 ;
-(void)screenDidDisconnectNotification:(id)arg1 ;
-(void)setStarkWindow:(UIWindow *)arg1 ;
-(UIWindow *)starkWindow;
@end

