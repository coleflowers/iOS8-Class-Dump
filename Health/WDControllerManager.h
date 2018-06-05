/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStateRestoring.h>

@class HKHealthStore, HKDataCategoryController, HKDataUnitGroupController, HKUnitController, WDDashboardDataUnitGroupsController, WDDataProviderOrderController, WDSelectedTimeScopeController, WDDateCache, NSString;

@interface WDControllerManager : NSObject <UIStateRestoring> {

	HKHealthStore* _healthStore;
	HKDataCategoryController* _dataCategoryController;
	HKDataUnitGroupController* _dataUnitGroupController;
	HKUnitController* _unitController;
	WDDashboardDataUnitGroupsController* _dashboardDataUnitGroupsController;
	WDDataProviderOrderController* _dataProviderOrderController;
	WDSelectedTimeScopeController* _selectedTimeScopeController;
	WDDateCache* _dateCache;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                                                          //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKDataCategoryController * dataCategoryController;                                    //@synthesize dataCategoryController=_dataCategoryController - In the implementation block
@property (nonatomic,readonly) HKDataUnitGroupController * dataUnitGroupController;                                  //@synthesize dataUnitGroupController=_dataUnitGroupController - In the implementation block
@property (nonatomic,readonly) HKUnitController * unitController;                                                    //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,readonly) WDDashboardDataUnitGroupsController * dashboardDataUnitGroupsController;              //@synthesize dashboardDataUnitGroupsController=_dashboardDataUnitGroupsController - In the implementation block
@property (nonatomic,readonly) WDDataProviderOrderController * dataProviderOrderController;                          //@synthesize dataProviderOrderController=_dataProviderOrderController - In the implementation block
@property (nonatomic,readonly) WDSelectedTimeScopeController * selectedTimeScopeController;                          //@synthesize selectedTimeScopeController=_selectedTimeScopeController - In the implementation block
@property (nonatomic,readonly) WDDateCache * dateCache;                                                              //@synthesize dateCache=_dateCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<UIStateRestoring> restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
-(HKDataUnitGroupController *)dataUnitGroupController;
-(HKUnitController *)unitController;
-(WDDashboardDataUnitGroupsController *)dashboardDataUnitGroupsController;
-(WDDataProviderOrderController *)dataProviderOrderController;
-(WDSelectedTimeScopeController *)selectedTimeScopeController;
-(WDDateCache *)dateCache;
-(HKHealthStore *)healthStore;
-(id)init;
-(HKDataCategoryController *)dataCategoryController;
@end
