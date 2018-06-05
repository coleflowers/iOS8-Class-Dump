/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@class NSMutableArray, NSMutableSet;

@interface SBAppSwitcherRemoteAlertSet : NSObject <NSCopying> {

	NSMutableArray* _alerts;
	NSMutableSet* _placeholderIdentifiers;

}
-(id)alertForDisplayLayout:(id)arg1 ;
-(id)alertForBundleIdentifier:(id)arg1 ;
-(id)placeholderBundleIdentifiers;
-(id)placeholderDisplayItems;
-(id)alertAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceholderForIdentifier:(id)arg1 ;
-(void)removePlaceholderForIdentifier:(id)arg1 ;
-(id)serviceBundleIdentifiers;
-(id)initWithAlertSet:(id)arg1 zone:(NSZone*)arg2 ;
-(void)addRemoteAlert:(id)arg1 ;
-(void)removeRemoteAlert:(id)arg1 ;
-(id)displayItems;
-(void)dealloc;
-(unsigned long long)count;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
