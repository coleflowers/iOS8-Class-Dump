/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifierGroupController.h>
#import <Preferences/PSCellularAccountDetailDelegate.h>

@class PSListController, PSSpecifier, CTCellularPlan, NSString;

@interface PSCellularAccountGroupController : NSObject <PSSpecifierGroupController, PSCellularAccountDetailDelegate> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	CTCellularPlan* _selectedPlan;

}

@property (assign,nonatomic) PSListController * listController;              //@synthesize listController=_listController - In the implementation block
@property (assign,nonatomic) PSSpecifier * groupSpecifier;                   //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) CTCellularPlan * selectedPlan;                  //@synthesize selectedPlan=_selectedPlan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getPlanSubscriptionStatus:(int)arg1 ;
+(BOOL)isFeatureAvailable;
+(BOOL)shouldShowAccountSetup;
+(BOOL)shouldShowOtherButton;
-(CTCellularPlan *)selectedPlan;
-(id)getSelectedPlan;
-(void)setSelectedPlan:(CTCellularPlan *)arg1 ;
-(void)otherButtonPressed:(id)arg1 ;
-(id)getPlanName:(id)arg1 ;
-(id)getCarrierName:(id)arg1 ;
-(id)getPlanStatus:(id)arg1 ;
-(id)getPlanStatusDate:(id)arg1 ;
-(id)getPlanPurchaseDate:(id)arg1 ;
-(id)getPlanExpireDate:(id)arg1 ;
-(void)managePlanPressed:(id)arg1 ;
-(BOOL)isSelectedPlanActivating;
-(void)setupAccountPressed:(id)arg1 ;
-(void)dealloc;
-(void)setListController:(PSListController *)arg1 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSListController *)listController;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
@end
