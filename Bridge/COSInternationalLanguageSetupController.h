/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class NSString;

@interface COSInternationalLanguageSetupController : PSSetupController {

	NSString* _languageToSet;

}

@property (nonatomic,copy) NSString * languageToSet;              //@synthesize languageToSet=_languageToSet - In the implementation block
-(void)setLanguageToSet:(NSString *)arg1 ;
-(NSString *)languageToSet;
-(long long)preferredStatusBarStyle;
-(void)commit;
-(void)setupController;
-(BOOL)useOfficialLanguages;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
@end

