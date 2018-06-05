/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:45:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSFamilyCircle, SSFamilyMember, NSArray, NSString;

@interface ASPurchasedPage : NSObject {

	BOOL _didFilterInstalledApps;
	BOOL _hidesInstalledApps;
	long long _deviceType;
	SSFamilyCircle* _familyCircle;
	SSFamilyMember* _familyMember;
	NSArray* _items;
	NSString* _searchTerm;

}

@property (assign,nonatomic) long long deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,retain) SSFamilyCircle * familyCircle;              //@synthesize familyCircle=_familyCircle - In the implementation block
@property (nonatomic,retain) SSFamilyMember * familyMember;              //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) NSArray * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                        //@synthesize searchTerm=_searchTerm - In the implementation block
@property (assign,nonatomic) BOOL didFilterInstalledApps;                //@synthesize didFilterInstalledApps=_didFilterInstalledApps - In the implementation block
@property (assign,nonatomic) BOOL hidesInstalledApps;                    //@synthesize hidesInstalledApps=_hidesInstalledApps - In the implementation block
-(BOOL)didFilterInstalledApps;
-(SSFamilyMember *)familyMember;
-(BOOL)hidesInstalledApps;
-(void)setDidFilterInstalledApps:(BOOL)arg1 ;
-(void)setFamilyMember:(SSFamilyMember *)arg1 ;
-(void)setHidesInstalledApps:(BOOL)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(SSFamilyCircle *)familyCircle;
-(void)setFamilyCircle:(SSFamilyCircle *)arg1 ;
-(long long)deviceType;
@end
