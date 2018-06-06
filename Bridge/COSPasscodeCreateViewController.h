/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <Bridge/COSBuddyController.h>

@class UILabel, NSString;

@interface COSPasscodeCreateViewController : COSSetupPageViewController <COSBuddyController> {

	UILabel* _instructionLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)controllerAllowsNavigatingBackTo;
-(void)passcodeCreationComplete;
-(BOOL)isComplex;
-(void)removeFromNavHierarchyFrom:(id)arg1 ;
-(void)_updateLayout;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)titleString;
-(void)back:(id)arg1 ;
@end
