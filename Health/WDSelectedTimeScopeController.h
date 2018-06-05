/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface WDSelectedTimeScopeController : NSObject {

	NSHashTable* _observers;
	long long _selectedTimeScope;

}

@property (assign,nonatomic) long long selectedTimeScope;              //@synthesize selectedTimeScope=_selectedTimeScope - In the implementation block
-(long long)selectedTimeScope;
-(void)setSelectedTimeScope:(long long)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
@end
