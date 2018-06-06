/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSLocaleSelector.h>

@class COSInternationalController, NPSDomainAccessor, NPSManager;

@interface COSLocaleSelector : PSLocaleSelector {

	COSInternationalController* _internationalController;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) COSInternationalController * internationalController;              //@synthesize internationalController=_internationalController - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;                             //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                          //@synthesize syncManager=_syncManager - In the implementation block
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(id)initWithInternationalController:(id)arg1 ;
-(COSInternationalController *)internationalController;
-(void)setInternationalController:(COSInternationalController *)arg1 ;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
-(void)setLocaleFromCalendarID:(id)arg1 ;
-(id)currentLocale;
-(void)setLocale:(id)arg1 ;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NPSManager *)syncManager;
-(void)setLocaleFromLanguageIdentifier:(id)arg1 ;
-(void)setLocaleFromRegionCode:(id)arg1 ;
-(id)availableLocaleIdentifiers;
@end

