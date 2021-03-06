/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSSManager;

@interface COSUsageBundleDetailController : PSListController {

	NSSManager* _nssManager;

}

@property (nonatomic,retain) NSSManager * nssManager;              //@synthesize nssManager=_nssManager - In the implementation block
-(id)usageBundle;
-(void)confirmDeletion;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(id)valueForSpecifier:(id)arg1 ;
-(void)delete;
-(id)specifiers;
@end

