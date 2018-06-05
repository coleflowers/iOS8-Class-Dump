/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITabBarController.h>
#import <MobilePhone/PhoneBaseViewController.h>

@class PhoneNavigationController, PHFavoritesViewController, PHRecentsViewController, PHAddressBookController, DialerController, PHVoicemailNavigationController, UIToolbar, UINavigationController, NSString;

@interface PhoneTabBarController : UITabBarController <PhoneBaseViewController> {

	PhoneNavigationController* _favoritesNavigationController;
	PhoneNavigationController* _recentsNavigationController;
	PHFavoritesViewController* _favoritesViewController;
	PHRecentsViewController* _recentsViewController;
	PHAddressBookController* _contactsViewController;
	DialerController* _keypadViewController;
	PHVoicemailNavigationController* _voicemailViewController;
	UIToolbar* _toolbar;

}

@property (nonatomic,retain) UINavigationController * favoritesNavigationController;                 //@synthesize favoritesNavigationController=_favoritesNavigationController - In the implementation block
@property (nonatomic,retain) UINavigationController * recentsNavigationController;                   //@synthesize recentsNavigationController=_recentsNavigationController - In the implementation block
@property (nonatomic,retain) PHFavoritesViewController * favoritesViewController;                    //@synthesize favoritesViewController=_favoritesViewController - In the implementation block
@property (nonatomic,retain) PHRecentsViewController * recentsViewController;                        //@synthesize recentsViewController=_recentsViewController - In the implementation block
@property (nonatomic,retain) PHAddressBookController * contactsViewController;                       //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (nonatomic,retain) DialerController * keypadViewController;                                //@synthesize keypadViewController=_keypadViewController - In the implementation block
@property (nonatomic,retain) PHVoicemailNavigationController * voicemailViewController;              //@synthesize voicemailViewController=_voicemailViewController - In the implementation block
@property (assign,nonatomic) UIToolbar * toolbar;                                                    //@synthesize toolbar=_toolbar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)statusBarStyle;
+(id)defaultPNGName;
+(int)viewType;
-(BOOL)shouldDisableEdgeClip;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)prepareToHandleURL:(id)arg1 ;
-(void)prepareForTransitionInFromViewType:(int)arg1 animated:(BOOL)arg2 ;
-(void)transitionInFromViewType:(int)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(int)currentTabViewType;
-(id)viewControllerForTabViewType:(int)arg1 ;
-(PHFavoritesViewController *)favoritesViewController;
-(PHRecentsViewController *)recentsViewController;
-(PHAddressBookController *)contactsViewController;
-(DialerController *)keypadViewController;
-(PHVoicemailNavigationController *)voicemailViewController;
-(void)showFavoritesTab:(BOOL)arg1 recentsTab:(BOOL)arg2 contactsTab:(BOOL)arg3 keypadTab:(BOOL)arg4 voicemailTab:(BOOL)arg5 ;
-(void)switchToTab:(int)arg1 ;
-(int)defaultTabViewType;
-(UINavigationController *)favoritesNavigationController;
-(UINavigationController *)recentsNavigationController;
-(void)transitionCompleted;
-(int)tabTypeForViewController:(id)arg1 ;
-(void)showToolbarWithItems:(id)arg1 ;
-(void)hideToolbar;
-(void)_badgeChanged:(id)arg1 ;
-(void)_updateAllBadges:(BOOL)arg1 ;
-(void)_startListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)_stopListeningForBadgeChangedNotifications:(id)arg1 ;
-(void)_popCurrentNavigationControllerToRootViewControllerIfAppropriate;
-(void)setFavoritesNavigationController:(UINavigationController *)arg1 ;
-(void)setRecentsNavigationController:(UINavigationController *)arg1 ;
-(void)setFavoritesViewController:(PHFavoritesViewController *)arg1 ;
-(void)setRecentsViewController:(PHRecentsViewController *)arg1 ;
-(void)setContactsViewController:(PHAddressBookController *)arg1 ;
-(void)setKeypadViewController:(DialerController *)arg1 ;
-(void)setVoicemailViewController:(PHVoicemailNavigationController *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)updateUserActivityState:(id)arg1 ;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_reallyWantsFullScreenLayout;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setSelectedViewController:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)handleURL:(id)arg1 ;
@end

