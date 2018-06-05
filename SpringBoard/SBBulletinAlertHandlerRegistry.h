/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBBulletinAlertHandlerRegistry.h>

@protocol SBBulletinAlertHandlerRegistry
@required
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2;

@end


@class NSMutableDictionary, SBAlertItemsSettings, NSString;

@interface SBBulletinAlertHandlerRegistry : NSObject <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry> {

	NSMutableDictionary* _handlersBySectionID;
	SBAlertItemsSettings* _settings;
	BOOL _disabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertHandlersForSection:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addAlertHandler:(id)arg1 forSection:(id)arg2 ;
@end

