/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMUserDataCull : NSObject
+(unsigned long long)maxDeletedAge;
+(BOOL)isTimestampTrustworthy:(unsigned long long)arg1 ;
+(BOOL)isTimestamp:(unsigned long long)arg1 newerThanMaxAgeFromRightNow:(unsigned long long)arg2 ;
+(BOOL)isTimestampNewerThanMaxDeletedAge:(unsigned long long)arg1 ;
@end

