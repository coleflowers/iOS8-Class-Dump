/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:07 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSURLCache;


@protocol WBSParsecSearchClientStorage <NSObject>
@property (nonatomic,copy) NSString * userGUID; 
@property (nonatomic,retain) NSDate * userGUIDExpirationDate; 
@property (nonatomic,readonly) NSURLCache * bagURLCache; 
@required
-(NSDate *)userGUIDExpirationDate;
-(NSString *)userGUID;
-(NSURLCache *)bagURLCache;
-(void)setUserGUID:(id)arg1;
-(void)setUserGUIDExpirationDate:(id)arg1;

@end
