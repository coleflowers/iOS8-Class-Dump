/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIWindow.h>
#import <Maps/TraitsChangeObserving.h>

@class NSMapTable, UITraitCollection, NSString;

@interface MapsWindow : UIWindow <TraitsChangeObserving> {

	NSMapTable* _traitsObservers;
	BOOL _transitioning;
	UITraitCollection* _transitionTraits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MN25 mapsSizeClassPair; 
-(void)_maps_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)addTraitsChangeObserver:(id)arg1 willChangeHandler:(/*^block*/id)arg2 changeHandler:(/*^block*/id)arg3 didChangeHandler:(/*^block*/id)arg4 ;
-(id)_maps_effectiveTraitCollection;
-(void)_invokeTraitsChangeObserversForKey:(id)arg1 ;
-(void)removeTraitsChangeObserver:(id)arg1 ;
-(SCD_Struct_MN25)mapsSizeClassPair;
-(void)setHidden:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setRootViewController:(id)arg1 ;
@end

