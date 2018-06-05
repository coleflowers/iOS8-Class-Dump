/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>

@protocol MapsDebugViewControllerDelegate;
@class NSMutableArray;

@interface VectorKitDebugRenderController : AuxiliaryDebugViewController {

	NSMutableArray* _debugFeatureSwitches;
	NSMutableArray* _debugRoadSwitches;
	id<MapsDebugViewControllerDelegate> _delegate;

}
+(id)navigationDestinationTitle;
-(void)featureDisableSwitchChanged:(id)arg1 ;
-(void)roadClassDisableSwitchChanged:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)delegate;
-(void)viewDidLoad;
@end

