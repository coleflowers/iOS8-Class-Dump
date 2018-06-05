/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WDDataListViewControllerDataProvider <NSObject>
@required
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3;
-(id)dataListViewController:(id)arg1 textForObject:(id)arg2;
-(long long)cellStyleForDataListViewController:(id)arg1;
-(unsigned long long)numberOfSectionsForDataListViewController:(id)arg1;
-(id)dataListViewController:(id)arg1 titleForSection:(unsigned long long)arg2;
-(unsigned long long)dataListViewController:(id)arg1 numberOfObjectsForSection:(unsigned long long)arg2;
-(id)dataListViewController:(id)arg1 objectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
-(id)dataListViewController:(id)arg1 secondaryTextForObject:(id)arg2;
-(void)dataListViewController:(id)arg1 startCollectingDataForSource:(id)arg2 healthStore:(id)arg3 updateHandler:(/*^block*/id)arg4;
-(void)dataListViewController:(id)arg1 stopCollectingDataWithHealthStore:(id)arg2;
-(void)dataListViewController:(id)arg1 didRemoveObjectAtIndex:(unsigned long long)arg2 forSection:(unsigned long long)arg3;
-(void)dataListviewControllerDidDeleteAllData:(id)arg1;
-(id)metadataValuesForSample:(id)arg1;
-(id)restorationIdentifier;

@end

