/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/WDSampleListDataProvider.h>

@class NSArray;

@interface WDCorrelationListDataProvider : WDSampleListDataProvider {

	NSArray* _dataTypes;

}
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(id)predicateForType:(id)arg1 ;
-(id)sampleTypes;
-(id)dataListViewController:(id)arg1 textForObject:(id)arg2 ;
-(id)restorationIdentifier;
@end
