/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MainChromeTopBarContentProvider.h>

@class NSString, MainChromeViewController;

@interface MainChromeTopBarMap : NSObject <MainChromeTopBarContentProvider> {

	BOOL _cachesRegular;
	id _cachedRegular;
	/*^block*/id _createRegular;
	BOOL _cachesCompressed;
	id _cachedCompressed;
	/*^block*/id _createCompressed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController; 
-(id)topBarContentForVariant:(long long)arg1 ;
-(void)setTopBarContentForVariant:(long long)arg1 options:(long long)arg2 fromCreationBlock:(/*^block*/id)arg3 ;
-(id)initWithTopBarContentForAllVariants:(id)arg1 ;
-(void)setTopBarContentForVariant:(long long)arg1 fromCreationBlock:(/*^block*/id)arg2 ;
-(id)init;
@end
