/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIClientContext.h>

@class NSBundle, SKUILocalizedStringDictionary;

@interface ASClientContext : SKUIClientContext {

	NSBundle* _bundle;
	SKUILocalizedStringDictionary* _localizedStrings;

}
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(void)getDefaultMetricsControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)localizedAlertWithError:(id)arg1 ;
@end

