/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/OverviewTopBarContent.h>

@class NSString;

@interface SteppingOverviewTopBarContent : OverviewTopBarContent {

	NSString* _routeName;

}

@property (nonatomic,copy) NSString * routeName;              //@synthesize routeName=_routeName - In the implementation block
-(void)setSelectedRoute:(id)arg1 withIndex:(unsigned long long)arg2 destinationName:(id)arg3 ;
-(void)_updateSecondaryText;
-(void)setRouteName:(NSString *)arg1 ;
-(NSString *)routeName;
@end

