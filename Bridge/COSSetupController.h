/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <Bridge/COSBuddyNavigationControllerDelegate.h>
#import <Bridge/NRDevicePropertyObserver.h>
#import <Bridge/COSBuddyControllerDelegate.h>

@protocol COSBuddyController;
@class COSBuddyNavigationController, NSMutableArray, COSGizmoCaptureViewController, COSPasscodeChoiceViewController, COSBuddyWristSelectionController, COSSoftwareUpdateController, NSString;

@interface COSSetupController : NSObject <UINavigationControllerDelegate, COSBuddyNavigationControllerDelegate, NRDevicePropertyObserver, COSBuddyControllerDelegate> {

	BOOL hasSignedInToICloud;
	BOOL combinedMessagesSignInFailed;
	COSBuddyNavigationController* _navigationController;
	NSMutableArray* _buddyControllers;
	COSGizmoCaptureViewController* _pairingController;
	COSPasscodeChoiceViewController* _passcodeChoiceController;
	COSBuddyWristSelectionController* _wristController;
	id<COSBuddyController> _controllerDisplayedWhileOnHold;
	id<COSBuddyController> _nextControllerAfterHold;
	COSSoftwareUpdateController* _updateController;

}

@property (nonatomic,readonly) COSBuddyNavigationController * navigationController;                   //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSMutableArray * buddyControllers;                                       //@synthesize buddyControllers=_buddyControllers - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedPairing; 
@property (nonatomic,retain) COSGizmoCaptureViewController * pairingController;                       //@synthesize pairingController=_pairingController - In the implementation block
@property (nonatomic,retain) COSPasscodeChoiceViewController * passcodeChoiceController;              //@synthesize passcodeChoiceController=_passcodeChoiceController - In the implementation block
@property (nonatomic,retain) COSBuddyWristSelectionController * wristController;                      //@synthesize wristController=_wristController - In the implementation block
@property (nonatomic,retain) id<COSBuddyController> controllerDisplayedWhileOnHold;                   //@synthesize controllerDisplayedWhileOnHold=_controllerDisplayedWhileOnHold - In the implementation block
@property (nonatomic,retain) id<COSBuddyController> nextControllerAfterHold;                          //@synthesize nextControllerAfterHold=_nextControllerAfterHold - In the implementation block
@property (nonatomic,retain) COSSoftwareUpdateController * updateController;                          //@synthesize updateController=_updateController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasSignedInToICloud; 
@property (assign,nonatomic) BOOL combinedMessagesSignInFailed; 
+(BOOL)checkIfUpdateInSetupFlowHasCompleted;
-(BOOL)hasSignedInToICloud;
-(void)buddyControllerDone:(id)arg1 ;
-(void)setHasSignedInToICloud:(BOOL)arg1 ;
-(void)setCombinedMessagesSignInFailed:(BOOL)arg1 ;
-(id)topBuddyController;
-(void)finishedActivating;
-(void)buddyControllerReleaseHold:(id)arg1 ;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 ;
-(void)buddyControllerCancelAnyHold;
-(void)passcodeCreationFailed;
-(id)_viewControllerForBuddyController:(id)arg1 ;
-(void)displayUpdateControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasStartedPairing;
-(void)displayPairingFailureAlertForReason:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_alertMessageForReason:(unsigned long long)arg1 ;
-(id)buddyFlowMapping;
-(id)_controllerFollowingControllerClass:(Class)arg1 ;
-(void)_pushGizmoBuddyController:(id)arg1 ;
-(void)_pushBuddyController:(id)arg1 ;
-(void)promptWhetherToResetPairing:(id)arg1 ;
-(id)_controllerForClass:(Class)arg1 ;
-(void)_finishBuddy;
-(void)buddyControllerHold:(id)arg1 beforePresentingBuddyController:(id)arg2 ;
-(void)_transitionFromBuddyController:(id)arg1 toBuddyController:(id)arg2 ;
-(void)_buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 nextController:(id)arg3 ;
-(BOOL)_controllerShouldMirrorToGizmo:(id)arg1 ;
-(void)popViewController:(id)arg1 ;
-(id)popToBuddyControllerWithClass:(Class)arg1 animated:(BOOL)arg2 ;
-(id<COSBuddyController>)nextControllerAfterHold;
-(void)displayCompanionTooOldPairingFailureAlertWithDismissalHandler:(/*^block*/id)arg1 ;
-(BOOL)combinedMessagesSignInFailed;
-(void)_resetAnimated:(BOOL)arg1 ;
-(void)promptWhetherToUpdateGizmo:(/*^block*/id)arg1 ;
-(void)displayGenericPairingFailureAlertWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableArray *)buddyControllers;
-(void)setBuddyControllers:(NSMutableArray *)arg1 ;
-(COSGizmoCaptureViewController *)pairingController;
-(void)setPairingController:(COSGizmoCaptureViewController *)arg1 ;
-(COSPasscodeChoiceViewController *)passcodeChoiceController;
-(void)setPasscodeChoiceController:(COSPasscodeChoiceViewController *)arg1 ;
-(COSBuddyWristSelectionController *)wristController;
-(void)setWristController:(COSBuddyWristSelectionController *)arg1 ;
-(id<COSBuddyController>)controllerDisplayedWhileOnHold;
-(void)setControllerDisplayedWhileOnHold:(id<COSBuddyController>)arg1 ;
-(void)setNextControllerAfterHold:(id<COSBuddyController>)arg1 ;
-(COSSoftwareUpdateController *)updateController;
-(void)setUpdateController:(COSSoftwareUpdateController *)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)state;
-(unsigned)position;
-(COSBuddyNavigationController *)navigationController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)run;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
@end

