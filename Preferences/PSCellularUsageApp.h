/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSCellularUsageApp : NSObject {

	NSString* _bundleIdentifier;
	NSString* _displayName;
	double _totalBytesUsed;
	double _roamingBytesUsed;

}

@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) double totalBytesUsed;                    //@synthesize totalBytesUsed=_totalBytesUsed - In the implementation block
@property (assign,nonatomic) double roamingBytesUsed;                  //@synthesize roamingBytesUsed=_roamingBytesUsed - In the implementation block
-(double)totalBytesUsed;
-(void)setTotalBytesUsed:(double)arg1 ;
-(double)roamingBytesUsed;
-(void)setRoamingBytesUsed:(double)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

