/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobilePhone/MobilePhone-Structs.h>
@class NSMutableDictionary;

@interface PHRecentsSharedMapNameCache : NSObject {

	NSMutableDictionary* _mapNameCache;

}

@property (nonatomic,retain) NSMutableDictionary * mapNameCache;              //@synthesize mapNameCache=_mapNameCache - In the implementation block
+(id)sharedCache;
-(void)preloadMapNameCacheWithRecentCalls:(id)arg1 ;
-(id)mapNameForRecentCall:(id)arg1 ;
-(CFPhoneNumberRef)_phoneNumberForRecentCall:(id)arg1 ;
-(id)_normalizePhoneNumber:(id)arg1 ;
-(NSMutableDictionary *)mapNameCache;
-(void)setMapNameCache:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
@end

