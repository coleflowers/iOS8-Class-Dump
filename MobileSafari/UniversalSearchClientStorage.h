/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:07 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/WBSParsecSearchClientStorage.h>

@class NSString, NSDate, NSURLCache;

@interface UniversalSearchClientStorage : NSObject <WBSParsecSearchClientStorage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * userGUID; 
@property (nonatomic,retain) NSDate * userGUIDExpirationDate; 
@property (nonatomic,readonly) NSURLCache * bagURLCache; 
+(id)sharedStorage;
-(NSDate *)userGUIDExpirationDate;
-(NSString *)userGUID;
-(NSURLCache *)bagURLCache;
-(void)setUserGUID:(NSString *)arg1 ;
-(void)setUserGUIDExpirationDate:(NSDate *)arg1 ;
@end

